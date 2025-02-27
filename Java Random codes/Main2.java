// Q26) 


import java.util.LinkedList;

class ProducerConsumer {
    LinkedList<Integer> buffer = new LinkedList<>();
    int capacity = 1;

    public void produce() throws InterruptedException {
        int value = 0;
        while (true) {
            synchronized (this) {
                while (buffer.size() == capacity) {
                    wait();
                }

                System.out.println("Producer produced: " + value);
                buffer.add(value++);

                notify();

                Thread.sleep(1000); // To simulate some time taken to produce
            }
        }
    }

    public void consume() throws InterruptedException {
        while (true) {
            synchronized (this) {
                while (buffer.size() == 0) {
                    wait();
                }

                int consumedValue = buffer.removeFirst();
                System.out.println("Consumer consumed: " + consumedValue);

                notify();

                Thread.sleep(1000); // To simulate some time taken to consume
            }
        }
    }
}

public class Main2 {
    public static void main(String[] args) {
        ProducerConsumer pc = new ProducerConsumer();

        Thread producerThread = new Thread(() -> {
            try {
                pc.produce();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        });

        Thread consumerThread = new Thread(() -> {
            try {
                pc.consume();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        });

        producerThread.start();
        consumerThread.start();
    }
}

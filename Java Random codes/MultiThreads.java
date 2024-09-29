// Q20) WAP in java MultiThreads that creates two threads - one thread with name CSthread and the other with 
// ITthread. 
// Each thread should display its respective name and execute after a gap of 500 ms. Each thread should also
// display a number indicating the number of times it got a chance to execute.


public class MultiThreads{
    public static void main(String []args){
        Thread csThread = new NamedThread("CSthread");
        Thread itThread = new NamedThread("ITthread");

        csThread.start();
        itThread.start();
    }
}

class NamedThread extends Thread{
    private int count = 0;

    public NamedThread(String name){
        super(name);
    }

    @Override
    public void run(){
        while(count<5){
            try{
                Thread.sleep(500);
                count++;
                System.out.println(getName() + " execution count: " + count);
            } catch(InterruptedException e){
                System.out.println(getName() + " was interrupted.");
            }
        }
    }
}
// Q15) Class definition, creating objects and constructors: 
// Write a java program to create a class named 'Bank ' with the following data 
// members: 
// • Name of depositor  
// • Address of depositor 
// • Account Number  
// • Balance in account 
 
// Class 'Bank' has a method for each of the following:  
// 1. Generate a unique account number for each depositor. 
// 2. For first depositor, account number will be 1001, for second depositor 
// it will be 1002 and so on 
// 3. Display information and balance of depositor 
// 4. Deposit more amount in balance of any depositor  
// 5. Withdraw some amount from balance deposited.  
// 6. Change address of depositor

// After creating the class, do the following operations. 
// 1. Enter the information (name, address, account number, balance) of the 
// depositors. Number of depositors is to be entered by the user. 
// 2. Print the information of any depositor. 
// 3. Add some amount to the account of any depositor and then display 
// final information of that depositor. 
// 4. Remove some amount from the account of any. 
// depositor and then display final information of that depositor. 
// 5. Change the address of any depositor and then display the final 
// information of that depositor. 
// 6. Randomly repeat these processes for some other 
// bank accounts.


import java.util.Scanner;

class Bank {
    private String name;
    private String address;
    private int accountNumber;
    private double balance;
    private static int nextAccountNumber = 1001;

    // Constructor
    public Bank(String name, String address, double balance) {
        this.name = name;
        this.address = address;
        this.accountNumber = nextAccountNumber++;
        this.balance = balance;
    }

    // Display information and balance of depositor
    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Address: " + address);
        System.out.println("Account Number: " + accountNumber);
        System.out.println("Balance: $" + balance);
    }

    // Deposit more amount in balance of any depositor
    public void deposit(double amount) {
        balance += amount;
        System.out.println("$" + amount + " deposited successfully.");
    }

    // Withdraw some amount from balance deposited
    public void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            System.out.println("$" + amount + " withdrawn successfully.");
        } else {
            System.out.println("Insufficient balance.");
        }
    }

    // Change address of depositor
    public void changeAddress(String newAddress) {
        address = newAddress;
        System.out.println("Address changed successfully.");
    }
}

public class Main1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of depositors: ");
        int numDepositors = scanner.nextInt();

        Bank[] depositors = new Bank[numDepositors];

        for (int i = 0; i < numDepositors; i++) {
            System.out.println("Enter details for depositor " + (i + 1) + ":");
            scanner.nextLine(); // Consume newline
            System.out.print("Name: ");
            String name = scanner.nextLine();
            System.out.print("Address: ");
            String address = scanner.nextLine();
            System.out.print("Balance: $");
            double balance = scanner.nextDouble();
            depositors[i] = new Bank(name, address, balance);
        }

        // Print the information of any depositor
        System.out.print("\nEnter the depositor number you want to view: ");
        int depositorNumber = scanner.nextInt();
        depositors[depositorNumber - 1].displayInfo();

        // Add some amount to the account of any depositor and then display final information
        System.out.print("\nEnter the depositor number you want to deposit money into: ");
        depositorNumber = scanner.nextInt();
        System.out.print("Enter the amount to deposit: $");
        double depositAmount = scanner.nextDouble();
        depositors[depositorNumber - 1].deposit(depositAmount);
        depositors[depositorNumber - 1].displayInfo();

        // Remove some amount from the account of any depositor and then display final information
        System.out.print("\nEnter the depositor number you want to withdraw money from: ");
        depositorNumber = scanner.nextInt();
        System.out.print("Enter the amount to withdraw: $");
        double withdrawAmount = scanner.nextDouble();
        depositors[depositorNumber - 1].withdraw(withdrawAmount);
        depositors[depositorNumber - 1].displayInfo();

        // Change the address of any depositor and then display the final information
        System.out.print("\nEnter the depositor number you want to change the address for: ");
        depositorNumber = scanner.nextInt();
        scanner.nextLine(); // Consume newline
        System.out.print("Enter the new address: ");
        String newAddress = scanner.nextLine();
        depositors[depositorNumber - 1].changeAddress(newAddress);
        depositors[depositorNumber - 1].displayInfo();

        scanner.close();
    }
}

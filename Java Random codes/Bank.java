// Q3) Using the switch statement, write a menu driven program to calculate the maturity amount of a Bank Deposit
// The user is given the following options: 
// (i) Term Deposit
// (ii) Recurring Deposit


import java.util.Scanner;

public class Bank {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Menu:");
        System.out.println("(a) Term Deposit");
        System.out.println("(b) Recurring Deposit");
        System.out.println("Enter your choice(a/b):");

        char choice = scanner.next().charAt(0);

        double maturity = 0;

        switch (choice) {
            case 'a':
                System.out.println("Enter principal amount(P):");
                double principalTerm = scanner.nextDouble();
                System.out.println("Enter rate of interest(r):");
                double rateTerm = scanner.nextDouble();
                System.out.println("Enter time period in years(n):");
                int timeTerm = scanner.nextInt();

                maturity = principalTerm * Math.pow((1 + rateTerm / 100), timeTerm);
                break;

            case 'b':
                System.out.println("Enter Monthly Installment (P):");
                double installmentRecurring = scanner.nextDouble();
                System.out.println("Enter rate of interest (r):");
                double rateRecurring = scanner.nextDouble();
                System.out.println("Enter time period in months(n):");
                int timeRecurring = scanner.nextInt();

                maturity = installmentRecurring * timeRecurring +
                        installmentRecurring * timeRecurring * (timeRecurring + 1) / 2 * rateRecurring / 100 * 1 / 12;
                break;

            default:
                System.out.println("Invalid Choice!");
        }
        System.out.println("Maturity Amount: " + maturity);
        scanner.close();
    }
}

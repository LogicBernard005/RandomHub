// Q17)  Write a java program to accept and print the employee details during runtime. The details 
// will include employee id, name, dept_ Id. The program should raise an exception if user 
// inputs incomplete or incorrect data. The entered value should meet the following conditions: 
// (i) First Letter of employee name should be in capital letter. 
// (ii) Employee id should be between 2001 and 5001 
// (iii) Department id should be an integer between 1 and 5. 
// If the above conditions are not met then the application should raise specific exception else 
// should complete normal execution.



import java.util.Scanner;

class EmployeeDataValidationException extends Exception{
    public  EmployeeDataValidationException(String message){
        super(message);
    }
}

class Employee{
    private int employeeId;
    private String name;
    private int deptId;

    public Employee(int employeeId, String name, int deptId) throws EmployeeDataValidationException{
        if(!isValidEmployeeId(employeeId))
            throw new EmployeeDataValidationException("Employee ID must be btw 2001 and 5000");
        if(!isValidName(name))
            throw new EmployeeDataValidationException("Employee name must begin with a capital letter");
        if(!isValidDeptId(deptId))
            throw new EmployeeDataValidationException("Department ID must be btw 1 and 5");

        this.employeeId = employeeId;
        this.name = name;
        this.deptId = deptId;

    }

        private boolean isValidEmployeeId(int id){
            return id >= 2001 && id <= 5001;
        }

        private boolean isValidName(String name){
            return Character.isUpperCase(name.charAt(0));
        }

        private boolean isValidDeptId(int id){
            return id >= 1 && id <= 5;
        }

        @Override 
        public String toString(){ // Explanation Required
            return "Employee ID: " + employeeId + "\nName: " + name + "\nDepartment ID: " + deptId;
        }
    }

public class Q17{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        try{
            System.out.print("Enter Employee ID: ");
            int employeeId = Integer.parseInt(sc.nextLine());

            System.out.print("Enter Employee Name: ");
            String name = sc.nextLine();

            System.out.print("Enter Department ID: ");
            int deptId = Integer.parseInt(sc.nextLine());

            Employee emp = new Employee(employeeId, name, deptId);
            System.out.println("Successfully created employee with details:");
            System.out.println(emp);
        }
        catch(NumberFormatException nfe){
            System.out.println("Invalid input: Please enter valid integers for ID fields");
        }
        catch(EmployeeDataValidationException edve){
            System.out.println(edve.getMessage());
        }
        catch(Exception e){
            System.out.println("An Unexpected error occured: " + e.getMessage());
        }
        finally{
            sc.close();
        }
    }
}

// Q2) Write a Java program to take input as a command line argument.
//      Your name, your course, university roll no.. and semester
//      and display the information

public class StudentInfo{
    public static void main(String args[]){
        if(args.length<4){
            System.out.println("Usage: java StudentInfo <Name> <University_RollNo> <Course> <Semester>");
            return;
        }
        String name = args[0];
        String universityRollNo = args[1];
        String course = args[2];
        String semester = args[3];

        // Display the Information
        System.out.println("Name: " + name);
        System.out.println("University_RollNo " + universityRollNo);
        System.out.println("Course: " + course);
        System.out.println("Semester: " + semester);
    }

}
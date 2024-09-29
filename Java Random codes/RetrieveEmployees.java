// Q31b) Write a JDBC Program to retrieves all the records from employee database.


import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

public class RetrieveEmployees {
    public static void main(String[] args) {
        String url = "jdbc:mysql://localhost:3306/EmployeeDB";
        String user = "root"; // replace with your DB username
        String password = "12345"; // replace with your DB password

        String query = "SELECT * FROM Employee";

        try (Connection conn = DriverManager.getConnection(url, user, password);
             Statement stmt = conn.createStatement();
             ResultSet rs = stmt.executeQuery(query)) {

            System.out.println("Employee Records:");
            while (rs.next()) {
                String name = rs.getString("Name");
                String code = rs.getString("Code");
                String designation = rs.getString("Designation");
                double salary = rs.getDouble("Salary");
                System.out.printf("Name: %s, Code: %s, Designation: %s, Salary: %.2f%n",
                        name, code, designation, salary);
            }

        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }
}

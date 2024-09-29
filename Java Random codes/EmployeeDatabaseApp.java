// Q31a) Create a database of employee with the following fields 

// Name 
// Code 
// Designation 
// Salary 

// Write a java program to create GUI java application to take employee data from the 
// TextFields and store in database using JDBC connectivity.


import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class EmployeeDatabaseApp extends JFrame {
    private JTextField nameField;
    private JTextField codeField;
    private JTextField designationField;
    private JTextField salaryField;
    private JButton submitButton;
    private JButton resetButton;
    private JButton exitButton;

    public EmployeeDatabaseApp() {
        createView();

        setTitle("Employee Database");
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setSize(400, 250);
        setLocationRelativeTo(null);
        setResizable(false);
    }

    private void createView() {
        JPanel panel = new JPanel();
        getContentPane().add(panel);

        panel.setLayout(new GridLayout(5, 2, 10, 10));

        JLabel nameLabel = new JLabel("Name:");
        panel.add(nameLabel);

        nameField = new JTextField();
        panel.add(nameField);

        JLabel codeLabel = new JLabel("Code:");
        panel.add(codeLabel);

        codeField = new JTextField();
        panel.add(codeField);

        JLabel designationLabel = new JLabel("Designation:");
        panel.add(designationLabel);

        designationField = new JTextField();
        panel.add(designationField);

        JLabel salaryLabel = new JLabel("Salary:");
        panel.add(salaryLabel);

        salaryField = new JTextField();
        panel.add(salaryField);

        submitButton = new JButton("Submit");
        submitButton.addActionListener(new SubmitButtonActionListener());
        panel.add(submitButton);

        resetButton = new JButton("Reset");
        resetButton.addActionListener(new ResetButtonActionListener());
        panel.add(resetButton);

        exitButton = new JButton("Exit");
        exitButton.addActionListener(new ExitButtonActionListener());
        panel.add(exitButton);
    }

    private class SubmitButtonActionListener implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            String name = nameField.getText();
            String code = codeField.getText();
            String designation = designationField.getText();
            double salary = Double.parseDouble(salaryField.getText());

            String url = "jdbc:mysql://localhost:3306/EmployeeDB";
            String user = "root"; // replace with your DB username
            String password = "12345"; // replace with your DB password

            String query = "INSERT INTO Employee (Name, Code, Designation, Salary) VALUES (?, ?, ?, ?)";

            try (Connection conn = DriverManager.getConnection(url, user, password);
                 PreparedStatement stmt = conn.prepareStatement(query)) {

                stmt.setString(1, name);
                stmt.setString(2, code);
                stmt.setString(3, designation);
                stmt.setDouble(4, salary);

                stmt.executeUpdate();

                JOptionPane.showMessageDialog(null, "Employee added successfully!");

            } catch (SQLException ex) {
                ex.printStackTrace();
                JOptionPane.showMessageDialog(null, "Error adding employee: " + ex.getMessage());
            }
        }
    }

    private class ResetButtonActionListener implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            nameField.setText("");
            codeField.setText("");
            designationField.setText("");
            salaryField.setText("");
        }
    }

    private class ExitButtonActionListener implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            System.exit(0);
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> new EmployeeDatabaseApp().setVisible(true));
    }
}

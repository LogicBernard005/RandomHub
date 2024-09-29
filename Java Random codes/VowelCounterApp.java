// Q30) Write a GUI program to develop an application that receives a string in one text field, and 
// count number of vowels in a string and returns it in another text field, when the button 
// named “CountVowel” is clicked. When the button named “Reset” is clicked it will reset 
// the value of textfield one and Textfield two .When the button named “Exit” is clicked it 
// will closed the application.


import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class VowelCounterApp extends JFrame {
    private JTextField inputField;
    private JTextField outputField;
    private JButton countButton;
    private JButton resetButton;
    private JButton exitButton;

    public VowelCounterApp() {
        createView();

        setTitle("Vowel Counter");
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setSize(400, 150);
        setLocationRelativeTo(null);
        setResizable(false);
    }

    private void createView() {
        JPanel panel = new JPanel();
        getContentPane().add(panel);

        panel.setLayout(new GridLayout(3, 2, 5, 5));

        JLabel inputLabel = new JLabel("Enter a string:");
        panel.add(inputLabel);

        inputField = new JTextField();
        panel.add(inputField);

        JLabel outputLabel = new JLabel("Number of vowels:");
        panel.add(outputLabel);

        outputField = new JTextField();
        outputField.setEditable(false);
        panel.add(outputField);

        countButton = new JButton("CountVowel");
        countButton.addActionListener(new CountButtonActionListener());
        panel.add(countButton);

        resetButton = new JButton("Reset");
        resetButton.addActionListener(new ResetButtonActionListener());
        panel.add(resetButton);

        exitButton = new JButton("Exit");
        exitButton.addActionListener(new ExitButtonActionListener());
        panel.add(exitButton);
    }

    private class CountButtonActionListener implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            String inputText = inputField.getText();
            int vowelCount = countVowels(inputText);
            outputField.setText(String.valueOf(vowelCount));
        }

        private int countVowels(String input) {
            int count = 0;
            String vowels = "aeiouAEIOU";
            for (char ch : input.toCharArray()) {
                if (vowels.indexOf(ch) != -1) {
                    count++;
                }
            }
            return count;
        }
    }

    private class ResetButtonActionListener implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            inputField.setText("");
            outputField.setText("");
        }
    }

    private class ExitButtonActionListener implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            System.exit(0);
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                new VowelCounterApp().setVisible(true);
            }
        });
    }
}

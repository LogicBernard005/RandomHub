// Q14)  Write a java program to implement abstract class and abstract method with following details: 

// Create  a abstract  Base Class
//  Data members: 
//         Temperature 
// double temp; 
// Method members: 
// void setTempData(double) 
// abstact void changeTemp() 

// Sub Class Fahrenheit      
// Data members: 
// double ctemp; 
// method member: 
// (subclass of Temperature) 
// Override abstract method  changeTemp() to convert Fahrenheit temperature into degree 
// Celsius by using formula C=5/9*(F-32) and display converted temperature

// Sub Class Celsius                  
// Data member: 
// double  ftemp; 
// Method member: 
// (subclass of Temperature) 
// Override abstract method changeTemp() to convert degree Celsius into Fahrenheit 
// temperature  by using  formula F=9/5*c+32 and display converted temperature



import java.util.Scanner;

abstract class Temperaturee{
    protected double temp;

    public void setTempData(double temp){
        this.temp = temp;
    }
    abstract void changeTemp();
}

class Fahrenheitt extends Temperaturee{
    private double ctemp;

    @Override
    void changeTemp(){
        // Convert Fahrenheit to Celsius 
        ctemp = (5.0/9.0) * (temp-32);
        System.out.println(temp + " degrees Fahrenheit is " + ctemp + " degrees Celsius.");
    }
}

class Celsiuss extends Temperaturee{
    private double ftemp;

    @Override
    void changeTemp(){
        ftemp = (9.0 / 5.0) * temp + 32;
        System.out.println(temp + " degrees Celsius is " + ftemp + "degrees Fahrenheit");
    }
}


public class TemperatureConversion1{
    public static void main(String []args){
        Scanner scanner = new Scanner (System.in);

        // Get Fahrenheit i/p from user
        System.out.println("Enter the temperature in Fahrenheit:");
        double FahrenheitTemp = scanner.nextDouble();
        Fahrenheitt fahrenheit = new Fahrenheitt();
        fahrenheit.setTempData(fahrenheitTemp);
        fahrenheit.changeTemp();

        // Get Celsius i/p from the user
        System.out.println("Enter the temperature in Celsius:");
        double celsiusTemp = scanner.nextDouble();
        Celsiuss celsius = new Celsiuss();
        celsius.setTempData(celsiusTemp);
        celsius.changeTemp();

        scanner.close();
    }
}










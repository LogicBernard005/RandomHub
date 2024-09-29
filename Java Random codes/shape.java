// Q17) Write a java program to calculate the area of a rectangle, a square and a circle. Create an 
// abstract class 'Shape' with three abstract methods namely rectangleArea() taking two 
// parameters, squareArea() and circleArea() taking one parameter each.  Now create another 
// class ‘Area’ containing all the three methods rectangleArea(),squareArea() and circleArea() 
// for printing the area of rectangle, square and circle respectively. Create an object of class 
// Area and call all the three methods.


abstract class Shape {
    abstract void rectangleArea(double length, double width);
    abstract void squareArea(double side);
    abstract void circleArea(double radius);
}

class Area extends Shape {
    @Override
    void rectangleArea(double length, double width) {
        double area = length * width;
        System.out.println("Area of Rectangle: " + area);
    }

    @Override
    void squareArea(double side) {
        double area = side * side;
        System.out.println("Area of Square: " + area);
    }

    @Override
    void circleArea(double radius) {
        double area = Math.PI * radius * radius;
        System.out.println("Area of Circle: " + area);
    }
}

public class Main {
    public static void main(String[] args) {
        Area area = new Area();

        // Calculate and print the area of a rectangle
        area.rectangleArea(5, 8);

        // Calculate and print the area of a square
        area.squareArea(4);

        // Calculate and print the area of a circle
        area.circleArea(3.5);
    }
}

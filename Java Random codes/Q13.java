// Q13) WAP in java to calculate the area of a rectangle, a square and a circle. Create an abstranct class 'Shape'



abstract class Shape{
    abstract void rectanleArea(double length, double width);
    abstract void squareArea(double side);
    abstract void circleArea(double radius);
}

class Area extends Shape{
    @Override 
    void rectangleArea(double length, double width){
        double area = length * width;
        System.out.println("Area of Rectangle: " + area);
    }

    @Override
    void squareArea(double side){
        double area = side * side;
        System.out.println("Area of Square: " + area);
    }

    @Override 
    void circleArea(double radius){
        double area = Math.PI * radius * radius;
        System.out.println("Area of Circle: " + area);
    }
}

public class Main(){
    public static void main(String [] args){
        Area area = new Area();

        area.rectanleArea(5, 8);
        area.squareArea(4);
        area.circleArea(3.5);
    }
}
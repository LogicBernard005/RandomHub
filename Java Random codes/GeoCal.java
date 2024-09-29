// Q15) WAP in java to create an interface that consists of a method to display volume() as an abstract method and redefine
//      this method in the derived classes to suit their requirements.
//      Create classes called Cone, Hemisphere and Cylinder that implements the interface. Using these three classes design a program
//      that will accept dimensions of a cone, cylinder and hemisphere interactively and display the volumes. 



import java.util.Scanner;

interface Volume{
    void displayVolume();
}

class Cone implements Volume{
    private double radius;
    private double height;

    public Cone(double radius, double height){
        this.radius = radius;
        this.height = height;
    }

    @Override
    public void displayVolume(){
        double volume = (1.0/3.0) * Math.PI * radius * radius * height;
        System.out.println("The Volume of the cone is: " + volume);
    }
}

class Hemisphere implements Volume {
    private double radius;

    public Hemisphere(double radius) {
        this.radius = radius;
    }

    @Override
    public void displayVolume() {
        double volume = (2.0 / 3.0) * Math.PI * Math.pow(radius, 3);
        System.out.println("The volume of the hemisphere is: " + volume);
    }
}


class Cylinder implements Volume {
    private double radius;
    private double height;

    public Cylinder(double radius, double height) {
        this.radius = radius;
        this.height = height;
    }

    @Override
    public void displayVolume() {
        double volume = Math.PI * Math.pow(radius, 2) * height;
        System.out.println("The volume of the cylinder is: " + volume);
    }
}


public class GeoCal{
    public static void main(String args[]){
        Scanner scanner = new Scanner(System.in);

        // Get cone dimensions and display volume 
        System.out.println("Enter the radius and hegiht of the cone");
        double coneRadius = scanner.nextDouble();
        double coneHeight = scanner.nextDouble();
        Cone cone = new Cone(coneRadius, coneHeight);
        cone.displayVolume();

        // Get hemisphere dimensions and display volume
        System.out.println("Enter the radius of hemisphere");
        double hemisphereRadius = scanner.nextDouble();
        Hemisphere hemisphere = new Hemisphere(hemisphereRadius);
        hemisphere.displayVolume();

        // Get Cylinder dimensions and display volume 
        System.out.println("Enter the radius and height of the cylinder: ");
        double cylinderRadius = scanner.nextDouble();
        double cylinderHeight = scanner.nextDouble();
        Cylinder cylinder = new Cylinder(cylinderRadius, cylinderHeight);
        cylinder.displayVolume();

        scanner.close();
    }

}
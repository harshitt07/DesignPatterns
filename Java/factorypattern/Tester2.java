package factorypattern;

public class Tester2 {
    public static void main(String[] args) {
        String shapeType = "rectangle";

        Shape shape = null;
        if(shapeType.equals("circle")) {
            shape = new Circle();
        } else if(shapeType.equals("square")) {
            shape = new Square();
        } else if(shapeType.equals("rectangle")) {
            shape = new Rectangle();
        }

        shape.getArea();
    }
}

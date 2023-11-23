package factorypattern;

public class ShapeFactory {
    Shape getShapeObject(String shapeType) {
        Shape shape = null;
        if(shapeType.equals("circle")) {
            shape = new Circle();
        } else if(shapeType.equals("square")) {
            shape = new Square();
        } else if(shapeType.equals("rectangle")) {
            shape = new Rectangle();
        }
        return shape;
    }
}

package factorypattern;

public class Tester3 {

    public static void main(String[] args) {
        String shapeType = "circle";
        ShapeFactory shapeFactory = new ShapeFactory();
        Shape shape = shapeFactory.getShapeObject(shapeType);
        shape.getArea();
    }

}


/*
* Examples 1:
*   PaymentMethodFactory => If a user want to make payment through PayPal, BankTransfer, CreditCardPayment, UpiPayment, DebitCardPayment, etc
*   LoggerFactory        => ConsoleLogger, NewRelicLogger, FileLogger, etc
*   WeaponFactory        => Sword, Knife, Gun,
*       HomeClass, ParkClass, BattleFieldClass
*
* */
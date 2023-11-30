package decoratorpattern.pizza;

public class Cheese extends BasePizza {
    @Override
    public int cost() {
        System.out.println("Adding the cost of Cheeze Pizza!");
        return 100;
    }
}

package decoratorpattern.pizza;

public class VegDelight extends BasePizza {
    @Override
    public int cost() {
        System.out.println("Adding the cost of VegDelight Pizza!");
        return 300;
    }
}

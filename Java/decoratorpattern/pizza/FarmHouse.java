package decoratorpattern.pizza;

public class FarmHouse extends BasePizza {
    @Override
    public int cost() {
        System.out.println("Adding the cost of FarmHouse Pizza!");
        return 200;
    }
}

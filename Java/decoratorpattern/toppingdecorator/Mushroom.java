package decoratorpattern.toppingdecorator;

import decoratorpattern.pizza.BasePizza;

public class Mushroom extends ToppingDecorator {

    BasePizza basePizza;

    public Mushroom(BasePizza basePizza) {
        this.basePizza = basePizza;
    }

    @Override
    public int cost() {
        System.out.println("Adding the cost of Mushroom in " + getPizzaName(this.basePizza.getClass().getName()) + "!");
        return this.basePizza.cost() + 30;
    }
}

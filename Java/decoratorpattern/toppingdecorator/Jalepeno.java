package decoratorpattern.toppingdecorator;

import decoratorpattern.pizza.BasePizza;

public class Jalepeno extends ToppingDecorator {

    BasePizza basePizza;

    public Jalepeno(BasePizza basePizza) {
        this.basePizza = basePizza;
    }

    @Override
    public int cost() {
        System.out.println("Adding the cost of Jalepeno in " + getPizzaName(this.basePizza.getClass().getName() )+ "!");
        return this.basePizza.cost() + 20;
    }
}

package decoratorpattern.toppingdecorator;

import decoratorpattern.pizza.BasePizza;

public class ExtraCheese extends ToppingDecorator {

    BasePizza basePizza;

    public ExtraCheese(BasePizza basePizza) {
        this.basePizza = basePizza;
    }

    @Override
    public int cost() {
        System.out.println("Adding the cost of Extra Cheeze in " + getPizzaName(this.basePizza.getClass().getName()) + "!");
        return basePizza.cost() + 10;
    }
}

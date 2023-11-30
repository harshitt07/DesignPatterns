package decoratorpattern.toppingdecorator;

import decoratorpattern.pizza.BasePizza;

public abstract class ToppingDecorator extends BasePizza {

    public String getPizzaName(String str) {
        int lastDotIndex = str.lastIndexOf('.');
        return str.substring(lastDotIndex + 1);
    }

}

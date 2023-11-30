package decoratorpattern;

import decoratorpattern.pizza.Cheese;
import decoratorpattern.pizza.BasePizza;
import decoratorpattern.pizza.FarmHouse;
import decoratorpattern.pizza.VegDelight;
import decoratorpattern.toppingdecorator.ExtraCheese;
import decoratorpattern.toppingdecorator.Jalepeno;
import decoratorpattern.toppingdecorator.Mushroom;

import java.util.ArrayList;
import java.util.List;

public class Tester {

    public static void main(String[] args) {

        List<BasePizza> pizzas = new ArrayList<>();

        pizzas.add(new Mushroom(new Jalepeno(new Cheese())));
        pizzas.add(new Mushroom(new ExtraCheese(new VegDelight())));
        pizzas.add(new Mushroom(new ExtraCheese(new Jalepeno(new ExtraCheese(new FarmHouse())))));

        for(BasePizza basePizza : pizzas) {
            System.out.println(basePizza.cost());
            System.out.println();
        }
    }

}

/*
* Output:
*
Adding the cost of Mushroom in Jalepeno!
Adding the cost of Jalepeno in Cheese!
Adding the cost of Cheeze Pizza!
150

Adding the cost of Mushroom in ExtraCheese!
Adding the cost of Extra Cheeze in VegDelight!
Adding the cost of VegDelight Pizza!
340

Adding the cost of Mushroom in ExtraCheese!
Adding the cost of Extra Cheeze in Jalepeno!
Adding the cost of Jalepeno in ExtraCheese!
Adding the cost of Extra Cheeze in FarmHouse!
Adding the cost of FarmHouse Pizza!
270
*
*
* */

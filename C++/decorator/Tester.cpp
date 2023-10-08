#include "iostream"
#include "vector"

#include "./pizza/FarmHouse.h"
#include "./pizza/Margherita.h"
#include "./pizza/VegDelight.h"

#include "./toppings/Jalapeno.h"
#include "./toppings/Mushroom.h"
#include "./toppings/ExtraCheese.h"


using namespace std;

int main() {
    vector<BasePizza*> pizzas;

    pizzas.push_back(new Margherita()); // Margherita Pizza
    pizzas.push_back(new ExtraCheese(new Margherita())); // Extra Cheese Margherita Pizza
    pizzas.push_back(new Jalpeno(new Margherita())); // Jalapenos Margherita Pizza
    pizzas.push_back(new ExtraCheese(new Jalpeno(new Margherita()))); // Extra Cheese Jalapenos Margherita Pizza
    pizzas.push_back(new ExtraCheese(new ExtraCheese(new Jalpeno(new Margherita())))); // Dual Extra Cheese Jalapenos Margherita Pizza

    // Printing the costs
    for(int i = 0; i < pizzas.size(); i++) {
        BasePizza* basePizza = pizzas[i];
        cout << "Pizza " << i << ":\n";
        cout << basePizza->cost() << endl << endl;
    }
    
    return 0;
}

/*
Output:

Pizza 0:
Adding the cost for Margherita!
150

Pizza 1:
Adding the cost for ExtraCheese!
Adding the cost for Margherita!
170

Pizza 2:
Adding the cost for Jalapenos!
Adding the cost for Margherita!
165

Pizza 3:
Adding the cost for ExtraCheese!
Adding the cost for Jalapenos!
Adding the cost for Margherita!
185

Pizza 4:
Adding the cost for ExtraCheese!
Adding the cost for ExtraCheese!
Adding the cost for Jalapenos!
Adding the cost for Margherita!
205

*/
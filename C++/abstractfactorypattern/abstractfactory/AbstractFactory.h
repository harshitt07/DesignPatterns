#include "string"

#include "./../factory/EconomyCarFactory.h"
#include "./../factory/LuxoryCarFactory.h"

using namespace std;

class AbstractFactory {
    public:
    Factory* getInstance(string factoryType) {
        if(factoryType == "ECF") {
            return new EconomicCarFactory();
        } else if(factoryType == "LCF") { 
            return new LuxoryCarFactory();
        }
        return nullptr;
    }
};
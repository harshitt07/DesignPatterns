#include "iostream"

#include "./Singleton.h"

using namespace std;

int main() {
    
    Singleton *singleton = Singleton::getInstance();
    Singleton *singleton1 = Singleton::getInstance();
    Singleton *singleton2 = Singleton::getInstance();

    return 0;
}

// g++ -std=c++11 -o tester Tester.cpp
#include "iostream"
using namespace std;

#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {

    private:

    static Singleton* singleton;

    Singleton() { }

    public:
    static Singleton* getInstance() {
        if(singleton == nullptr) {
            cout << "First Instance of Singleton\n";
            singleton = new Singleton();
        } else {
            cout << "Returning the existing instance of Singleton\n";
        }
        return singleton;
    }
};

Singleton* Singleton::singleton = nullptr; 

#endif
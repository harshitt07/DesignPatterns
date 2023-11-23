package singleton;

import java.util.ArrayList;

class SingletonEager {
    private static SingletonEager singletonObject = new SingletonEager();

    private SingletonEager() { }

    public static SingletonEager getInstance() {
        return singletonObject;
    }
}

// Lazy Initialization
class SingletonLazy {

    private static SingletonLazy singleton = null;

    private SingletonLazy() { }

    public static SingletonLazy getInstance() {
        if(singleton == null) {
            singleton = new SingletonLazy();
        }
        return singleton;
    }

}

// Lazy Initialization with Synchronization
class SingletonSync {

    private static SingletonSync singleton = null;

    private SingletonSync() { }

    // 1000 threads, T1
    public synchronized static SingletonSync getInstance() {
        // for loop
        if(singleton == null) {
            singleton = new SingletonSync();
        }
        return singleton;
    }

}

// Lazy Initialization with Synchronization Double Locking
public class Singleton {

    private static Singleton singleton = null;

    private Singleton() { }

    // 1000 threads, T1
    public static Singleton getInstance() {
        // for loop, T2
        if(singleton == null) {
            // T1 => singleton1 = new Singleton()
            // T2 => singleton2 = new Singleton()
            synchronized (Singleton.class) {
                if(singleton == null) {
                    singleton = new Singleton();
                }
            }
        }
        return singleton;
    }

}
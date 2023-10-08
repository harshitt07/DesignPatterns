#include "iostream"

#include "./Observable/IPhoneStockObservableImpl.h"
#include "./Observer/SmsNotificationAlertObserverImpl.h"
#include "./Observer/EmailNotificationAlertObserverImpl.h"

using namespace std;

int main() {
    StocksObservable* iPhoneStockObservable = new IPhoneStockObservableImpl(0);

    NotificationAlertObserver* observer1 = new SmsNotificationAlertObserverImpl("+91 9839 521 999", iPhoneStockObservable);
    NotificationAlertObserver* observer2 = new EmailNotificationAlertObserverImpl("harshit.punter19@gmail.com", iPhoneStockObservable);
    NotificationAlertObserver* observer3 = new SmsNotificationAlertObserverImpl("+91 919819 3348", iPhoneStockObservable);

    iPhoneStockObservable->add(observer1);
    iPhoneStockObservable->add(observer2);
    iPhoneStockObservable->add(observer3);

    iPhoneStockObservable->setStockCount(100);

    return 0;
}
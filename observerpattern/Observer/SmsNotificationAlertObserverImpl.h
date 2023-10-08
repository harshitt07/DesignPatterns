#include "iostream"
#include "string"

#include "./NotificationAlertObserver.h"
#include "./../Observable/StocksObservable.h"

using namespace std;

#ifndef SMS_NOTIFICATION_STOCKS_OBSERVER_IMPL_H
#define SMS_NOTIFICATION_STOCKS_OBSERVER_IMPL_H

class SmsNotificationAlertObserverImpl : public NotificationAlertObserver {

    StocksObservable* stocksObservable;
    string number;

    public:
    void update() {
        cout << "Sending SMS Update!!!\n";
    }

    SmsNotificationAlertObserverImpl(string _number, StocksObservable* _stocksObservable) {
        number = _number;
        stocksObservable = _stocksObservable;
    }

};

#endif
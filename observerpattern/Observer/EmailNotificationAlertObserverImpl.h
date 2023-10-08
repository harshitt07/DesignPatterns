#include "iostream"
#include "string"

#include "./NotificationAlertObserver.h"
#include "./../Observable/StocksObservable.h"

using namespace std;

#ifndef EMAIL_NOTIFICATION_STOCKS_OBSERVER_IMPL_H
#define EMAIL_NOTIFICATION_STOCKS_OBSERVER_IMPL_H

class EmailNotificationAlertObserverImpl : public NotificationAlertObserver {

    StocksObservable* stocksObservable;
    string emailId;

    public:
    void update() {
        cout << "Sending Email Update!!!\n";
    }

    EmailNotificationAlertObserverImpl(string _emailId, StocksObservable* _stocksObservable) {
        emailId = _emailId;
        stocksObservable = _stocksObservable;
    }

};

#endif
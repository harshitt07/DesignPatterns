#ifndef STOCKS_OBSERVABLE_H
#define STOCKS_OBSERVABLE_H

class NotificationAlertObserver;

class StocksObservable {

    public:

    virtual void add(NotificationAlertObserver* observer) = 0;
    virtual void remove(NotificationAlertObserver* observer) = 0;
    virtual void notifySubscribers() = 0;
    virtual void setStockCount(int newStockCount) = 0;
    virtual int getStockCount() = 0;
};

#endif
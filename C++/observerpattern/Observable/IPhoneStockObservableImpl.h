#include "vector"

#include "./StocksObservable.h"
#include "./../Observer/NotificationAlertObserver.h"

using namespace std;

#ifndef IPHONE_STOCKS_OBSERVABLE_H
#define IPHONE_STOCKS_OBSERVABLE_H

class IPhoneStockObservableImpl : public StocksObservable {

    vector<NotificationAlertObserver*> observerList;
    int stockCount;

    public:

    IPhoneStockObservableImpl(int _stockCount) {
        stockCount = _stockCount;
    }

    void add(NotificationAlertObserver* observer) {
        observerList.push_back(observer);
    }

    void remove(NotificationAlertObserver* observer) {

    }

    void notifySubscribers() {
        for(int i = 0; i < observerList.size(); i++) {
            NotificationAlertObserver* observer = observerList[i];
            observer->update();
        }
    }

    void setStockCount(int newStockCount) {
        if(stockCount == 0) {
            notifySubscribers();
        }
        stockCount += newStockCount;
        
    }

    int getStockCount() {
        return stockCount;
    }

};

#endif
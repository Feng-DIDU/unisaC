#ifndef TRADEMANAGER_H
#define TRADEMANAGER_H

#include "Catalogue.h"
#include "Item.h"
#include "Bill.h"

class TradeManager {
public:
    Item* borrow(const std::string& uniqueID);
    Item* search(const std::string& uniqueID);
    Bill* generateBill(int numOfDays);
private:
    Catalogue* _catalogue;
};

#endif 

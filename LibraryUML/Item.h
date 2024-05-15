#ifndef ITEM_H
#define ITEM_H

#include "Observer.h"
#include <vector>
#include <string>

class Item {
public:
    Item(const std::string& uniqueRegCode, const std::string& title, const std::string& year, bool isNewRelease, bool availability);
    bool isAvailable() const;
    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
    void notifyObservers();
    std::vector<Observer*> getObservers() const;

private:
    std::string _uniqueRegCode;
    std::string _title;
    std::string _year;
    bool _isNewRelease;
    bool _availability;
    std::vector<Observer*> _observers;
};

#endif // ITEM_H

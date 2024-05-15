#include "Item.h"

Item::Item(const std::string& uniqueRegCode, const std::string& title, const std::string& year, bool isNewRelease, bool availability)
    : _uniqueRegCode(uniqueRegCode), _title(title), _year(year), _isNewRelease(isNewRelease), _availability(availability) {}

bool Item::isAvailable() const {
    return _availability;
}

void Item::addObserver(Observer* observer) {
    _observers.push_back(observer);
}

void Item::removeObserver(Observer* observer) {
    // Remove observer from the vector
}

void Item::notifyObservers() {
    for (auto observer : _observers) {
        observer->update(this);
    }
}

std::vector<Observer*> Item::getObservers() const {
    return _observers;
}

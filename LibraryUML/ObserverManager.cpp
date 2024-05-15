#include "ObserverManager.h"
#include "Observer.h"

void ObserverManager::addObserver(Observer* observer) {
    _observers.push_back(observer);
}

void ObserverManager::removeObserver(Observer* observer) {
}

void ObserverManager::notifyObservers() {
    for (auto observer : _observers) {
        observer->update(_item);
    }
}

std::vector<Observer*> ObserverManager::getObservers() const {
    return _observers;
}
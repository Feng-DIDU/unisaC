#ifndef OBSERVERMANGER_H
#define OBSERVERMANGER_H

#include <vector>

class Observer; 

class ObseverManager {
public:
    virtual void addObserver(Observer* observer) = 0;
    virtual void removeObserver(Observer* observer) = 0;
    virtual void notifyObservers() = 0;
    virtual std::vector<Observer*> getObservers() const = 0;
};

#endif 
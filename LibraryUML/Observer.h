#ifndef OBSERVER_H
#define OBSERVER_H

class Item; 

class Observer {
public:
    virtual void update(Item* item) = 0;
};

#endif

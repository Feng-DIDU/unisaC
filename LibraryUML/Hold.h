#ifndef HOLD_H
#define HOLD_H

#include <string>

class Item; 
class Patron;

class Hold {
public:
    Hold(const std::string& holdDate, bool urgent);
    void holdItem(Item* item);
private:
    std::string _holdDate;
    bool _urgent;
    Patron* _patron;
};

#endif 

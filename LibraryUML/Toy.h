#ifndef TOY_H
#define TOY_H

#include <string>

class Toy : public Item {
public:
    Toy(const std::string& uniqueRegCode, const std::string& title, const std::string& year, bool isNewRelease, bool availability, const std::string& name);
private:
    std::string _name;
};

#endif 
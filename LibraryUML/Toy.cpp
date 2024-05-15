#include "Toy.h"

Toy::Toy(const std::string& uniqueRegCode, const std::string& title, const std::string& year, bool isNewRelease, bool availability, const std::string& name)
    : Item(uniqueRegCode, title, year, isNewRelease, availability), _name(name) {}
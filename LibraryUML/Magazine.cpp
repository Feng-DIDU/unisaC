#include "Magazine.h"

Magazine::Magazine(const std::string& uniqueRegCode, const std::string& title, const std::string& year, bool isNewRelease, bool availability, const std::string& editors)
    : Item(uniqueRegCode, title, year, isNewRelease, availability), _editors(editors) {}

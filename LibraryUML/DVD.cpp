#include "DVD.h"

DVD::DVD(const std::string& uniqueRegCode, const std::string& title, const std::string& year, bool isNewRelease, bool availability, const std::string& director, const std::string& actors, const std::string& genre)
    : Item(uniqueRegCode, title, year, isNewRelease, availability), _director(director), _actors(actors), _genre(genre) {}  

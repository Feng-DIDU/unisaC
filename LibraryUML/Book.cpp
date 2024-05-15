#include "Book.h"

Book::Book(const std::string& uniqueRegCode, const std::string& title, const std::string& year, bool isNewRelease, bool availability, const std::string& author, const std::string& genre)
    : Item(uniqueRegCode, title, year, isNewRelease, availability), _author(author), _genre(genre) {}

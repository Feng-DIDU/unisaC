#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book : public Item {
public:
    Book(const std::string& uniqueRegCode, const std::string& title, const std::string& year, bool isNewRelease, bool availability, const std::string& author, const std::string& genre);
private:
    std::string _author;
    std::string _genre;
};

#endif
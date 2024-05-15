#ifndef MAGAZINE_H
#define MAGAZINE_H

#include <string>

class Magazine : public Item {
public:
    Magazine(const std::string& uniqueRegCode, const std::string& title, const std::string& year, bool isNewRelease, bool availability, const std::string& editors);
private:
    std::string _editors;
};

#endif 
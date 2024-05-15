#ifndef DVD_H
#define DVD_H

#include <string>

class DVD : public Item {
public:
    DVD(const std::string& uniqueRegCode, const std::string& title, const std::string& year, bool isNewRelease, bool availability, const std::string& director, const std::string& actors, const std::string& genre);
private:
    std::string _director;
    std::string _actors;
    std::string _genre;
};

#endif 

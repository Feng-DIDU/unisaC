#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>

class Patron; 

class Library {
public:
    Library(const std::string& name);
private:
    std::string _name;
};

#endif 

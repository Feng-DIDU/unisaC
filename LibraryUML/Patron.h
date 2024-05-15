#ifndef PATRON_H
#define PATRON_H

#include <string>

class Library; 

class Patron {
public:
    Patron(const std::string& username);
private:
    std::string _username;
    Library* _library;
};

#endif 

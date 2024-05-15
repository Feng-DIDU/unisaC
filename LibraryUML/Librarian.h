#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <string>

class Library; 

class Librarian {
public:
    Librarian(const std::string& username);
private:
    std::string _username;
    Library* _library;
};

#endif 

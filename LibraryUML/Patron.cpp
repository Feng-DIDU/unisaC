#include "Patron.h"
#include "Library.h"

Patron::Patron(const std::string& username)
    : _username(username), _library(nullptr) {}

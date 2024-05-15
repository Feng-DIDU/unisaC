#include "Librarian.h"
#include "Library.h"

Librarian::Librarian(const std::string& username)
    : _username(username), _library(nullptr) {}

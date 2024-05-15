#ifndef CATALOGUE_H
#define CATALOGUE_H

#include <string>
#include <vector>
#include "Item.h"

class Catalogue {
public:
    Catalogue(const std::string& catalogueID);
    Item* search(const std::string& uniqueID);
private:
    std::string _catalogueID;
    std::vector<Item*> _items;
};

#endif 

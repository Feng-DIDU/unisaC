#ifndef RECORD_H
#define RECORD_H

#include <vector>
#include "Patron.h"
#include "Item.h"

class Record {
public:
    Record();
    void addItem(Item* item);
    void addPatron(Patron* patron);
private:
    std::vector<Item*> _items;
    std::vector<Patron*> _patrons;
};

#endif 

#include "Record.h"

Record::Record() {}

void Record::addItem(Item* item) {
    _items.push_back(item);
}

void Record::addPatron(Patron* patron) {
    _patrons.push_back(patron);
}

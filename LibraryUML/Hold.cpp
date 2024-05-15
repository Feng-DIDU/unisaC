#include "Hold.h"
#include "Item.h"
#include "Patron.h"

Hold::Hold(const std::string& holdDate, bool urgent)
    : _holdDate(holdDate), _urgent(urgent), _patron(nullptr) {}

void Hold::holdItem(Item* item) {

}

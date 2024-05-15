#ifndef ISBNDETAILSLOADER_H
#define ISBNDETAILSLOADER_H

#include "Item.h"

class ISBNDetailsLoader {
public:
    ISBNDetailsLoader();
    void loadItemDetails(Item* item);
};

#endif 
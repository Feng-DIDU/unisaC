#ifndef ISBNTRANSLATOR_H
#define ISBNTRANSLATOR_H

#include <string>
#include "ISBNDetailsLoader.h"

class ISBNTranslator {
public:
    ISBNTranslator(ISBNDetailsLoader* detailsLoader);
    void translateItemDetails(Item* item);
private:
    ISBNDetailsLoader* _detailsLoader;
};

#endif 

#include "ISBNTranslator.h"
#include <iostream>

ISBNTranslator::ISBNTranslator(ISBNDetailsLoader* detailsLoader)
    : _detailsLoader(detailsLoader) {}

void ISBNTranslator::translateItemDetails(Item* item) {
    _detailsLoader->loadItemDetails(item);
}

#ifndef BOARDGAMEGEEKDETAILSLOADER_H
#define BOARDGAMEGEEKDETAILSLOADER_H

#include <string>

class BoardGameGeekDetailsLoader {
public:
    BoardGameGeekDetailsLoader();
    void loadGameDetails(const std::string& title);
};

#endif 

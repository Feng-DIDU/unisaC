#ifndef BOARDGAME_H
#define BOARDGAME_H

#include <string>

class BoardGame : public Item {
public:
    BoardGame(const std::string& uniqueRegCode, const std::string& title, const std::string& year, bool isNewRelease, bool availability, const std::string& designers, const std::string& genre, int numOfPlayers);
private:
    std::string _designers;
    std::string _genre;
    int _numOfPlayers;
};

#endif 

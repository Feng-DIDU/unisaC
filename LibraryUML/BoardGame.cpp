#include "BoardGame.h"

BoardGame::BoardGame(const std::string& uniqueRegCode, const std::string& title, const std::string& year, bool isNewRelease, bool availability, const std::string& designers, const std::string& genre, int numOfPlayers)
    : Item(uniqueRegCode, title, year, isNewRelease, availability), _designers(designers), _genre(genre), _numOfPlayers(numOfPlayers) {}

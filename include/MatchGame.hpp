#ifndef MATCHGAME_HPP
#define MATCHGAME_HPP
#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include "Square.hpp"
class MatchGame
{
public:
    void setSquares();
    void checkUrl(int ,int);
    void setScore();
    int getScore()const;
    std::pair <Square,int> searchSquare(int);
private:
    std::vector<std::vector<std::pair <Square,int>>>squares;
    int Score=0;
};
#endif //MATCHGAME_HPP


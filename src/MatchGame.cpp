#include<iostream>
#include "MatchGame.hpp"
#include "Square.hpp"
using namespace std;
//-----------------------------------------------------------------
//-----------------------------------------------------------------
void MatchGame::setSquares()
{
    int count=0;
    pair <Square,int>s();
   vector< pair <Square,int>> row;
    for (int i = 0; i <4 ; ++i) {
        for (int j = 0; j < 3; ++j) {
            count++;
            row[j].first.setUrl("Square");
            row[j].second=count;
        }
        squares.push_back(row);
    }
}
//-----------------------------------------------------------------
//-----------------------------------------------------------------
void MatchGame::checkUrl(int square1 ,int square2)
{
    pair <Square,int>Square1= searchSquare(square1);
    pair <Square,int>Square2= searchSquare(square2);
    if(!Square1.first && !Square2.first) {
        if (Square1.first == Square2.first) {
            cout << "You guessed it right" << endl;
            setScore();
        } else {
            cout << "You guessed wrong" << endl;
        }
    } else
    {
        throw invalid_argument("The houses are empty");
    }
}
//-----------------------------------------------------------------
//-----------------------------------------------------------------

void MatchGame::setScore()
{
   this->Score+=10;
}
//-----------------------------------------------------------------
//-----------------------------------------------------------------
int MatchGame::getScore()const
{
    return this->Score;
}
//-----------------------------------------------------------------
//-----------------------------------------------------------------
std::pair <Square,int> MatchGame::searchSquare(int numberHouse)
{
    if(numberHouse<10) {
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 3; ++j) {

                if (squares[i][j].second == numberHouse) {
                    return squares[i][j];
                }
            }
        }
    }
    else
    {
        throw out_of_range("The number of houses is 12");
    }
    return squares[0][0];//for warning
}
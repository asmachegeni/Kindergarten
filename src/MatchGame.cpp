#include<iostream>
#include "../include/MatchGame.hpp"
#include "../include/Square.hpp"
using namespace std;
//-----------------------------------------------------------------
//-----------------------------------------------------------------
void MatchGame::setSquares()
{
    int count=0;
   vector< pair <Square,int>> row;
   string url;
   Square s(url);
    for (int i = 0; i <3 ; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            count+=1;
            switch (count)
            {
                case 1:
                case 12:
                {
                    url= "1" ;
                    s.setUrl(url);
                    s.setMatch(false);
                    break;

                }
            case 2:
            case 5:
            {
                url= "2" ;
                s.setUrl(url);
                s.setMatch(false);
                break;
            }
            case 3:
            case 9:
            {
                url= "3" ;
                s.setUrl(url);
                s.setMatch(false);
                break;
            }
            case 4:
            case 11:
            {
                url= "4" ;
                s.setUrl(url);
                s.setMatch(false);
                break;
            }
            case 6:
            case 7:
            {
                url= "5" ;
                s.setUrl(url);
                s.setMatch(false);
                break;
            }
            case 8:
            case 10:
            {
                url= "6" ;
                s.setUrl(url);
                s.setMatch(false);
                break;
            }
            }
           pair <Square,int>p=make_pair(s,count);
           row.push_back(p);
        }
        squares.push_back(row);
        row.clear();
    }


}
//-----------------------------------------------------------------
//-----------------------------------------------------------------
void MatchGame::checkUrl(int square1 ,int square2)
{
//    print();
//    cout<<square1<<""<<"-------------- "<<square2<<endl;
    pair <Square,int>Square1= searchSquare(square1);
    pair <Square,int>Square2= searchSquare(square2);
    if(!Square1.first && !Square2.first) {
        if (Square1.first == Square2.first) {
//            cout << "You guessed it right" << endl;
            setIsMatch(square1,square2);

            setScore();
//            cout<<getScore()<<endl;
        } else {
//            cout << "You " << endl;
            throw invalid_argument("You guessed wrong");

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
    if(numberHouse<13) {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 4; ++j) {

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
//-----------------------------------------------------------------
//-----------------------------------------------------------------
void MatchGame::setIsMatch(int square1 ,int square2)
{

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {

            if (squares[i][j].second == square1 ||squares[i][j].second==square2)
            {
                squares[i][j].first.setMatch(true);
            }
        }
    }
}
//-----------------------------------------------------------------
//-----------------------------------------------------------------
void MatchGame::print()
{
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {

                cout<<squares[i][j].first.getUrl()<<"   ";
               cout<<squares[i][j].first.getMatch()<<endl;
        }
    }
}
//-----------------------------------------------------------------
//-----------------------------------------------------------------

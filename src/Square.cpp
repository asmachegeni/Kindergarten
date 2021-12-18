#include "Square.hpp"
#include <iostream>
using namespace std;
//---------------------------------------------------------------------
//---------------------------------------------------------------------
Square::Square(string url)
{
    setUrl(url);
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
void Square::setUrl(string url)
{
    this->url=url;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
string Square::getUrl()const
{
    return this->url;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
void Square::setMatch(bool isMatch)
{
    this->isMatch=isMatch;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
bool Square::getMatch()const
{
    return this->isMatch;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
bool Square::operator==(const Square &square)
{
    return this->url==square.url;
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
bool  Square::operator!()
{
    return !this->isMatch;
}
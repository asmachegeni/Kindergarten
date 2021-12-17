#ifndef SQUARE_HPP
#define  SQUARE_HPP
#include <iostream>
#include <string>
class Square
{
public:
    Square(std::string);
    void setUrl(std::string);
    std::string getUrl()const;
    void setMatch(bool);
    bool getMatch()const;
    bool operator==(const Square &);
    bool  operator!();
private:
    std::string url;
    bool isMatch= false;
};
#endif // SQUARE_HPP

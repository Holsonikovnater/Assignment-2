/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
// William Huynh
//Id:40319618
#include <iostream> 
#include "Date.hpp"
Date::Date()
{
    day = 0; 
    month = 0; 
    year = 0; 
    time.setTime(0,0,0);
}
Date::Date(int _day, int _month, int _year, int _hour , int _minute , int _second)
:day(_day), 
month(_month), 
year(_year)
{
    //could not do in member intialization list , because the we dont have a non default constructor
    time.setTime(_hour,_minute,_second);
}
void Date::printDate()const
{
    std::cout<<month<<"/"<<day<<"/"<<year<<" @ "; 
    time.printTime(); 
}
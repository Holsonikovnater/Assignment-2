/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
// William Huynh
//Id:40319618
#include <iostream>
#include "Time.hpp"
//Using intitialization list again for the constructor
Time::Time(): hour(0), minute(0), second(0){}; 
/*
Time::Time(int _hour, int _minute, int _second)
:hour(_hour), 
minute(_minute), 
second(_second){} 
*/
  

void Time::setTime(int _hour, int _minute, int _second)
{
    hour = (_hour>=0 && _hour <24) ? _hour: 0; //Shorthand version of a if statement
    minute = (_minute>=0 && _minute <60) ? _minute: 0; 
    second = (_second>=0 && _second <24) ? _second: 0; 
}
void Time::printTime()const
{
    std::cout<<hour<<":"<<minute<<":"<<second<<std::endl; 
}
/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
// William Huynh
//Id:40319618
#pragma once

#include <iostream>
#include "Time.hpp"


class Date 
{
    private:
    int day, month, year;
    Time time; 

    public: 
    Date();
    Date(int _day, int _month, int _year, int _hour , int _minute , int _second);
    void printDate()const; 
     

}; 
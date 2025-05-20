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

class Time
{
    private: 
    int hour; 
    int minute; 
    int second; 

    public: 
    Time(); 
    //Non default constructor
    //Time(int _hour , int _minute , int _second);
    
    void setTime(int _hour, int _minute, int _second); 
    void printTime()const; 

}; 
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
#include <string> 
#include <array> 

#include "../Question1/Flight.hpp"//Tells the compiler to move up one level and Go into the questions1 folder

class Airline
{
    private: 
    std::string companyName; 
    std::string companyAddress; 
    //Decided to use arrays instead of vectors for experiance
        //Used c++ array , so that it could work with the initialization list , also assumed 10 flights max per airline
    std::array <Flight,10> flightList; 

    public: 
    //Constructors 
    Airline(); 
        //Note that the list of flights as default objects when a airline is created
    Airline(std::string _companyName, std::string _companyAddress);
        //Copy constructor     
    Airline(const Airline& otherAirline); 

    //Setters
        //Note that we are passing the strings as const refrences for perfomance reasons
    void setCompanyName(const std::string&  _companyName); 
    void setCompanyAddress(const std::string& _companyAddress);
    
    //Getters 
    std::string getCompanyName()const; 
    std::string getCompanyAddress()const; 
    //Needed to make an access function for flight list in order to have to copy constructor work with initialization list
    //Returning the array as a constant refrence , so we dont have to copy , but also dont modify the memebr variale in once passed
    const std::array <Flight,10>& getFlightList()const; 

    //Additional Functions
    void addFlight(const Flight& _desiredFlight);
    void removeFlight(const std::string _desiredFlightId);
        //Returns true if the flight is on our airline list 
    bool searchFlight (const std::string& _desiredFlightId);
    void displayFlights()const; 
        //Display info about flights departing from a city and arrviing into another city
    void displayFlightsFromTo(const std::string& _desiredDeparuteCity, const std::string& _desiredArrivalCity); 
     
    //Destructor
        //Wont do much since we dont have pointers in our Airline class
    ~Airline(); 

 



}; 
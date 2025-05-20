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
#include"Date.hpp"
#include "../Question2/Passenger.hpp"
#include <string> 
#include <array> 

class Flight 
{   
    private:
    std::string flightId; 
    std::string departureCity; 
    std::string arrivalCity; 
    Date departureDate; 
    Date arrivalDate;
    int durationHours; 
    std::array <Passenger,10> passengerArray; 
    std::array <Date,10> bookingDateArray; 
    //Gonna need to update the copy constructor, Gonna need to update the defualt constructor
    // DONE: Then we need to add getters and the setter functions needed by the problem

    public: 
    Flight(); 
    Flight(std::string _flightId,std::string _departureCity,std::string _arrivalCity,Date _departureDate,Date _arrivalDate,int _durationHours); 
    Flight(const Flight& otherFlight); 

    //Getter Functions
    std::string getFlightId()const; 
    std::string getDepartureCity()const; 
    std::string getArrivalCity()const; 
    Date getDepartureDate()const; 
    Date getArrivalDate()const; 
    int getDurationHours()const; 
    const std::array <Passenger,10>& getPassengerArray()const;
    const std::array <Date,10>& getBookingDateArray()const; 

    //Setter Funcitions
        //Decided to pass the string by const reference,for better perfomance
        //and it workes with literal values too
    void setFlightId(const std::string& _flightId); 
    void setDepartureCity(const std::string& _departureCity); 
    void setArrivalCity(const std::string& _arrivalCity); 
        //Decided to pass the date objects by reference because it's a user defined type
        //and is expensive to copy
    void setDepartureDate(const Date& _departureDate); 
    void setArrivalDate(const Date& _arrivalDate); 
    void setDurationHours(int _durationHours); 

    void printInfo()const; 

    //Additional Question 4 functions 
    void addPasenger(const Passenger& desiredPassenger, const Date& desiredBookingDate);
    void removePassenger(const std::string& desiredPassengerId);
    bool searchPassenger(const std::string& desiredPassengerId)const; 
    void displayPassengers()const;

    //Destructor
    ~Flight(); 
    
}; 
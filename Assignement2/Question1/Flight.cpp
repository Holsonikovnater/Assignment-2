/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
// William Huynh
//Id:40319618
#include <iostream>
#include"FLight.hpp"
#include <string> 

    //Calling the non defualt constructor for date
Flight::Flight():
flightId(""),
departureCity(""), 
arrivalCity(""), 
departureDate(0,0,0,0,0,0),
arrivalDate(0,0,0,0,0,0), 
durationHours(0),
//Array will fill with default passenger items 
passengerArray{},
bookingDateArray{}
{}




Flight::Flight(std::string _flightId,std::string _departureCity,std::string _arrivalCity,Date _departureDate,Date _arrivalDate,int _durationHours):
flightId(_flightId),
departureCity(_departureCity), 
arrivalCity(_arrivalCity), 
departureDate(_departureDate),
arrivalDate(_arrivalDate),
durationHours(_durationHours),
passengerArray{},
bookingDateArray{}
{}

    //Using member initlaization list for the copy constructor, body of function does nothing
Flight::Flight(const Flight& otherFlight):
flightId(otherFlight.getFlightId()),
departureCity(otherFlight.getDepartureCity()), 
arrivalCity(otherFlight.getArrivalCity()), 
departureDate(otherFlight.getDepartureDate()),
arrivalDate(otherFlight.getArrivalDate()), 
durationHours(otherFlight.getDurationHours()),
//Constructing the array in the initialization list
passengerArray{otherFlight.getPassengerArray()},
bookingDateArray{otherFlight.getBookingDateArray()}
{}


//Getter Functions
std::string Flight::getFlightId()const{return flightId;} 
std::string Flight::getDepartureCity()const{return departureCity; }
std::string Flight::getArrivalCity()const{return arrivalCity; } 
Date Flight::getDepartureDate()const{return departureDate; }
Date Flight::getArrivalDate()const{return arrivalDate; }
int Flight::getDurationHours()const{return durationHours; } 
const std::array <Passenger,10>& Flight::getPassengerArray()const{return passengerArray;}
const std::array <Date,10>& Flight::getBookingDateArray()const{return bookingDateArray;} 

//Setter Funcitions
    //Decided to pass the string by const reference,for better perfomance
    //and it workes with literal values too
void Flight::setFlightId(const std::string& _flightId){flightId = _flightId; } 
void Flight::setDepartureCity(const std::string& _departureCity){departureCity = _departureCity; } 
void Flight::setArrivalCity(const std::string& _arrivalCity){arrivalCity = _arrivalCity; }
    //Decided to pass the date objects by const reference because it's a user defined type
    //and is expensive to copy
    //Using assignment operator inside the setters, because we cant use the copy constructor
    //Not problamatic because date does not have pointer data members
void Flight::setDepartureDate(const Date& _departureDate){departureDate = _departureDate; } 
void Flight::setArrivalDate(const Date& _arrivalDate){arrivalDate = _arrivalDate; }
void Flight::setDurationHours(int _durationHours){durationHours = _durationHours; }

//Additional Question 4 functions 
void Flight::addPasenger(const Passenger& desiredPassenger, const Date& desiredBookingDate)
{
    int index = 0; 
    for (const Passenger& passenger: passengerArray)
    {
        if (passenger.getPassengerId()=="")
        {
            passengerArray[index]=desiredPassenger;
            bookingDateArray[index] = desiredBookingDate; 
            return;
        }
        index++;
    }
    //If no space is found
    std::cout<<"The flight has no more space for passengers"<<std::endl; 
}
void Flight::removePassenger(const std::string& desiredPassengerId)
{
    int index = 0; 
    for (const Passenger& passenger:passengerArray)
    {
        if (passenger.getPassengerId()==desiredPassengerId)
        {   
            passengerArray[index] = Passenger();
            bookingDateArray[index] = Date(); 
            return;
        }
    }
    //Only executes if we dont find a matching passenger id
    std::cout<<"Passenger with Id:"<<desiredPassengerId<<" is not on this flight"<<std::endl; 
}
bool Flight::searchPassenger(const std::string& desiredPassengerId)const
{
    for (const Passenger& passenger: passengerArray)
    {
        if (passenger.getPassengerId()==desiredPassengerId){return true;}
    }
    //Will only execute if not matching passenger id is found
    return false; 
} 
void Flight::displayPassengers()const
{
    std::cout<<"Loading passenger list for flight with id: "<<flightId<<"...."<<std::endl;
    bool emptylist = true; 
    for (const Passenger& passenger : passengerArray)
    
    if(passenger.getPassengerId()!=""){passenger.printInfo(); emptylist = false;}
    //Same thing as checking if the value is equal to false
    if (emptylist)
    {
        std::cout<<"The passenger list is empty for flight with Id: "<<flightId<<std::endl;
    }
}

void Flight::printInfo()const
{
    std::cout<<"\nFlight Id:"<<flightId<<std::endl; 
    std::cout<<"Departure City:"<<departureCity<<std::endl;
    std::cout<<"Arrival City:"<<arrivalCity<<std::endl;
    std::cout<<"Departure Date:"; 
        //Printing the information about the dates is not as straight forward
        //Because they cannot be pushed as literal values
    departureDate.printDate(); 
    std::cout<<"Arrival Date:";
    arrivalDate.printDate(); 
    std::cout<<"Duration(Hours):"<<durationHours<<std::endl;

} 

//Destructor
Flight::~Flight(){}; 
    

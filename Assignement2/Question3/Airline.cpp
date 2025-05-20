/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
// William Huynh
//Id:40319618
#include <iostream> 
#include <string> 
#include <array>

#include "Airline.hpp"

//Constructors 
    //Initilializes all the flights in the list with the default constructor
Airline::Airline(): companyName(""), companyAddress(""), flightList{}
{}
    //Note that the list of flights starts off as defult flight obejects when an airline is created
Airline::Airline(std::string _companyName, std::string _companyAddress): 
companyName(_companyName),
companyAddress(_companyAddress),
    //Again all flights in the list are created with the default constructor
flightList{}
{}
    //Copy constructor     
Airline::Airline(const Airline& otherAirline): 
companyName(otherAirline.getCompanyName()),
companyAddress(otherAirline.getCompanyAddress()), 
flightList{otherAirline.getFlightList()}
{}


//Setters
    //Note that we are passing the strings as const refrences for perfomance reasons
void Airline::setCompanyName(const std::string&  _companyName){companyName = _companyName;}
void Airline::setCompanyAddress(const std::string& _companyAddress){companyAddress = _companyAddress;}

//Getters 
std::string Airline::getCompanyName()const{return companyName;}
std::string Airline::getCompanyAddress()const{return companyAddress;};
    //Returning the array as a constant refrence , so we dont have to copy , but also dont modify the memebr variale in once passed
const std::array <Flight,10>& Airline::getFlightList()const{return flightList;}; 


//Additional Functions
void Airline::addFlight(const Flight& _desiredFlight)
{
    //Index starts at 0
    int index = 0;
    //Iterating through the flight list, using const & to avoid copying and not accidentaly modifying objects
    for (const Flight& flight:flightList)
    {
        
        //If we find a default flight in the list
        if (flight.getFlightId()=="")
        {
            //We replace the default flight in the list with our desired flight
            flightList[index] = _desiredFlight;
            //We exit the function the second we find empty/default space
            return; 
        }
        index++; 
         
    }
    //If there was no empty space , we display the following message
    std::cout<<"Cannot add flight, Airline is full"<<std::endl; 
    
}
void Airline::removeFlight(const std::string _desiredFlightId)
{
    //indexing starts at 0
    int index = 0; 
    for (const Flight& flight:flightList)
    {
        if (flight.getFlightId()==_desiredFlightId)
        {
            //We essentially make a default flight object take the place of the flight we wished to remove
            flightList[index] = Flight();  
            //Using return to exit the function
            return; 
        }
    }
    //Only executes if we dont find a flight with macthing Id
    std::cout<<"No flight with Id:"<<_desiredFlightId<<"in flight list"<<std::endl; 
}
    //Returns true if the flight is on our airline list 
bool Airline::searchFlight (const std::string& _desiredFlightId)
{
    for (const Flight& flight: flightList)
    {
        //Return used to exit early
        if (flight.getFlightId()==_desiredFlightId){return true;}
    }
    //Executes if flight is not found
    return false; 
}
void Airline::displayFlights()const
{
    std::cout<<companyName<<" Flight List...\n"; 

    bool emptyList = true; 
    for(const Flight& flight: flightList)
    {
        //Only printing information about the flights that are not the defult ones
        if (flight.getFlightId()!=""){flight.printInfo(); emptyList = false;}
    }

    //Only executes if the flight list is empty
    if (emptyList == true){std::cout<<"Airline with name "<<companyName<<" Has An Empty Flight List"<<std::endl;}
    
    //Used for printing all flights , in order to verify flight list indexes while testing
    /*
    for(const Flight& flight: flightList)
    {
        flight.printInfo();
    }
    */
}
    //Display info about flights departing from a city and arrviing into another city
void Airline::displayFlightsFromTo(const std::string& _desiredDeparuteCity, const std::string& _desiredArrivalCity)
{
    std::cout<<companyName<<" Flight List(Given arrival and departure cities)...\n"; 
    for (const Flight& flight: flightList)
    {
        //Only prints infor if both the arrival and departure cities match for a given flight
        if ((flight.getDepartureCity()==_desiredDeparuteCity)&&(flight.getArrivalCity()==_desiredArrivalCity))
        {
            //No return since we want ALL flights that meet qualifications
            flight.printInfo(); 
        }
    }
    std::cout<<"No flights departing from: "<<_desiredDeparuteCity<<" and arriving to: "<<_desiredArrivalCity<<std::endl; 
} 
    
//Destructor
    //Wont do much since we dont have pointers in our Airline class
Airline::~Airline(){} 

 
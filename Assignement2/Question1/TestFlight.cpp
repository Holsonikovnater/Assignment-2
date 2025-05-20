/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
// William Huynh
//Id:40319618
#include <iostream> 
#include "Flight.hpp"

int main()
{
    //Testing out the default constructor
    Flight flight1 = Flight(); 
    flight1.printInfo(); 

    //Testing out the parameterized constructor
    Date departureDate1 = Date(1,2,3,4,5,6);
    Date arrivalDate1 = Date(7,8,9,10,11,12); 
    Flight flight2 = Flight("2","Toronto","Miami",departureDate1,arrivalDate1,13); 
    flight2.printInfo(); 

    //Creating dynamic object and testing out the copy constructor 
    Flight* flight3 = new Flight(flight2); 
        //Testing out one of the setters
    flight3->setFlightId("flight3"); 

    Date passenger1BookingDate = Date(2,4,6,8,10,12);
    Passenger passenger1 = Passenger("#passengerId","paseenger1FN","passenger1LN","123blvd","pass1@gmail.com"); 
    flight3->addPasenger(passenger1,passenger1BookingDate); 
    flight3->displayPassengers(); 
    flight3->removePassenger(passenger1.getPassengerId()); 
    //Expecting to see a 0 here since we removed passenger1
    std::cout<<flight3->searchPassenger(passenger1.getPassengerId())<<std::endl; 
    //Expecting an empty list 
    flight3->displayPassengers();
    flight3->printInfo(); 
    
    delete flight3; 

    return 0; 
}
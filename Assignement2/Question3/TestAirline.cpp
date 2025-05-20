/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
// William Huynh
//Id:40319618
#include <iostream> 

#include"Airline.hpp"

int main()
{
    Date departureDate1 = Date(1,2,3,4,5,6);
    Date arrivalDate1 = Date(7,8,9,10,11,12); 
    Flight flight1 = Flight("1","Toronto","Miami",departureDate1,arrivalDate1,13);
    
    //Testing out constructors 
    //Default and dynamic object, setter and display flights being tested
    Airline* defaultAirline = new Airline(); 
    defaultAirline->setCompanyName("Default Company Name1"); 
        //Expect no flights to be printed by the airline since its flight list is empty
    std::cout<<"Information about default constructor airline..."<<std::endl; 
    defaultAirline->displayFlights(); 

    //Copy constructor being tested
        //Needed to pass *ptr because our const & function expects a actual object whose memory location it will acces
        //Not just the address
    Airline airline2 = Airline(*defaultAirline);
    std::cout<<"Information about copy constructor airline..."<<std::endl; 
    airline2.displayFlights(); 

    //Testing out parameterized constructor
    Airline airline3 = Airline("Airline3 Company Name","Airline 3 Company Address"); 
    airline3.addFlight(flight1); 
        //Expecting to print a 1 since the flight has been added to flight list
    std::cout<<airline3.searchFlight(flight1.getFlightId())<<std::endl; 
        //Expecting to print only flight 1's information
    std::cout<<"Information about Paramterized constructor airline with flight 1 added..."<<std::endl; 
    airline3.displayFlights();
    airline3.displayFlightsFromTo("Montreal","France"); 

    std::cout<<"Information about Paramterized constructor airline with flight 1 removed..."<<std::endl; 
    airline3.removeFlight(flight1.getFlightId()); 
    airline3.displayFlights(); 
    return 0; 
}
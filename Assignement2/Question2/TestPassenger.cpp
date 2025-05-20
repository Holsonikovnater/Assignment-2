/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
// William Huynh
//Id:40319618
#include "Passenger.hpp"

#include <iostream> 

int main()
{
    //Making static object with the default constructor
    Passenger passenger1 = Passenger(); 
    passenger1.setFirstName("Passenger 1 first name"); 
    passenger1.printInfo();

    //Making dynamic object with a non defult constructor 
    Passenger* passenger2 = new Passenger("1","passenger2 first name","passenger2 last name","1blvd","passenger2@gmail.com"); 
    passenger2->printInfo();

    //Testing out the copy constructor
    Passenger* passenger3 = new Passenger(passenger1); 
    passenger3->printInfo(); 
    //Deleting the dynamic object
    delete passenger3; 

    return 0; 
}
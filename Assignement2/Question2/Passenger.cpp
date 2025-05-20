/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
// William Huynh
//Id:40319618
#include <iostream> 
#include "Passenger.hpp"
Passenger::Passenger()
{
    passengerId = firstName = lastName = address = email = ""; 
}
//Tried using a member initialization (Can only be used by constructors) list instead of assignment 
Passenger::Passenger(std::string initPassengerId,std::string initFirstName,std::string initLastName,std::string initAddress,std::string initEmail)
    :   passengerId(initPassengerId), 
        firstName(initFirstName), 
        lastName(initLastName), 
        address(initAddress), 
        email(initEmail)
    {}

    

//Creating the copy constructor
Passenger::Passenger(const Passenger& otherPassenger)
{
    passengerId = otherPassenger.getPassengerId(); 
    firstName = otherPassenger.getFirstName(); 
    lastName = otherPassenger.getLastName(); 
    address = otherPassenger.getAddress(); 
    email = otherPassenger.getEmail(); 
}

//Getter Functions
std::string Passenger::getPassengerId()const{return passengerId; } 
std::string Passenger::getFirstName()const{return firstName; }
std::string Passenger::getLastName()const{return lastName; }
std::string Passenger::getAddress()const{return address; }
std::string Passenger::getEmail()const{return email; }

//Setter Functions
//Can not use member initialization list here , because its meant for constructors only
void Passenger::setPassengerId(std::string _passengerId){passengerId = _passengerId; }
void Passenger::setFirstName(std::string _firstName){firstName = _firstName; }
void Passenger::setLastName(std::string _lastName){lastName = _lastName; }
void Passenger::setAddress(std::string _address){address = _address; }
void Passenger::setEmail(std::string _email){email = _email; }

//Aditional Functions
void Passenger::printInfo()const
{
    std::cout<<"Passenger Id: "<<passengerId<<std::endl; 
    std::cout<<"First Name: "<<firstName<<std::endl; 
    std::cout<<"Last Name: "<<lastName<<std::endl; 
    std::cout<<"Address: "<<address<<std::endl; 
    std::cout<<"Email: "<<email<<std::endl; 
} 

//Destructor(The destructor does nothing for now , since we dont have pointer member variables)
Passenger::~Passenger(){}

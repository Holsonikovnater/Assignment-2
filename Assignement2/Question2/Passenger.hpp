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

class Passenger 
{
    private:
    std::string passengerId; 
    std::string firstName; 
    std::string lastName; 
    std::string address; 
    std::string email; 
    public: 
    Passenger(); 
    Passenger(std::string initPassengerId,std::string initFirstName,std::string initLastName,std::string initAddress,std::string initEmail);
    //Creating the copy constructor
    Passenger(const Passenger& otherPassenger); 

    //Getter Functions
    std::string getPassengerId()const;
    std::string getFirstName()const;
    std::string getLastName()const;
    std::string getAddress()const;
    std::string getEmail()const;

    //Setter Functions
    void setPassengerId(std::string _passengerId); 
    void setFirstName(std::string _firstName); 
    void setLastName(std::string _lastName); 
    void setAddress(std::string _address); 
    void setEmail(std::string _email); 

    //Aditional Functions
    void printInfo()const; 

    //Destructor
    ~Passenger();
    

    
}; 
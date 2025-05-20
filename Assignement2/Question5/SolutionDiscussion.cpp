/*
“We certify that this submission is the original work of members of the group and meets 
the Faculty's Expectations of Originality”
*/
// Holsonikov Dorisca
//Id:40316045
// William Huynh
//Id:40319618
/*
    The way I would solve this is by imeplementing an array in the flight class thats keeps track of booking dates. 
    This Array would be similar to the passengerList array already present in the class
    Everytime a passenger is added to the flight list, a date would also be added to the booking date list 
    Everytime a passenger is removed from the flight list , the corresposnding date would be deleted form the booking date list
    Implementing this would require changing the add passenger and remove passenegr functions to take in a date object parameter, which would be the booking date
    Also I would need to change the constrcutor for flight to initialize the booking date array 
    Lastly I would make a default constructor for Date so that i can intialize all the objects in the array intially
*/
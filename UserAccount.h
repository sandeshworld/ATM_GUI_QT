#ifndef USERACCOUNT_H_
#define USERACCOUNT_H_

#include <string>
#include "Person.h"

using std::string;

class UserAccount: public Person {
    public:
        // account identifier information
        int accountNumber;
        string accountID;
        string password; //improve this so it's not stored like this string format... in encrypted format

        // flag to check if user has logged in or not
        bool loggedIn;

        // bank money information
        int balance;
        // @TODO: add list or something with transaction history
    
        //constructor for creating account, not logged in
        UserAccount(string firstName, string lastName, dateOfBirth dob, string address, string userID, string password);

        // @ later can use async based programming to add a timer so account expires
        // login 
        void login(string userID, string password);

        void logout();

        //deposit money
        int depositMoney(int amount);

        // withdraw money
        int withdrawMoney(int amount);
        
};




#endif
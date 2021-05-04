#include "UserAccount.h"
#include <iostream>

using std::cout;

UserAccount::UserAccount(string firstName, string lastName, dateOfBirth dob, string address, string userID, string password) {
    this->setName(firstName, lastName);
    this->setBirthDate(5,4,1996);
    this->setAddress(address);

    // @TODO: add a check here to see if userID is unique in bank
    if (true) {
        this->accountID = userID; 
    }

    // @TODO: add a check to here to make sure that the password length is sufficient and isn't too easy
    if (true) {
        this->password = password;
    }

    // user is not logged in yet 
    loggedIn = false;

    // initialize account to zero balance
    balance = 0;
}


void UserAccount::login(string userID, string password) {
    if ((userID == this->accountID) && (password == this->password)) {
        loggedIn = true;
    }
    else {
        cout << "Login information is not correct. Please try again." << std::endl;
    }

}

void UserAccount::logout() {
    loggedIn = false;
}

//deposit money
int UserAccount::depositMoney(int amount) {
    if (this->loggedIn == true) {
        this->balance += amount;
        return this->balance;
    }

}

// withdraw money
int UserAccount::withdrawMoney(int amount) {
    if (this->loggedIn == true) {
        this->balance -= amount;
        return this->balance;
    }
}

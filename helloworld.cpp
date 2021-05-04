#include <iostream>
#include <vector>
#include <string>
#include "UserAccount.h"


// bad practice to call using namespace std
// using namespace std;

using std::cout;
using std::cin;

int main()
{
   std::vector<std::string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

   for (const std::string& word : msg)
   {
      cout << word << " ";
   }
   cout << std::endl;


    string firstName;
    string lastName;
    dateOfBirth birth;
    int birthMonth, birthDay, birthYear;
    string address;
    string userid;
    string password;

    cout << "welcome to the bank \n";
    // @TODO add option to create a new account or login to a account
    cout << "Let's create your account. \n";
    cout << "first name. \n";
    cin >> firstName;
    cout << "last name. \n";
    cin >> lastName;
    cout << "type birth month, hit enter, birth day, hit enter, birth year, hit enter. \n";
    cin >> birthMonth;
    cin >> birthDay;
    cin >> birthYear;

    cout << "Enter your user id to associate with your account \n";
    cin >> userid;
    cout << "Enter your password to associate with your account \n";
    cin >> password;

    birth.month = birthMonth;
    birth.day = birthDay;
    birth.year = birthYear;

    UserAccount sandesh(firstName, lastName, birth, address, userid, password);
    sandesh.login(userid, password);
    int remaining_balance = sandesh.depositMoney(100);
    cout << "deposited $100: " << remaining_balance << " in the account." << std::endl;
    remaining_balance = sandesh.withdrawMoney(20);
    cout << "withdrew $20: " << remaining_balance << " in the account." << std::endl;

    // logged out so should not do anything
    sandesh.logout();
    remaining_balance = sandesh.withdrawMoney(20);
    cout << "withdrew $20: " << remaining_balance << " in the account." << std::endl;
}

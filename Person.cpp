#include <iostream>
#include "Person.h"

// bad practice
// using namespace std;

// maybe place in .h file?

// so i don't have to keep on calling std each time
using std::string;

/*class that defines a person, a person can open a bank account. bank account inherits from person*/
class Person {
    public:
        string firstName;
        string lastName;

        string * getName() {
            string * name = new string[2];
            name[0] = firstName;
            name[1] = lastName;
            return name;
        }

    protected:
        dateOfBirth birthDate;
        string address;

        void setName(string first, string last) {
            firstName = first;
            lastName = last;
        }

        void setAddress(string address) {
            this->address = address; // playing around with different way to access class variable, this is pointer
        }

        string getAddress() {
            return address;
        }

        void setBirthDate(int month, int day, int year) {
            birthDate.month = month;
            birthDate.day = day;
            birthDate.year = year;
        }

        dateOfBirth getBirthDate() {
            return birthDate;
        }
}
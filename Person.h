#ifndef PERSON_H_
#define PERSON_H_

#include <string>

using std::string;

// my custom datatype for date of birth
typedef struct {
    int month;
    int day;
    int year;
} dateOfBirth;

class Person {
    public:
        string firstName;
        string lastName;
        
        string * getName();

    protected:
        dateOfBirth birthDate;
        string address;

        void setName(string first, string last);

        void setAddress(string address);

        string getAddress();

        void setBirthDate(int month, int day, int year);

        dateOfBirth getBirthDate();
};

#endif
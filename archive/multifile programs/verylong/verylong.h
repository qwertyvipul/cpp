#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

const int SIZE = 1000; //maximum length to be stored

class VeryLong{
private:
    char vlstring[SIZE]; //very long number as a string
    int stringLength; //length of the very long string

    /*prototypes for private functions*/
    //multiplies VeryLong by single digit
    VeryLong multdigit(const int) const;

    //multiplies VeryLong by 10
    VeryLong mult10(const VeryLong) const;

public:
    //no argument constructor
    /*
        Sets the VeryLong to 0 by inserting a terminating null at the beginning of
        the array and setting the length to 0.
    */
    VeryLong():stringLength(0){
        vlstring[0] = '\0';
    }

    //one argument constructor for string
    VeryLong(const char newstring[SIZE]){
        strcpy(vlstring, newstring);
        stringLength = strlen(newstring);
    }

    //one argument constructor for very long int
    VeryLong(const unsigned long n){
        ltoa(n, vlstring, 10); //convert to string
        strrev(vlstring); //reverse it
        stringLength = strlen(vlstring); //find length
    }

    void putvl() const; //display VeryLong
    void getvl(); //get VeryLong from user
    VeryLong operator + (const VeryLong); //add VeryLongs
    VeryLong operator * (const VeryLong); //multiply VeryLongs
};

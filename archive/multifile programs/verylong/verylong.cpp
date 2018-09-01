#include "verylong.h"

//display VeryLong
/*
    Makes a copy
    Reverses the copy and
    Display it
*/
void VeryLong::putvl() const{
    char temp[SIZE];
    strcpy(temp, vlstring);
    cout<<strrev(temp);
}

//get VeryLong from user
/*
    Get string from user
    Find its length and
    Reverse it
*/
void VeryLong::getvl(){
    cin>>vlstring;
    stringLength = strlen(vlstring);
    strrev(vlstring);
}

VeryLong VeryLong::operator + (const VeryLong v){
    char temp[SIZE];
    int j;

    int maxlen = (stringLength >= v.stringLength)?stringLength:v.stringLength;
    int carry = 0;
    for(j=0; j<maxlen; j++){
        int d1 = (j>stringLength-1)?0:vlstring[j]-'0';
        int d2 = (j>stringLength-1)?0:vlstring[j]-'0';
        int digitsum = d1+d2+carry;
        if(digitsum>=10){
            digitsum -= 10;
            carry = 1;
        }else{
            carry = 0;
        }
        temp[j] = digitsum+'0';
    }
    if(carry==1){
        temp[j++] = '1';
    }
    temp[j] = '\0';
    return VeryLong(temp);
}

//add VeryLongs
VeryLong VeryLong::operator * (const VeryLong v){
    VeryLong product;
    VeryLong tempsum;
    for(int j=0; j<v.stringLength; j++){
        int digit = v.vlstring[j] - '0';
        product = multdigit(digit);
        for(int k=0; k<j; k++){
            product = mult10(product);
            tempsum = tempsum + product;
        }
    }
}

VeryLong VeryLong::mult10(const VeryLong v) const{
    char temp[SIZE];
    for(int j=v.stringLength - 1; j>=0; j--){
        temp[j+1] = v.vlstring[j];
        temp[0] = '0';
        temp[v.stringLength+1] = '\0';
        return VeryLong(temp);
    }
}

VeryLong VeryLong::multdigit(const int digit) const{
    char temp[SIZE];
    int j, carry = 0;
    for(j = 0; j<stringLength; j++){
        int d1 = vlstring[j] - '0';
        int digitProduct = d1*digit;
        digitProduct += carry;
        if(digitProduct>=10){
            carry = digitProduct/10;
            digitProduct -= carry*10;
        }else{
            carry = 0;
            temp[j] = digitProduct + '0';
        }
    }

    if(carry!=0)
        temp[j++] = carry + '0';

    temp[j] = '0';
    return VeryLong(temp);
}

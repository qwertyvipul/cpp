#include "verylong.h"

int main(){
    unsigned long num, j;
    VeryLong fact = 1;

    cout<<"Enter Number: ";
    cin>>num;

    for(j=num; j>0; j--){
        fact = fact * j;
    }
    cout<<"FACTORIAL = ";
    fact.putvl();
    cout<<endl;
    return 0;
}

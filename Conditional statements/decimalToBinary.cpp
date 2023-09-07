#include<bits/stdc++.h>
using namespace std;

int decimalToBinaryMethod1(int number){

    // Division Method

    int binary = 0, i = 0;
    while(number != 0) {
        int bit = number%2;

        binary = bit*pow(10,i++) + binary;
        number = number/2;
    }

    return binary;
}

int decimalToBinaryMethod2(int number){

    // Bitwise Method

    int binary = 0, i = 0;
    while(number != 0) {
        int bit = number&1;

        binary = bit*pow(10,i++) + binary;
        number = number>>1;
    }

    return binary;
}

int binaryToDecimalMethod(int binaryNumber){

    
    int decimal = 0, i = 0;
    while(binaryNumber > 0) {
        int bit = binaryNumber%10;

        decimal = bit*pow(2,i++) + decimal;
        binaryNumber = binaryNumber/10;
    }

    return decimal;
}



int main(){
    cout<<decimalToBinaryMethod2(10)<<endl;
    cout<<binaryToDecimalMethod(1010);

return 0;
}
#include<iostream>
using namespace std;

int decimalToBinary(int num){
    int res=0;
    int rem = 0;
    int pow = 1;
    while(num > 0){
        rem = num % 2;
        num = num / 2;

        res += rem * pow;
        pow *= 10;
    }
    return res;
}
int main(){

    cout<<"Binary of decimal number 50 is : "<< decimalToBinary(50);
    return 0;
}
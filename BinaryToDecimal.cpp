#include<iostream>
using namespace std;

int binaryToDecimal(int num){
    int res =0;
    int pow = 1;
    int rem ;
    while(num >0){
        rem = num % 10;
        num /= 10;

        res += rem * pow;
        pow *=2;
    }
    return res;
}
int main(){

    cout<<"Binary to Decimal of 101 is : "<<binaryToDecimal(101);

    return 0;
}
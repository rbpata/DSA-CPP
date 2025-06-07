#include<iostream>
using namespace std;

int main(){

    int a = 3;
    int b = 2;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
    cout<<(a<<b)<<endl;//(a * 2^b)
    cout<<(a>>b)<<endl;//(a / 2^b)
    return 0;
}
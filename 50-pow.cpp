#include<iostream>
using namespace std;

double myPow(double x, int n){
    if(x == 0) return 0.0;
    if(n == 0) return 1.0;
    double ans = 1;
    long bf = n;
    if(n<0){
        x = 1/x;
        bf = -bf;
    }
    while(bf > 0){
        if(bf %2 == 1){
            ans *= x;
        }
        x*=x;
        bf/=2;
    }
    return ans;
}

int main(){
    double res = myPow(2,5); 
    cout<<"power :- "<<res;
    return 0;
}
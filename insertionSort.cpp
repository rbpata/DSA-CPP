#include<iostream>
using namespace std;

int main(){
    int arr []= {5,4,3,2,1};

    for(int i = 1; i < 5;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1] = arr[prev]; 
            prev--;
        }
        arr[prev+1] = curr;
    }

    for(int i=0;i<5;i++){
        cout<<arr[i];
    }

}
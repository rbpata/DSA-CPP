#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums={2,2,1,1,1};
    int n = nums.size();
    for(int i :nums){
                    int freq=0;
        for(int j : nums){
            if(i == j){
                freq++;
            }
        }
        if(freq>(n/2)){
            cout<<i;
        }
    }
}
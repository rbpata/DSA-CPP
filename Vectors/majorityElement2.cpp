#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {2,2,1,1,1,2,2};

    sort(nums.begin(),nums.end());
    int freq = 1;
    int n = nums.size();
    int res = nums[0];
    for(int i=1;i<n;i++)
    {
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq = 1;
            res = nums[i];
        }
    }
    if(freq > (n/2)){
        cout<<"Majority Element :- "<<res;
    }
    return 0;
}



// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int freq = 1;
//         int n = nums.size();
//         int res = nums[0];
//         for(int i=1;i<n;i++)
//         {
//             if(nums[i]==nums[i-1]){
//                 freq++;
//             }
//             else{
//                 freq = 1;
//                 res = nums[i];
//            }
//         }
//         if(freq > (n/2)){
//             return res;
//         }
//         else
//             return -1;
//     }
// };
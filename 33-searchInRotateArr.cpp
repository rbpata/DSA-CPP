#include<iostream>
#include<vector>
using namespace std;


int search(vector<int>& nums,int target){
    int st = 0;
    int end=nums.size()-1;
    while(st>=end){
        int mid = st + (end - st) / 2;

        if(nums[mid] == target){
            return mid;
        }
        if(nums[st] <= nums[mid]){
            if(nums[st] <= target && target < nums[end]){
                end = 
            }    
        }
    }
}

int main(){
    return 0;
}
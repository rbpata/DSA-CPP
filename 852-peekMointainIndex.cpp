#include<iostream>
#include<vector>
using namespace std;

    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1, end = arr.size()-1;
        while(st <= end){
            int mid = st + (end - st)/2;

            if(arr[mid-1] < arr[mid] && arr[mid]> arr[mid+1]){
                return mid;
            }
            else if(arr[mid]> arr[mid-1]){
                st = mid +1;
            }
            else{
                end = mid -1;
            }
        }
        return -1;
    }

int main(){
    vector<int> arr = {0,1,10,5,3}; 
    cout<<"Peek Element :- "<<peakIndexInMountainArray(arr);
    return 0;

}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool isPosible(vector<int> & arr,int N,int C,int minAllowed){
    int cows=1,lastCowPos = arr[0];

    for(int i =1;i<N;i++){
        if(arr[i]-lastCowPos >= minAllowed){
            cows++;
            lastCowPos = arr[i];
        }
        if(cows == C){
            return true;
        }

    }
    return false;
}
int aggressiveCows(vector<int>& arr,int N,int C){

    sort(arr.begin(),arr.end());
    int st = 1,end=arr[N-1]-arr[0];
    int ans = -1;

    while(st<=end){
        int mid = st + (end-st)/2;
        if(isPosible(arr,N,C,mid)){
            ans = mid;
            st = mid+1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;

}

int main(){
    int N = 5,C = 3;
    vector<int> arr = {1,2,8,4,9};
    cout<<aggressiveCows(arr,N,C);

    return 0;
}
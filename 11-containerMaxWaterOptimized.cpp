#include<iostream>
#include<vector>
using namespace std;


int maxArea(vector<int>& height){

    int maxWater = 0;
    int i=-0,j=height.size() - 1;

    while(i<j){
        int w = j - i;
        int h = min(height[i], height[j]);
        int currWater = h*w;

        maxWater = max(maxWater, currWater);

        height[i] < height[j]? i++:j--;
    }

    return maxWater;

}

int main(){

    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout<<"Max Area : "<<maxArea(height)<<endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main(){

    // vector<int> vec;
    vector<int> vec = {1,2,3};
    vector<int> vec2(3,0);
    cout<<vec[0]<<endl;
    cout<<vec2[0]<<endl;

    vector<char> vec3 = {'a', 'b', 'c'};
    vec3.push_back('r');

    // foreach loop
    for (char i : vec3){
        cout<<i<<endl;
    }
    vec3.pop_back();
    
    // vector Functions
    
    cout<<"\nsize :"<<vec3.size()<<endl;
    cout<<vec3.front()<<endl;
    cout<<vec3.back()<<endl;
    cout<<vec3.at(0)<<endl;
    cout<<vec3.size()<<endl;
    cout<<vec3.capacity()<<endl;
    return 0;

}
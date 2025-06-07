#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<map>
#include<set>
using namespace std;

int main(){
    pair<int,int> p = {10,30};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    pair<int,pair<int,int>> p2 = {10,{20,30}};

    cout<<p2.second.second<<endl;

    pair<int,int> arr[]  = {{10,20},{30,40}};
    

    vector <int> v  = {10,20,30,40,50};
    vector<int>::iterator it = v.begin();

    v.insert(v.begin(),2,1000);

    cout<<"\niterator : "<<*it;

    for(auto i = v.begin(); i != v.end();i++){
        cout<<"\nitem :- "<<*(i);
    }

    list<int> l ;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);

    cout<<endl; 
    for(int i : l){
        cout<<i<<" ";
    }

    priority_queue<int> q;
    q.push(20);
    q.push(30);
    q.push(50);

    cout<<q.top()<<endl;

    map<string,string> m;

    m["name"] = "ram";
    m["surname"] = "pata";
    
    for(auto it : m){
    cout<<it.first<<it.second;};

    set <int> s;
    s.insert(0);
    s.insert(0);
    s.insert(2);
    s.insert(3);

    cout<<endl;
    for (int it : s){
        cout<<it<<" ";
    }

    return 0;
}
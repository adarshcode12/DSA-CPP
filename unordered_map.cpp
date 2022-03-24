#include<iostream>
#include<unordered_map>
using namespace std;


int main()
{
    unordered_map <string,int> s;
    unordered_map<int,int>m;
    s["GFG"]=10;
    s["ineuron"]=30;
    s["coursera"]=50;
    s.insert({"simplilearn",1});

    m[1]=10;
    m[3]=30;
    m[5]=50;
    m.insert({0,1});

    for(auto e:s)
        cout<<e.first<<" "<<e.second<<" "<<endl;
    
    for(auto e:m)
        cout<<e.first<<" "<<e.second<<" "<<endl;
     

}

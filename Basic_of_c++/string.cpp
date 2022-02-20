#include<iostream>
using namespace std;


int main()
{
    string a;
    cout<<"Enter the String: ";
    cin>>a;
    cout<<"you have entered : "<<a<<endl;
    a.push_back('i');
    cout<<a<<endl;
    a.pop_back();
    cout<<a;
    return 0;

}
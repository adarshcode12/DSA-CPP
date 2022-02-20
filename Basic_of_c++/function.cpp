#include<iostream>
using namespace std;

void what(int &a, int &b )
{
    int temp;
    temp=a;
    a=b;
    b=temp;    

}

int main()
{
    int a=5,b=6;
    cout<<a<<"-"<<b<<endl;
    what(a,b);
    cout<<a<<"-"<<b;
}



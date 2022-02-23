#include<iostream>
using namespace std;


int n_no(int n)
{
    if (n==0)
    {
        return 0 ;
    }
    return n+n_no(n-1);
}


int main()
{
    int n,res;
    cout<<"Enter a natural Number: ";
    cin>>n;
    res=n_no(n);
    cout<<res;
}
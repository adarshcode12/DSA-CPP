#include<iostream>
using namespace std;

int fibo(int num)
{   
    if (num<0)
    {
        return 0;
    }
    if(num==1)
    {
        return 1;
    }
    return fibo(num-1)+fibo(num-2);
}


int main()
{
    int res,res2;
    int n = 10, i;
   for(i=0;i<n;i++)
   cout<<fibo(i)<<" ";
   return 0;
    
}
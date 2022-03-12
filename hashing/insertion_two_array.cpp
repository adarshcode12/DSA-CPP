#include<iostream>
#include<unordered_set>
using namespace std;


int countdict(int arr[],int arr2[],int n,int m)
{
    unordered_set <int> s(arr,arr+m);
    int res=0;
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr2[i])!=s.end())
        {
                res++;
                s.erase(arr2[i]);
        }
    }
    return res;
     

}

int main()
{
    int a[]={12,12,1,2,3,4,67,89,67};
    int b[]={1,2,3,4,5,6,7,8,9,21};
    int size = sizeof(a)/sizeof(a[0]);
    int size2 = sizeof(b)/sizeof(b[0]);
    int r=countdict(a,b,size,size2);
    cout<<r<<" ";
} 
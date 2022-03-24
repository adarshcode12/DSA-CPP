#include<iostream>
#include<unordered_set>
using namespace std;


int countdict(int arr[],int n)
{
    unordered_set <int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    return s.size();
     

}

int main()
{
    int a[]={12,12,23,3,1,2,3,1,21,21,21};
    int size = sizeof(a)/sizeof(a[0]);
    int r=countdict(a,size);
    cout<<r<<" ";
} 
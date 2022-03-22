#include<iostream>
#include<unordered_set>
using namespace std;


int countdict(int arr[],int n)
{
    unordered_set <int> s;
    int sumi=0;
    for (int i = 0; i < n; i++)
    {   
        sumi+=arr[i];
        if(s.find(sumi)!=s.end())
        {
            return true;
        }
        if (sumi==0)
        {
            return true;
        }
        s.insert(sumi);
    }

}

int main()
{
    int a[]={12,12,1,2,3,4,67,89,67};
    int size1 = sizeof(a)/sizeof(a[0]);
    bool r=countdict(a,size1);
    if (r==1)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
} 
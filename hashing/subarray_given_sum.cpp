#include<iostream>
#include<unordered_set>
using namespace std;


int countdict(int arr[],int n,int sum)
{
    unordered_set <int> s;
    int sumi=0;
    int res=0;
    for (int i = 0; i < n; i++)
    {   
        sumi+=arr[i];
        if (sumi==sum)
        {
            return true;
        }
        if(s.find(sumi-sum)!=s.end())    // if start sum is present in array  (sum=sumi-start_sum); 
        {
            return true;
        }
        s.insert(sumi);
    }
    return false;

}

int main()
{
    int a[]={12,12,1,2,3,4,67,89,67};
    int size1 = sizeof(a)/sizeof(a[0]);
    int sum=10;
    bool r=countdict(a,size1,sum);
    if (r==1)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
} 
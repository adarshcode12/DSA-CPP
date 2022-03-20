#include<iostream>
#include<unordered_map>
using namespace std;


int countdict(int arr[],int n,int sum)
{
    unordered_map <int,int> s;
    int sumi=0;
    int res=0;
    for (int i = 0; i < n; i++)
    {   
        sumi+=arr[i];
        if (sumi==sum)        // if we find the sumi same as sum which we need but may be not longest;
        {
            res=i+1;
        }
        if (s.find(sumi)==s.end())   // we should not repeat the sum as it include 0 which can be included in array;
        {
            s.insert({sumi,i});
        }
        if(s.find(sumi-sum)!=s.end())    // if start sum is present in array  (sum=sumi-start_sum); 
        {
            if (res < (i - s[sumi - sum]))
                res = i - s[sumi - sum];
        }
    }
    return res;

}

int main()
{
    int a[]={12,12,1,2,3,4,67,89,67};
    int size1 = sizeof(a)/sizeof(a[0]);
    int sum=10;
    int r=countdict(a,size1,sum);
    cout<<r;
} 
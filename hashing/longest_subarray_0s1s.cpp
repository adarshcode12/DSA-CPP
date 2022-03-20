#include<iostream>
#include<unordered_map>
using namespace std;


int countdict(int arr[],int n)
{
    unordered_map <int,int> s;
    int sumi=0;
    int res=0;
    for (int i = 0; i < n; i++)
    {   
        sumi+=arr[i];
        if (sumi==0)        // if we find the sumi same as sum which we need but may be not longest;
        {
            res=i+1;
        }
        if(s.find(sumi)!=s.end())    // if start sum is present in array  (sum=sumi-start_sum); 
        {
            if (res < (i - s[sumi]))
                res = i - s[sumi];
        }
        else
            s.insert({sumi,i});
    }
    return res;

}

int main()
{
    int a[]={ 1, 0, 0, 1, 0, 1, 1 };
    int arrSize = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<arrSize;i++)
    {
        if (a[i]==0)
            a[i]=-1;
    }
    int size1 = sizeof(a)/sizeof(a[0]);
    int r=countdict(a,size1);
    cout<<r;
} 
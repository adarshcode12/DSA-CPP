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
            res=max(res,i-s[sumi]);
        }
        else
            s.insert({sumi,i});
    }
    return res;

}


int main()
{
    bool a[] = {0, 1, 0, 1, 1, 1, 1};
    bool a2[] = {1, 1, 1, 1, 1, 0, 1};
    int arrSize = sizeof(a)/sizeof(a[0]);
    int arr[arrSize];
    for (int i=0; i<arrSize; i++)
      arr[i] = a[i] - a2[i];
    int r= countdict(arr,arrSize);
    cout<<r;
} 
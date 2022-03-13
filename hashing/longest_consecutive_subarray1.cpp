#include<iostream>
#include<unordered_set>
using namespace std;


int countdict(int arr[],int n)
{
    unordered_set<int> s;
    int res=1;

    for (int i = 0; i < n; i++)
        s.insert(arr[i]);

    for (int i = 0; i < n; i++)
    {   
        if(s.find(arr[i]-1)==s.end())
        {
            int curr=1;
            while(s.find(arr[i]+curr)!=s.end())
            {
                curr++;
            }
            res=max(res,curr);
        }
    }
    return res;

}


int main()
{
    int a[] = {1, 9, 3, 4, 2, 10, 13};
    int arrSize = sizeof(a)/sizeof(a[0]);
    int r= countdict(a,arrSize);
    cout<<r;
} 
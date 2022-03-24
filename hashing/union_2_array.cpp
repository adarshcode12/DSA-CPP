#include<iostream>
#include<unordered_set>
using namespace std;


int countdict(int arr[],int arr2[],int n,int m)
{
    unordered_set <int> s;
     for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    for (int i = 0; i < m; i++)
    {   
        if (s.find(arr2[i])!=s.end())
            continue;
        else
            s.insert(arr2[i]);
    }
    unordered_set<int> :: iterator itr;
    for (itr = s.begin(); itr != s.end(); itr++)
        cout << (*itr) << endl;
    return 0;
     

}

int main()
{
    int a[]={12,12,1,2,3,4,67,89,67};
    int b[]={1,2,3,4,5,6,7,8,9,21};
    int size1 = sizeof(a)/sizeof(a[0]);
    int size2 = sizeof(b)/sizeof(b[0]);
    int r=countdict(a,b,size1,size2);
} 
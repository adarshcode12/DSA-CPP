#include<iostream>
#include<unordered_set>
using namespace std;


int countdict(int arr[],int sumi,int n)
{
    unordered_set <int> s;
    for (int i = 0; i < n; i++)
    {
        if(s.find(sumi-arr[i])!=s.end())
        {
            return true;
        }
        else
        {
            s.insert(arr[i]);
        }
    }
    return false;

    
    unordered_set<int> :: iterator itr;
    for (itr = s.begin(); itr != s.end(); itr++)
        cout << (*itr) << endl;
    return 0;
     

}

int main()
{
    int a[]={12,12,1,2,3,4,67,89,67};
    int sumi=100;
    int size1 = sizeof(a)/sizeof(a[0]);
    bool r=countdict(a,sumi,size1);
    if (r==1)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
} 
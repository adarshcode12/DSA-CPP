#include<iostream>
#include<unordered_map>
using namespace std;


int countdict(int arr[],int n)
{
    unordered_map <int, int> h;
    for (int i = 0; i < n; i++)
    {
        h[arr[i]]++;
    }
    for(auto e:h)
        cout<<e.first<<" "<<e.second<<" "<<endl;  
    return 0;
     

}

int main()
{
    int a[]={12,12,23,3,1,2,3,1,21,21,21};
    int size = sizeof(a)/sizeof(a[0]);
    countdict(a,size);
} 
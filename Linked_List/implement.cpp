#include <iostream>
#include <unordered_map>
using namespace std;
  
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
int main()
{
    Node *head=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);
    head->next=second;
    second->next=third;
    third->next=NULL;
    
    while(head != NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
    return 0;

}
#include<iostream>
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

Node *insert_beg(Node *head,int data)
{
    Node *temp=new Node(data);
    Node *curr=head;
    temp->next=curr;
    return temp;

}


int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);

    head=insert_beg(head,40);
    head=insert_beg(head,90);
    head=insert_beg(head,90);
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}
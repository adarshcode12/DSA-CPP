#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node *next;
    Node(int n)
    {
        data=n;
        next=NULL;
    }
};




Node *delete_end(Node *head,int k)
{           
     if (head==NULL)
     {
        return NULL;
     }
     if (head->next==NULL)
     {
        delete head;
        return NULL;
     }
     Node *curr = head;
     for(int i=0;i<k-2;i++)
     {
        curr=curr->next;
     }
     curr->next=curr->next->next;
     return head;



}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head->next=temp1;
    temp1->next=temp2;
    temp2->next=head;
    head = delete_end(head,2);
    Node *curr1=head;
    while(curr1->next!=head)
    {
        cout<<curr1->data<<"->";
        curr1=curr1->next;
    }
    cout<<curr1->data;
}
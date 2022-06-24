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



Node *insert_beg(Node *head,int data)
{
    Node *temp = new Node(data);
    if (head== NULL)
    {   
        temp->next=temp;
        return temp;
    } 
    Node *curr = head;
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    curr->next=temp;
    temp->next=head;
    return temp;
}


Node *delete_beg(Node *head)
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
    head->data=head->next->data;
    Node *temp = head->next;
    head->next=head->next->next;
    delete temp;
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
    head = delete_beg(head);
    Node *curr1=head;
    while(curr1->next!=head)
    {
        cout<<curr1->data<<"->";
        curr1=curr1->next;
    }
    cout<<curr1->data;
}
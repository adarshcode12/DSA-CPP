#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int n)
    {
        data=n;
        next=NULL;
        prev=NULL;
    }
};


void printlist(Node *head){
    if(head==NULL)return;
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

Node *insert_beg(Node *head, int data)
{
    Node *temp = new Node(data);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;
    return temp;
}


int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head->next=temp1;
    temp1->next=temp2;
    temp1->prev=head;
    temp2->next=head;
    temp2->prev=temp1;
    head->prev=temp2;

    head=insert_beg(head,40);

    Node *curr1=head;
    while(curr1->next!=head)
    {
        cout<<curr1->data<<"->";
        curr1=curr1->next;
    }
    cout<<curr1->data;
}
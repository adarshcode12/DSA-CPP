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



Node *insert_end(Node *head,int data)
{
  Node *temp = new Node(data);
  if (head==NULL)
  {
    temp->next=temp;
    return temp;
  }
  temp->next=head->next;
  head->next=temp;
  int t=head->data;
  head->data= temp->data;
  temp->data=t;
  return temp;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head->next=temp1;
    temp1->next=temp2;
    temp2->next=head;
    head = insert_end(head, 40);
    Node *curr=head;
    do{   
        cout<<curr->data<<"->";
        curr=curr->next;
    }while(curr!=head);
    
}
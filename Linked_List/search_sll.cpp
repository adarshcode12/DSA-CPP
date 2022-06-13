#include<iostream>
using namespace std;

struct Node{

    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next= NULL;
    }
};


int search_node(Node *head,int x)
{   
    Node *curr = head;
    int pos=1;
    while(curr != NULL)
    {
        if (curr->data == x)
        {
            return pos;
        }
        else
        {
            pos++;
            curr=curr->next;
        }
    }
    return -1;


}


int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head->next = temp1;
    temp1->next = temp2;

    int x = search_node(head,20);
    cout<<x;
    return 0;
}
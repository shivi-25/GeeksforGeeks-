#include<iostream>
#include<stdio.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2)
{
    int l1=0, l2=0;
    Node *t1=head1, *t2=head2;
    while(t1!=NULL)
        {
            l1++;
            t1=t1->next;
        }
    while(t2!=NULL)
        {
            l2++;
            t2=t2->next;
        }
    if(l1>l2)
    {
        int i=l1-l2;
        while(i)
        {
            head1=head1->next;
            i--;
        }
    }
    else if(l2>l1)
    {
        int i=l2-l1;
        while(i)
        {
            head2=head2->next;
            i--;
        }
    }
    while(head1!=NULL)
    {
        if(head1==head2)
           return head1->data;
        head1=head1->next;
        head2=head2->next;
    }
    return -1;
}

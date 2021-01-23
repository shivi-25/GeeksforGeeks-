#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}

// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */
bool isPalindrome(Node *head)
{
    Node *slow, *fast;
    slow=head;
    fast=head;
    int f=0;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast != NULL && fast->next == NULL)
           f=1;
    }
    if(f==1)
      slow=slow->next;
    Node *temp=NULL;
    while(slow!=NULL)
    {
        Node *ptr=new Node(slow->data);
        ptr->next=temp;
        temp=ptr;
        slow=slow->next;
    }
    slow=temp;
    while(slow!=NULL)
    {
        if(head->data!=slow->data)
           return false;
        head=head->next;
        slow=slow->next;
    }
    return true;
}

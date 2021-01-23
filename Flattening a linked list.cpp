#include <bits/stdc++.h>

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};

using namespace std;

void printList(Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->bottom;
    }
}

Node* flatten (Node* root);

int main(void) {

	int t;
	cin>>t;
	while(t--){
    int n,m,flag=1,flag1=1;
    struct Node * temp=NULL;
	struct Node * head=NULL;
	struct Node * pre=NULL;
	struct Node * tempB=NULL;
	struct Node * preB=NULL;
		cin>>n;
        int work[n];
		for(int i=0;i<n;i++)
            cin>>work[i];
		for(int i=0;i<n;i++){
			m=work[i];
			--m;
			int data;
			scanf("%d",&data);
			temp = new Node(data);
			temp->next = NULL;
			temp->bottom = NULL;
			
			if(flag){
				head = temp;
				pre = temp;
				flag = 0;
				flag1 = 1;
			}
			else{
				pre->next = temp;
				pre = temp;
				flag1 = 1;
			}
			for(int j=0;j<m;j++){
				
				int temp_data;
				scanf("%d",&temp_data);
				tempB = new Node(temp_data);

				if(flag1){
					temp->bottom=tempB;
					preB=tempB;
					flag1=0;
				}
				else{
					preB->bottom=tempB;
					preB=tempB;
				}
			}
		}
		   Node *fun = head;
		   Node *fun2=head;

            Node* root = flatten(head);
            printList(root);
            cout<<endl;

	}
	return 0;
}
// } Driver Code Ends


/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
Node *merge(Node*a, Node*b)
{
    if(a==NULL)
    return b;
    if(b==NULL)
    return a;
    Node *ans,*t;
    if(a->data < b->data)
    {ans=new Node(a->data);
    a=a->bottom;
    }
    else {ans=new Node(b->data);
    b=b->bottom;
    }
    t=ans;
    while(a&&b)
    {
        if(a->data < b->data)
        {
            t->bottom=new Node(a->data);
            a=a->bottom;
            t=t->bottom;
        }
        else {
            t->bottom=new Node(b->data);
            b=b->bottom;
            t=t->bottom;
        }
    }
    while(a)
    {
      t->bottom=new Node(a->data);
            a=a->bottom;
            t=t->bottom;   
    }
    while(b)
    {
     t->bottom=new Node(b->data);
            b=b->bottom;
            t=t->bottom;   
    }
    return ans;
}
Node *flatten(Node *root)
{
   Node *a=NULL, *t=root, *b;
   while(t)
   {
       if(a==NULL)
       {
           a=new Node(t->data);
           b=a;
       }
       else {
           Node *k=new Node(t->data);
           b->bottom=k;
           b=k;
       }
       t=t->bottom;
   }
   root=root->next;
   while(root)
   {
       Node*k=root;
       a=merge(a,k);
       root=root->next;
   }
   return a;
}

#include<iostream>
#include<list>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d)
    {
        data=d;
        next=NULL;
    }

};
void insert(node* &head,int data)
{
	node* n= new node(data);

	if(head==NULL)
	{
		head=n;
	}
	else
	{
		node* temp= head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=n;
	}
}
void print(node* head)
{
	node * temp=head;
	while(temp->next!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<temp->data<<endl;
}
void output(node* &head, int k,int n)
{
	k = k%n;
	if (k>0)
	{
	node* prev=head;
	node* current= head->next;
	for( int i=0;i<n-k-1;i++)
	{
		current=current->next;
		prev=prev->next;
	}
	prev->next=NULL;
	node* temp=current;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=head;
	head=current;
	}
}
int main() {
	node * head=NULL;
	int n1;
	cin>>n1;
	for(int i=0;i<n1;i++)
	{
		int l;
		cin>>l;
		insert(head,l);
	}
	int k;
	cin>>k;

    output(head,k,n1);
	print(head);
}

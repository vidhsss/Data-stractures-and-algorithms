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
void output(node* &odd,node* &even)
{
	node* temp=odd;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=even;
	
}
int main() {
	node * odd=NULL;
	node * even=NULL;
	int n1;
	cin>>n1;
	for(int i=0;i<n1;i++)
	{
		int l;
		cin>>l;
		if(l%2==0)
		{
			insert(even,l);
		}
		else
		{
			insert(odd,l);
		}
	}
    output(odd,even);
	print(odd);
}

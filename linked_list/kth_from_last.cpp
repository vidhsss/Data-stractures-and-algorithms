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
void output(node* &head, int k)
{
	node* s=head;
	node* f=head;
	for(int i=0;i<k;i++)
	{
		f=f->next;
	}
	while(f!=NULL)
	{
		f=f->next;
		s=s->next;
	}
	cout<<s->data;
}
int main() {
	node * head=NULL;
	int l;
	cin>>l;
	
	while(l!=-1)
	{
		insert(head,l);
		cin>>l;
	
	}
	int k;
	cin>>k;

    output(head,k);
	//rint(head);
}

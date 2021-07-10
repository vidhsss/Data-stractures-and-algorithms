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
node* merge(node * a, node* b)
{
	if (a==NULL)
	{
		return b;
	}
	if (b==NULL)
	{
		return a;
	}
	node* c;
	if(a->data < b->data)
	{
		c=a;
		c->next=merge(a->next,b);

	}
	else{
		c=b;
		c->next=merge(b->next,a);
	}
	return c;
}

int main() {
	int t;
	cin>>t;
	while(t)
	{
		node * head1=NULL;
		node * head2=NULL;

		int n1,n2;
		cin>>n1;
		for(int i=0;i<n1;i++)
		{
			int l;
			cin>>l;
			insert(head1,l);
		}
		cin>>n2;
		for(int i=0;i<n2;i++)
		{
			int l;
			cin>>l;
			insert(head2,l);
		}
		node* c= merge(head1,head2);
		print(c);
		t--;
	}
	return 0;
}
#include<iostream>
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
void insert(node* &head , int data)
{
    node * temp=head;
    node * n= new node(data);
    n->next=head;
    if(temp!=NULL){
        while(temp->next!= head)
        {
            temp=temp->next;
        }
        temp->next=n;
    }
    else
    {
        n->next=n;
        head=n;
        
    }
    //head=n;

    
}
void print(node * head)
{
    node * temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<"--->";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
node* getnode(node* &head, int d)
{
    node* temp=head;
    //all nodes except last one as then temp=->next==head;
    while(temp->next!=head)
    {
        if (temp->data==d)
        {
            return temp;
        }
        temp=temp->next;
    }
    if (temp->data==d)
    {
        return temp;
    }
    return NULL;
}
void del(node* &head, int d){
    node* del= getnode(head, d);
    if (del==NULL)
    {
        return;
    }
    if(del==head)
    {
        head=head->next;
    }
    node* temp=head;
    while(temp->next!=del)
    {
        temp=temp->next;
    }
    temp->next=del->next;
    delete del;
}
int main()
{
    node * head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    print(head);
    del(head,2);
    print(head);
    return 0;
}
#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int val;
    node* left;
    node* right;
    node(int a){
        val=a;
        left=NULL;
        right=NULL;
    }
};
int Left(node* root)
{
   if (root==NULL)
   {
       cout<<-1;
       return 0;
   } 

    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
       int n=q.size();
       for(int i=0;i<n;i++)
       {
           if (i==0)
           {
               cout<<q.front()->val;
           }
           node *curr= q.front();
           q.pop();
           if(curr->left!=NULL)
           q.push(curr->left);
           if(curr->right!=NULL)
           q.push(curr->right);
       }
    }
}
int main()
{
    node* root= new node(1);
    root->left=new node(-1);
    root->left->left=new node(2);
    root->left->right=new node(3);
    root->right=new node(4);
    int ans=0;
    Left(root);
    cout<<ans;
    return 0;
}
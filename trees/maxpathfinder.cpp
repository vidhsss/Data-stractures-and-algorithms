#include<iostream>
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
int MaxpathFinder(node* root, int &ans)
{
    if (root==NULL)
    {
        return 0;
    }
    int left1 =MaxpathFinder(root->left,ans);
    int right1= MaxpathFinder(root->right,ans);

    int nodesum= max(max(left1+right1+root->val, root->val),max(left1+root->val, right1+root->val));
    ans=max(ans,nodesum);

    int pathsum=max(root->val,max(left1+root->val, right1+root->val));
    return pathsum;
}
int main()
{
    node* root= new node(1);
    root->left=new node(-1);
    root->left->left=new node(2);
    root->left->right=new node(3);
    root->right=new node(4);
    int ans=0;
    MaxpathFinder(root,ans);
    cout<<ans;
    return 0;
}
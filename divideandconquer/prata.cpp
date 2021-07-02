#include<iostream>
using namespace std;
bool poss(int p,int r,int a[],int limit)
{
    for(int i=0;i<r;i++)
    
}
int prata(int p,int r, int a[])
{
    sort(a,a+r);
    int n=a[0]*p*(p+1)/2;
    int e=n;
    int s=n/r;
    int ans=e;
    while(s<=e)
    {
       int m=(e+s)/2;
       bool possible= 
       if (possible)
       {
           ans=m;
           e=m-1;
       }
       else
       {
         s=m+1;  
       }

    }

}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>p;
        cin>>r;
        for(int j=0;j<r;j++)
        {
            cin>>a[r]
        }
        count=prata(p,r,a)
    }
}
#include<iostream>
using namespace std;
int sumofarrays(int n, int m, int a[], int b[])
{
    int c,carry=0;
    int sum[100];
    m>n? c=m : c=n;
    
    for(int i=1;i<=c;i++)
    {
        if(m-i>=0 && n-i>=0){
            
        sum[c-i]=(a[n-i]+b[m-i]+carry)%10;
        carry=(a[n-i]+b[m-i]+carry)/10;
        
        }
        else if(m-i<0){
            sum[c-i]=a[n-i]+carry;
            carry=0;
        }
        else if(n-i<0){
            sum[c-i]=b[m-i]+carry;
            carry=0;

        }
        
    }
    if(carry>0)
    {
        cout<<carry<<", ";
    }

    for(int i=0;i<c;i++)
    {
        cout<<sum[i]<<", ";
    }
    cout<<"END";
    return 0;
}
int main()
{
    int a[100],b[100],m,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
       
    }
    sumofarrays(n,m,a,b);
    return 0;

}
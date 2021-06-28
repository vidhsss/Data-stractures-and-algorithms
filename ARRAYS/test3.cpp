#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int points(int i,int n,string a)
{
    int p1=0,p2=0,p=0;
   
    if(a[i]=='I' || a[n-1]=='I')
    {
      if(a[i]=='I'&& a[n-1]=='I'){
      p1=points(i+1,n,a);
      p2=points(i,n-1,a);
      if (p1>=p2)
      {p=p1;i++;}
      else{p=p2;}
      }
      else if(a[i]=='I')
      {
          p=points(i=i+1,n,a);
      }
      else
      {
          p=points(i,n=n-1,a);
      }
    }
    else
    {
        cout<<"O";
        p=n+1-i;
    }
    if(a[i]=='O' || a[n-1]=='O')
    {
      if(a[i]=='O'&& a[n-1]=='O'){
      p1=points(i+1,n,a);
      p2=points(i,n-1,a);
      if (p1>=p2)
      {p=p1;i++;}
      else{p=p2;}
      }
      else if(a[i]=='O')
      {
          p=points(i=i+1,n,a);
      }
      else
      {
          p=points(i,n=n-1,a);
      }
    }
    else
    {
        cout<<"I";
        p=n+1-i;
    }
    for(int j=i;j<n;j++){
        cout<<a[j]<<endl;
    }
    cout<<p;
    return p;
}
int main()
{
    int N,n;
    string a;
    cin>>N;
    cin.get();
    for(int i=0;i<N;i++)
    {
    getline(cin,a);
    n=sizeof(a)/sizeof(char);
    cout<<n;
    cout<<" "<<points(0,n,a);
    }
}
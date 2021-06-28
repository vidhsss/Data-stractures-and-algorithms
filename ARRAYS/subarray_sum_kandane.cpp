#include<iostream>
using namespace std;
int sum(int n, int a[])
{
	int cs=0,ms=0;
	for(int j=0;j<n;j++)
        {
            cs=cs+a[j];
            ms=max(cs,ms);
			if(cs<0)
            cs=0;
		}
    return ms;
}
int main() { 
    int a[1000];
    
    int n,N;
    cin>>N;
    
    for(int i=0;i<N;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
		cout<<sum(n,a)<<endl;
        

    }
    return 0;
}
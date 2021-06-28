#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a[1000],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int target;
	cin>>target;
	int sum=0,l,r;
	
	for(int i=0;i<n;i++)
	{
	    	
		for(l=i+1;l<n;l++)
		{
	
			for(r=n-1;r>0 && r>l;r--)
			{
					if(a[i]+a[l]+a[r]==target)
				{
					cout<<a[i]<<", "<<a[l]<<" and "<<a[r]<<endl;
					break;
				}
				
			}
			
		}
	}
	return 0;
}
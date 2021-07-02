#include<iostream>
using namespace std;
bool check(long int n, long int k, long int t, long int a[], long int mid)
{
	long int current_time=0;
	long int count=1;
	for(int i=0;i<n;i++)
	{
		if(current_time + a[i] > mid)
		{
			count++;
			current_time=a[i];
			if(count>k)
			{
				return false;
			}
		}
		else
		{
			current_time+=a[i];
		}
	}
	return true;
}
int main() {
	long int n,k,t;
	cin>>n>>k>>t;
	long int a[1000000];
	long int sum=0;
	for(long int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	long int s=a[n-1],e=sum;
	
	long int ans=0;
	while(s<=e)
	{
		long int mid=(s+e)/2;
		
		bool possible= check(n,k,t,a,mid);
		if(possible)
		{
			ans=mid;
			e= mid-1;
		

		}
		else
		{
			s=mid+1;
		}
	}
	cout<<ans*t;
	return 0;
}
#include<iostream>
using namespace std;
bool book_allocation(int n, int a[], int s,int lim)
{
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
     sum=sum+a[i];
     if(sum>=lim)
     {
         sum=0;
         count++;
         if(count==s)
         {
             return true;
         }

     }   
    }
    return false;
}
int main()
{
    int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int s;
		int n;
		cin>>n>>s;
		int a[1000];
		int sum=0;
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
			sum=sum+a[j];
		}

	
		int st=a[0];
		
		
		int e=sum;
		int ans=0;
		while(st<=e){
			int mid=(st+e)/2;
			bool possible=book_allocation(n,a,s,mid);
			if(possible)
			{
				ans=mid;
				st=mid+1;
				
			}
			else
			{
				e=mid-1;
				
			}
			

		}
		int ans1= sum - (ans*(s-1));
		cout<<max(ans,ans1)<< endl;
	}
}
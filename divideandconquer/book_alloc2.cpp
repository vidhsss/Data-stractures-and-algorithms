#include<iostream>
using namespace std;
bool book_allocation(int n, int a[], int s,int lim)
{
    int pages=0;
    int count=1;
    for(int i=0;i<n;i++)
    {
     
     if(pages+a[i]>lim)
     {
         count++;
		 pages=a[i];
		 if(count>s)
         {
             return false;
         }
         

     } 
	 else
	 {
		 pages+=a[i];
	 }  
    }
	
    return true;
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

	
		int st=a[n-1];
		
		
		int e=sum;
		int ans=0;
		while(st<=e){
			int mid=(st+e)/2;
			bool possible=book_allocation(n,a,s,mid);
			if(possible)
			{
				ans=mid;
				e=mid-1;
			}
			else
			{
				st=mid+1;
			}
			

		}
		// ans= sum- (ans*(s-1));
		cout<<ans;
	}
}
#include<iostream>
using namespace std;
bool check(long int n, long int m, long int x, long int y, long int mid)
{
	if ( x*mid <= m+(n-mid)*y)
		return true;
	else 
		return false;

}
int main() {
	long int m,n,x,y;
	cin>>n>>m>>x>>y;
	long int s=0,e=n;
	long int ans=0;
	while(s<=e)
	{
		long int mid=(e+s)/2;
		bool possible=check(n,m,x,y,mid);
		if (possible)
		{
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	cout<<ans;
	return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long 
bool compare(pair<ll,ll> s1, pair<ll,ll> s2)
{
	return s1.second<s2.second;
}
int main() {
	int n;
	cin>>n;
	pair<ll,ll>x[100000];
	for(int i=0;i<n;i++)
	{
		int c,r;
		cin>>c;
		cin>>r;
		// cout<<c-r<<" "<<c+r<<endl;
		x[i].first=c-r;
		x[i].second=c+r;

	}
	
	sort(x,x+n,compare);
	int count=1;
	ll y=x[0].second;
	for(int i=1;i<n;i++)
	{
		// cout<<x[i].first<<" "<<x[i].second<<endl;
		if(x[i].first>=y)
		{
			y=x[i].second;
			count++;

		}
		// cout<<count<<endl;
	}
	cout<<n-count;
	return 0;
}
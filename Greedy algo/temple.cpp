#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;

int main() {
	ll x[100000],y[100000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
		// cout<<x[i]<<" "<<y[i]<<endl;
	}
	sort(x,x+n);
	sort(y,y+n);
	ll deltax=x[1]-x[0]-1;

	ll deltay=y[1]-y[0]-1;
	if (n>=2){
	for(int i=2;i<n;i++)
	{
		// cout<<deltax<<" "<<deltay;
	
		deltax=max(deltax,x[i]-x[i-1]-1);
		deltay=max(deltay,y[i]-y[i-1]-1);

	}
	}
	
	cout<<deltax*deltay;
	return 0;
}
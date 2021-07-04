#include<iostream>
#include<vector>
#include <queue>
#define ll long long
using namespace std;
typedef pair<ll,pair<int,int>> node;

int main() {
	int k;
	int n;
	cin>>k;
	cin>>n;
	ll a[10][100000];
	vector<ll> v;
	priority_queue<node,vector<node>,greater<int>> pq;
	for (int i=0;i<k;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			
		}
		
	}
	pq.push({a[0,0],{0,0}});
	pq.push({a[1,0],{1,0}});
	pq.push({a[2,0],{2,0}});
	cout<<pq.top();
	

	return 0;
}
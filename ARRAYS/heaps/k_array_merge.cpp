#include<iostream>
#include<vector>
#include <queue>
#define ll long long
using namespace std;
typedef pair<int,pair<int,int> > node;

int main() {
	int k;
	int n;
	cin>>k;
	cin>>n;
	int a[10][100000];
	vector<int> v;
	priority_queue <node,vector<node>,greater<node> > pq;
	for (int i=0;i<k;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			
		}
		
	}
	for(int i=0;i<k;i++)
	{
		pq.push({a[i][0],{i,0}});
	}
	
	while(!pq.empty())
	{
		v.push_back(pq.top().first);
		int i=pq.top().second.first;
		int j=pq.top().second.second;

		pq.pop();
		if(j!=n-1)
		pq.push({a[i][j+1],{i,j+1}});
		
	}
	for(int i=0;i<n*k;i++)
	{
		cout<<v[i]<<" ";
	}
	

	return 0;
}
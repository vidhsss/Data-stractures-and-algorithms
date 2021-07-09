#include<iostream>
#include<queue>
using namespace std;
int main() {
	priority_queue<int,vector<int>,greater<int> > pq;
	int q,k;
	cin>>q>>k;
	int m,x,y;
	vector<int> v;
	
	for(int i=0;i<q;i++)
	{
		cin>>m;
		if(m==1)
		{
			cin>>x;
			cin>>y;
			
			pq.push(x*x + y*y);
		}
		else if( m==2)
		{
	
			for(int j=0;j<k-1;j++)        
			{
			v.push_back(pq.top());   
			pq.pop();
			}
			cout<<pq.top()<<endl;
			for(int j=0;j<k-1;j++){
			pq.push(v[j]);
			
			}
			v.clear();
		
		}
	}
	return 0;
}
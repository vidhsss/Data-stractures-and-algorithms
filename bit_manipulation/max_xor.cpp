//We are given two coins of value x and y. We have to find the maximum of value of a XOR b where x <= a <= b <= y.
#include<iostream>
using namespace std;
int main () {
	int x,y;
	int maximum=0;
	cin>>x;
	cin>>y;
	int a=x, b=y;
	for(int i=x;i<=y;i++)
	{
		for(int j=x;j<=y;j++)
		{
			int res=i^j;
			
			if(res>maximum)
			{
			maximum=i^j;
			a=i;
			b=j;
			}
		}
	}
	cout<<maximum;
	return 0;
}

#include<iostream>
using namespace std;
int countbit(int a, int b)
{
	int count=0;
	for(int i=a;i<=b;i++)
	{
		int n=i;
		while(n>0)
		{ 
		int last_bit= n&1;
		count+=last_bit;
		n=n>>1;
		}
	}
	return count;
}
int main() {
	int n;
	cin>>n;
	int a,b;
	while(n>0)
	{
		cin>>a;
		cin>>b;
		cout<<countbit(a, b)<<endl;
		n--;

	}

	return 0;
}
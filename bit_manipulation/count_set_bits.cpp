#include<iostream>
using namespace std;
int countbits(int n)
{
	int count=0;
	while(n>0)
	{
		int last_digit= n&1;
		count +=last_digit;
		n=n>>1;
		
	}
	return count;
}
int main() {
	int t,n;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		cout<<countbits(n)<<endl;
		t--;
	}
	return 0;
}
//We are given an array containg n numbers. All the numbers are present twice except 
//for one number which is only present once. Find the unique number without taking 
//any extra spaces and in linear time.
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a;
	int result=0;
	while(n>0)
	{
		cin>>a;
		result^=a;
		n--;
	}
	cout<<result;
}
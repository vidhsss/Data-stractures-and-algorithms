//You are given a sorted but rotated array. You need to fine the index of the pivot 
//element of the array where pivot is that element in the array which is greater than 
//its next element and divides the array into two monotonically increasing halves.
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[1000000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int s=0;
	int e = n-1;
	
	while(s<=e)
	{
		
		int m=(s+e)/2;
		if((a[m]<a[m-1]) && a[s]>a[m]  )
        {
            cout<<m-1;
            break;
        }
        else if(a[e]>=a[m]) e=m-1;
        else s=m+1;
    }
	



}
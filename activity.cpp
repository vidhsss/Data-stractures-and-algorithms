#include<iostream>
#include<algorithm>
using namespace std;
bool sortbysec(pair<int,int> &a, pair<int,int> &b)
{
	return (a.second < b.second);
}
void printMaxActivities(pair<int,int> a[], int n)
{
    int i, j;
	int count=0;
   
 
    i = 0;
 
    for (j = 1; j < n; j++)
    {
      
      if (a[j].first >= a[i].second)
      {
          i = j;
		  count++;
      }
    }
	cout<<count+1;
}
 
int main() {
	int t,n;
	cin>>t;
	pair<int,int> a[100];
	for(int i=0;i<t;i++)
	{
		cin>>n;
		for( int j=0;j<n;j++)
		{
			cin>>a[j].first>>a[j].second;
		}
		sort(a,a+n,sortbysec);
		// for( int j=0;j<n;j++)
		// {
		// 	cout<<a[j].second;
		// }
		printMaxActivities(a,n);
	}
	return 0;
}
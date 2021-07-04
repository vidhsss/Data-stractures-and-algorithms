// #include<iostream>
// #include<algorithm>
// using namespace std;
// #define ll long
// int main() {
// 	int t;
// 	cin>>t;
// 	while(t)
// 	{
// 		int n;
// 		cin>>n;
// 		ll a[100000];
// 		for(int i=0;i<n;i++)
// 		{
// 			cin>>a[i];
// 		}
// 		sort(a,a+n);
// 		int b[100000];
// 		for(int i=0;i<n/2;i++)
// 		{

// 			b[i]=a[i*2];
// 		}
// 		int min=0;
// 		int max=0;
// 		for(int i=0;i<n/2;i++)
// 		{

// 			min+=abs(a[i*2+1]-b[i])*n/4;
// 			max+=abs(a[n-(i*2+1)]-b[i])*n/4;
// 		}
// 		cout<<min<<" "<<max<<" "<<endl;
// 		t--;
// 	}
// 	return 0;
// }

#include<iostream>
#include<algorithm>
using namespace std;
#define ll long
int main() {
	int t;
	cin>>t;
	while(t)
	{
		long long int n,a[100000];cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        long long int mini=0;long long int maxi=0;
        sort(a,a+n);
        long long int i=0;long long int j=n-1;
        while(i<j){
            maxi+=abs(a[j]-a[i]);
            i++;j--;
        }
        j=n-1;
        while(j>=1){
            mini+=abs(a[j]-a[j-1]);
            j-=2;
        }
        cout<<mini<<" "<<maxi<<endl;
	t--;
	}
	return 0;
}
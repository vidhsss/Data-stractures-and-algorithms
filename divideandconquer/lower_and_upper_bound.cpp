#include<iostream>
using namespace std;

int upper(int a[],int n,int x){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==x){
            ans=mid;
            s=mid+1;
        }
        else if(a[mid]>x){   //change
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

int lower(int a[],int n,int x){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
		int mid=(s+e)/2;
        if(a[mid]==x)
        {
            ans=mid;
            e=mid-1;
        }
        else if(a[mid]>x){    //change
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

int main() 
{
    int n;
    cin>>n;
    int a[100000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
	int t;
    cin>>t;
    while(t>0)
    {
        int x;
        cin>>x;
        cout<<lower(a,n,x)<<" "<<upper(a,n,x)<<endl;
        t--;
    }
	return 0;
}
#include<iostream>
using namespace std;
int bitonic_array(int n, int a[])
{
    int inc[1000];
    int dec[1000];
    inc[0]=1;
    dec[n-1]=1;
    for(int i=1;i<n-1;i++)
    {
        inc[i]=a[i-1]<=a[i]? inc[i-1]+1 : 1;
    }
    for(int i=n-2;i>=0;i--)
    {
        dec[i]=a[i]>=a[i+1] ? dec[i+1]+1 : 1;
    }
    int max= inc[0]+dec[0]-1;
    for (int i = 1; i < n; i++)
    {
       if(inc[i]+dec[i]-1>max) 
       max= inc[i]+dec[i]-1;
    }
    return max;

}
int main()
{
    int N,n,a[1000];
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];

        }
        cout<<bitonic_array(n,a)<<endl;
    }
}
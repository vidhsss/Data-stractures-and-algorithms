#include<iostream>
using namespace std ;
void spiralprint(int m,int n, int a[][1000])
{
    int sr=0,er=n-1,sc=0,ec=m-1;
    while(sr<=er && sc<=ec){
    for(int i=sc;i<=ec;i++)
    cout<<a[sr][i]<<" ";
    sr++;
    for(int i=sr;i<=er;i++)
    cout<<a[i][ec]<<" ";
    ec--;
    if(er>sr)
    {
        for(int i=ec;i>=sc;i--)
        cout<<a[er][i]<<" ";
        er--;
    }
    if(ec>sc)
    {
        for(int i=er;i>=sr;i--)
        cout<<a[i][sc]<<" ";
        sc++;
    }}
}
int main()
{
    int m,n;
    int a[1000][1000];
    cin>>n>>m;
    int val=0;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            a[i][j]=val;
            val++;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    spiralprint(m,n,a);
    return 0 ;
}
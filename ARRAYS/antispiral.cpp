#include<iostream>
using namespace std;
void antispiral(int a[][10], int m, int n)
{
    int sr=0,er=m-1,sc=0,ec=n-1;
    while(sr<=er && sc<=ec)
    {
        for(int i=sr;i<=er;i++)
        cout<<a[i][sc]<<", ";
        sc++;
        for(int i=sc;i<=ec;i++)
        cout<<a[er][i]<<", ";
        er--;
        //if(ec>sc){
        for(int i=er;i>=sr;i--)
        cout<<a[i][ec]<<", ";
        ec--;
       // }
        //if(er>sr){
        for(int i=ec;i>=sc;i--)
        {
            cout<<a[sr][i]<<", ";
        }
        sr++;
        //}
    }
    cout<<"END";
    
}
int main(){
    int a[10][10];
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    antispiral(a,m,n);
    return 0;
}
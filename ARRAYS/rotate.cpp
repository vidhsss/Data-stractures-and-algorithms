#include<iostream>
using namespace std;
void rotate(int n, int a[][100])
{
    
    for(int i=0;i<n ;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[j][n-1-i]<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int n,a[100][100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    rotate(n,a);
    return 0;
}

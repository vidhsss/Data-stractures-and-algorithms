#include<iostream>
using namespace std;

bool issafe(int arr[100][100], int x, int y, int n)
{
   
    for(int row=0;row<x;row++)    //check the column 
    {
        if(arr[row][y]==1)
        {
            return false;
        }
    }
    int row =x;
    int col =y;
    while(row>=0 && col>=0)
    {
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    row =x;
    col =y;
    while(row>=0 && col<n)
    {
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nqueen( int arr[100][100],int x, int n)
{   
     if(x>n-1)
    {
        return true;
    }
    for(int i=0;i<n;i++)
    {
        if(issafe(arr,x,i,n))
        {
            arr[x][i]=1;
            if(nqueen(arr,x+1,n))
                return true;
            
            arr[x][i]=0;    //backtracking
        }
    }
    return false;
    
}
int main()
{
    int arr[100][100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }
    if(nqueen(arr,0,n))
    {for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    }
    else
    {
        cout<<"no";
    }
    return 0;
}
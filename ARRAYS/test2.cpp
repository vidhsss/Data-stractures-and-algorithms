#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
char* letters(int n, int a[])
{
    char* final = new char [100];
    final[0]='A';
    int l;
    
    for(int i=0;i<n;i++)
    {
        char* s= new char[100];
        l=a[i];
        
        if ((i+1)%2==0)
        {
            for(int j=0;j<l;j++){
                s[l-1-j]='A'+j;
            }
        }
        else
        {
            for(int j=0;j<l;j++){
                s[l-1-j]='Z'-j;
            }
           
        }
        
        strcat(final,s);
        
    }
  
    return final;
}
int main()
{
        int a[100],n,N;
        cin>>N;
        for(int i=0;i<N;i++){
            cin>>n;
            for(int j=0;j<n;j++)
            {
                cin>>a[j];
            }
            cout<<letters(n,a)<<endl;
        }
}
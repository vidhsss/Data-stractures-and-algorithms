#include<iostream>
#include<algorithm>
using namespace std;
bool check( int cows,int s[], int lim,int n)
{
    int last_cow=s[0];
    int count = 1;
    for (int i=1;i<n;i++)
    {
        if((s[i]-last_cow )>= lim)
        {
            last_cow =s[i];
            count++;
            if (count==cows)
            {
				return true;
            }
        }
	
    }

    
    return false;
}
int main()
{
    int s[100000];
    int n;
	cin>>n;
    int c;
	cin>>c;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	sort(s,s+n);
    int st=0;
    int e=s[n-1]-s[0];
    int ans=0;
	
   
    while(st<=e)
    {
        int m=(st+e)/2;
		
        bool possible=check(c,s,m,n);
        if (possible)
        {
            ans=m;
			
            st= m + 1;
			

        }
        else
        {
			
            e = m-1;
			

        }
    }
    cout<<ans;
    
    return 0;
    

}
#include<iostream>
#include<math.h>
using namespace std;
int numbers(long int x)
{
    long int  mini=x;
    long int   n=x;
    long int   digit;
    for(int i=0;n>=1;i++)
    {
        digit=n % 10;
        
        x=x-long(digit * pow(10,i));
        digit=9-digit;
        if (digit!=0)
        {
        x= x + long(digit * pow(10,i));
        
        mini= min(mini,x);
        }
        x=mini;
        
        n=n/10;
        

    }
    return mini;
}
int main(){
    long int   x;
    cin>>x;
    cout<<numbers(x);
    return 0;

}
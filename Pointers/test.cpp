#include<iostream>
using namespace std;
int main()
{
    int a[]={2,4,6,8};
    int *p=a;
    cout<<*(p+1);
    return 0;

}
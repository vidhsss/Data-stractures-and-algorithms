#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *xptr=&x;
    int **sptr=&xptr;
    cout<<*xptr;
    cout<<**sptr;
    return 0;
}
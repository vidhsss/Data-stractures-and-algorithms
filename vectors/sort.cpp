#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool compare( int a, int b)
{
    return a<b;   //increasing 
    //return a>b   //decreasing 
}
int main()
{
    vector<int> v;
     v.push_back(10);
     v.push_back(12);
    v.push_back(8);
    v.push_back(7);
    v.push_back(8);
    for (int x : v)
        cout << x << " ";
    sort(v.begin(),v.end(),compare);
    cout<<endl;
    for (int x: v){
        cout<<x<<";";
    }
    cout<<endl;
    //binary search
    bool present =binary_search(v.begin(),v.end(),8);
    cout<<present<<endl;
    std::__1::__wrap_iter<int *> it =lower_bound(v.begin(),v.end(),8);
    cout<<*it<<endl;
    cout<<it-v.begin()<<endl;  // no of terms before 8
     std::__1::__wrap_iter<int *> itt =upper_bound(v.begin(),v.end(),8);
    cout<<*itt<<endl;  //no just after 8
    cout<<itt-it; //no of times 8 appaering
}
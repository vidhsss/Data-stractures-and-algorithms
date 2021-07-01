#include <cmath>
#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
bool compare(pair<int,int> p1, pair<int,int> p2){
    int d1=(p1.first)*p1.first+ (p1.second)*p1.second;
    int d2=(p2.first)*p2.first+ (p2.second)*p2.second;
    if(d1==d2){
    return p1.first>p2.first;
    }

    return d1<d2;
}
int main(){
    vector<pair<int,int> > v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),compare);
    for( vector<pair<int,int> >::iterator it= v.begin();it!= v.end();it++)
    {
        cout<< (*it).first<<","<<(*it).second<<endl;
    }

}
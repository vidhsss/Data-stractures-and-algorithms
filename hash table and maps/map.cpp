#include<unordered_map>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    m["Mango"]=40;
    m.insert(make_pair("Banana",20));
    pair<string,int> p;
    p.first="Apple";
    p.second=30;
    m.insert(p);
    unordered_map<string,int>::iterator f=m.find("Apple");
    if(f!=m.end()){
        cout<<m["Apple"]<<endl;
    }
    string key;
    cin>>key;
    if(m.count(key))
    {
        cout<<"found";
    }
    else {
        cout<<"not found";
    }
    for (unordered_map<string,int>::iterator it=m.begin();it!=m.end();it++){
        cout<<it->first<<" and "<<it->second<<endl;
    }
}
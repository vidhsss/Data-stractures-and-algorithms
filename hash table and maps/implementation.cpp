#include<iostream>
#include<cstring>
#include "hastable.h"
using namespace std;
int main(){
    Hashtable<int> menu(8);
    menu.insert("burger",15);
    menu.insert("pizza", 39);
    menu.insert("noodles",45);
    menu.insert("pasta", 70);
    menu.insert("paneer",115);
    menu.insert("dosa",90);
    menu.print();
    int key=*menu.search("roti");
    // if(key==NULL)
    cout<<endl<<key;
    // else 
    // cout<<"not found"<<endl;
    cout<<*menu.search("pasta");
}
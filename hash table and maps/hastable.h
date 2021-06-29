#include<iostream>
#include<cstring>
using namespace std;


template<typename T>
class Node{
    public:
    string key;
    T value;
    Node<T>* next; // pointer in each node storing the address of next node 
    Node(string key, T val){
        this->key=key;
        value=val;
        next=NULL;
    }
        
    
};
template <typename T> class Hashtable {
    Node<T> ** table; //pointer to the Hash table. Hash table is table of node pointers.
    int current_size;
    int table_size;
    //hash function giving index value for hash table
    int hash_func(string key) 
    {
        int idx=0;
        //idx= value% table_size;
        int p=1;
        for(int j=0;j<key.length();j++)
        {
            idx=idx+(key[j]*p)%table_size;
            idx=idx%table_size;
            p=(p*27)%table_size;

        }
        return idx;
    }
    public:
    Hashtable(int ts)
    {
        table_size=ts;
        table = new Node<T>* [table_size]; //each bucket in table is a pointer. so table is an array of pointers of node type. 
        current_size=0;
        for(int i=0;i<table_size;i++)
        {
            table[i]=NULL;   // Each pointer in table points toward sNUll initailly while declaring the constructor
        }
    }   

void insert(string key, T value)
{
    int idx=hash_func(key);
    Node<T>* n=new Node<T> (key,value); // n is poining towards the new node described 
    n->next=table[idx]; //the next in this node will store the addresss of previous node which was stored in the tablke[idx] 
    table[idx]=n;       // and table[idx] will store adress of this node 
    current_size++;
}
void print()
{
    for( int i=0;i<table_size;i++)
    {
        cout<<i<<"<<";
        Node<T>* temp =table[i];
        while(temp!=NULL)
        {
            cout<<temp->key<<"->";
            temp=temp->next;
        }    
        cout<<endl;
    }
}
T* search(string key)
{
    int idx=hash_func(key);
    Node<T>* temp=table[idx];
    while(temp!=NULL)
    {
        if(temp->key==key)
        return &temp->value;

        temp=temp->next;

    }
    return NULL;
}

};
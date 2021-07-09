#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin>>t;

    while(t)
    {
        cin>>n;
        double a;
        cin>>a;
        priority_queue<double> left;
        priority_queue<double,vector<double>,greater<double> > right;
        double mid=a;
        cout<<mid<<" ";
        left.push(a);
        for(int i=0;i<n-1;i++)
        {
            cin>>a;
            if(left.size()>right.size())
            {
                if (a>=mid)
                {
                    right.push(a);
                }
                else if (a<mid)
                {
                    right.push(left.top());
                    left.pop();
                    left.push(a);
                    

                }
                mid=(left.top()+ right.top())/2;
                
            }
            else if(left.size()<right.size())
            {
                if (a<=mid)
                {
                    left.push(a);
                }
                else if (a>mid)
                {
                    left.push(left.top());
                    right.pop();
                    right.push(a);
                }
                mid=(left.top()+ right.top())/2.00;
              
            }
            else if(left.size()==right.size())
            {
                if(a<=left.top())
                {
                    left.push(a);
                    mid=left.top();
                }
                 if(a>=right.top())
                {
                    right.push(a);
                    mid=right.top();
                }
                
            }
            cout<<mid<<" ";
        }
        cout<<endl;
        t--;

    }

    return 0;
}
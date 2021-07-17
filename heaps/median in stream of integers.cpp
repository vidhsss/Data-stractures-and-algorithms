class MedianFinder {
public:
    priority_queue<float> l;
    priority_queue<float,vector<float>,greater<float>> r;
    double median;
    /** initialize your data structure here. */
    MedianFinder() {
        median=0;
        
    }
    
    void addNum(int num) {
        
        if (l.size()==0 and r.size()==0)
        {
            median=num;
            l.push(num);
        }
        else{
        if(l.size()>r.size())
        {
           if(num>median)
           {
               r.push(num);
           }
            else
            {
                r.push(l.top());
                l.pop();
                l.push(num);
                    
            }
            median=(l.top()+r.top());
            median=median/2.000;
        }
            else if (l.size()<r.size())
            {
                   if(num<median)
           {
               l.push(num);
           }
            else
            {
                l.push(r.top());
                r.pop();
                r.push(num);
                    
            }
            median=(l.top()+r.top())/2;
            }
            else
            {
                if (num<median )
                {
                    l.push(num);
                    median=l.top();
                }
                else
                {
                    r.push(num);
                    median=r.top();
                }
            }

            
        }
        }
    
    
    double findMedian() {
        return median;
    }
};

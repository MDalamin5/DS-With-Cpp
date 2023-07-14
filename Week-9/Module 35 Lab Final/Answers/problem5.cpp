#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100
class Queue
{
 public:
    int arr[MAX_SIZE];
    int l,r,size;
    Queue()
    {
        l=0;
        r=-1;
        size=0;
    }
    void enQueue(int data)
    {
        r++;
        arr[r]=data;
    }
    void deQueue()
    {
        if(l>r)
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        l++;
    }
    int top()
    {
        if(l>r)
        {
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        return arr[l];
    }
    int getSize()
    {
        return r-l+1;
    }
};
int main()
{
    Queue q;
    q.enQueue(5);
    q.enQueue(6);
    q.enQueue(7);
    q.enQueue(8);
    cout<<"Size of queue is: "<< q.getSize()<<endl;
    cout<<q.top()<<endl;
    q.deQueue();
    cout<<q.top()<<endl;
    q.deQueue();
    cout<<q.top()<<endl;
    q.deQueue();
    cout<<q.top()<<endl;
    q.deQueue();
    cout<<q.top()<<endl;
    q.deQueue();
    cout<<"Size of queue is: "<< q.getSize()<<endl;


    
}
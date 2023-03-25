#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 5
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
        if(r+1==MAX_SIZE)
        {
            cout<<"Queue is Full sir!"<<endl;
            return;
        }
        r++;
        if(r==MAX_SIZE)
        {
            r=0;
        }
        arr[r]=data;
        size++;
    }
    void deQueue()
    {
        if(size==0)
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        l++;
        if(l==MAX_SIZE)
        {
            l=0;
        }
        size--;
    }
    int top()
    {
        if(size==0)
        {
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        return arr[l];
    }
    int getSize()
    {
        return size;
    }
};
int main()
{
    Queue q;
    q.enQueue(5);
    q.enQueue(6);
    q.enQueue(7);
    q.enQueue(8);
    q.enQueue(9);
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
#include<bits/stdc++.h>
using namespace std;
#define q_size 10
 template<class T>
class Queue
{
    public:
    T arr[q_size];
    int size;
    int l;
    int r;
    Queue()
    {
        l=0;
        r=-1;
        size=0;
    }
    void enQueue(T data)
    {
        if(size==q_size)
        {
            cout<<"Your Queue is full"<<endl;
            return;
        }
        if(r==q_size)   
        {
            r=0;
        }
        r++;
        arr[r]=data;
        size++;
    }
    void deQueue()
    {
        if(size==0)
        {
             cout<<"Sorry Sir! Your Queue is Empty..."<<endl;
             return;
        }
        l++;
        if(l==q_size)
        {
           l=0;
        }
        size--;
    }
    T top()
    {
        if(size==0)
        {
            cout<<"Your Queue is Empty...!"<<endl;
            T ob;
            return ob;
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
    Queue<int> q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
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
    cout<<q.top()<<endl;
    q.deQueue();

    Queue<char> ch;
    ch.enQueue('a');
    ch.enQueue('b');
    cout<<ch.top();
}
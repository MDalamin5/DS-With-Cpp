#include<bits/stdc++.h>
using namespace std;
//#define MAX_SIZE 3
class Queue
{
 public:
    int *arr;
    int l,r,size,arr_cap;
    Queue()
    {
        arr_cap=1;
        arr = new int[arr_cap];
        l=0;
        r=-1;
        size=0;
    }
    void resizeArr()
    {
        int *temp;
        int indx=0;
        if(l>r)
        {
            temp = new int[arr_cap];
            
            for(int i=l;i<arr_cap;i++)
            {
                temp[indx]=arr[i];
                indx++;
            }
            for(int i=0;i<=r;i++)
            {
                temp[indx]=arr[i];
                indx++;
            }
            swap(arr,temp);
            delete [] temp;
        }
        
        
    }
    void incriseSize()
    {
        resizeArr();
        int *temp;
        temp= new int[arr_cap*2];
        for(int i=0;i<arr_cap;i++)
        {
            temp[i]=arr[i];
        }
        swap(temp,arr);
        delete []temp;
        arr_cap *=2;
    }
    void enQueue(int data)
    {
        if(r+1==arr_cap)
        {
            incriseSize();
        }
        r++;
        if(r==arr_cap)
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
        if(l==arr_cap)
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
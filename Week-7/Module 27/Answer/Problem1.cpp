#include<bits/stdc++.h>
using namespace std;

class Queue
{
    public:
    int *arr;
    int size;
    int arr_cap;
    int l;
    int r;
    Queue()
    {
        arr= new int[1];
        size=0;
         l=0;
         r=-1;
        arr_cap=1;
    }
    void incriseSize()
    {
        
    }
    void enQueue(int data)
    {
        if(getSize()==arr_cap)
        {
           incriseSize();
        }
        if(r==arr_cap)
        {
            r=0;
        }
        r++;
        arr[r]=data;
        size++;
    }
    void deQueue()
    {
        if(getSize()==0)
        {
            cout<<" empty!!"<<endl;
        }
        l++;
        if(l==arr_cap)
        {
            l=0;
        }
        size--;
    }
    int forntData()
    {
        if(getSize()==0)
        {
            cout<<"Array IS empty"<<endl;
            return -1;
        }
        return arr[l];
    }
    int getSize()
    {
        return size;
    }
    void printArr()
    {
       for(int i=0;i<getSize();i++)
       {
        cout<<arr[i]<<" ";
       }
       cout<<endl;
    }
};
int main()
{
    Queue q;
    q.enQueue(4);
    cout<<q.forntData()<<endl;
    
}
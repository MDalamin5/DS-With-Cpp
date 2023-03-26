#include<bits/stdc++.h>
using namespace std;
#define q_size 10
 template<class T>
class Queue
{
    public:
    T *arr;
    int size;
    int l;
    int r;
    int arr_cap;
    Queue()
    {
        l=0;
        r=-1;
        size=0;
        arr_cap=1;
        arr = new T[arr_cap];
        
    }
    void resizeData()
    {
        T *temp;
        int indx=0;
        if(l>r)
        {
            temp = new T[arr_cap];
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
            delete[] temp;
        }
    }
    void incriseSize()
    {
        resizeData();
        T *temp= new T[arr_cap*2];
        for(int i=0;i<arr_cap;i++)
        {
            temp[i]=arr[i];
        }
        swap(arr,temp);
        delete [] temp;
        arr_cap *=2;

    }
    void enQueue(T data)
    {
        if(size==arr_cap)
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
        if(size==0)
        {
             cout<<"Sorry Sir! Your Queue is Empty..."<<endl;
             return;
        }
        l++;
        if(l==arr_cap)
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
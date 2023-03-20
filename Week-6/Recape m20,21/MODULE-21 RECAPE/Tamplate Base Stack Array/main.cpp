#include<bits/stdc++.h>
using namespace std;

class Stack
{
    public:
    int *a;
    int arr_sz;
    int arr_cap;
    Stack()
    {
        a = new int[1];
        arr_cap=1;
        arr_sz=0;
    }
    void sizeUpdate()
    {
        int *temp = new int[arr_cap*2];
        for(int i=0;i<getSize();i++)
        {
            temp[i]=a[i];
        }
        swap(temp,a);
        arr_cap *=2;
        delete []temp;
    }
    void push(int data)
    {
        if(arr_sz+1>arr_cap)
        {
            sizeUpdate();
        }
        a[arr_sz++]=data;
    }
    void pop()
    {
        if(getSize()==0)
        {
            cout<<"Warnig! Stack is Empty"<<endl;
            return;
        }
        a[arr_sz-1]=0;
        arr_sz--;
    }
    int top()
    {
        if(getSize()==0)
        {
            cout<<"Warnig! Stack is Empty"<<endl;
            return -1;
        }
        return a[arr_sz-1];
    }
    int getSize()
    {
        return arr_sz;
    }
};
int main()
{
    Stack stk;
    stk.push(1);
    stk.push(2);
    cout<<stk.top()<<endl;
    stk.pop();
    cout<<stk.top()<<endl;
    stk.pop();

}
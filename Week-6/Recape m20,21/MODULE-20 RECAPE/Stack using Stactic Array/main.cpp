#include<bits/stdc++.h>
using namespace std;
#define stack_size 10
class Stack
{
    public:
    int arr[stack_size];
    int size;
    int cap;

    Stack()
    {
        size=0;
        cap=0;
    }
    void pushData(int data)
    {
        if(getSize()+1>stack_size)
        {
            cout<<"Stack is Full"<<endl;
            return;
        }
        arr[size++]=data;
    }
    void printData()
    {
        if(getSize()==0)
        {
            cout<<"Stack is Empty"<<endl;
            return;
        }
        for(int i=0;i<getSize();i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void pop()
    {
        if(getSize()<1)
        {
            cout<<"Your stack is Empty"<<endl;
            return;
        }
        arr[size-1]=0;
        size--;
    }
    int topData()
    {
        return arr[size-1];
    }


    int getSize()
    {
        return size;
    }
};
int main()
{
    Stack stk;
    stk.pushData(5);
    stk.pushData(6);
    stk.printData();
    stk.pop();
    stk.printData();
    stk.pop();
    stk.printData();
    stk.pop();

return 0;
}
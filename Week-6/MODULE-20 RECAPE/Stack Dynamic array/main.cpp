#include<bits/stdc++.h>
using namespace std;
#define stack_size 10
class Stack
{
    public:
    int *arr;
    int size;
    int cap;

    Stack()
    {
        arr = new int[1];
        size=0;
        cap=1;
    }

    void growStackSize()
    {
        int *temp = new int[cap*2];
        for(int i=0;i<cap;i++)
        {
            temp[i]=arr[i];
        }
        swap(arr,temp);
        delete[] temp;
        cap *=2;
    }
    void pushData(int data)
    {

        if(getSize()+1>cap)
        {
            growStackSize();
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
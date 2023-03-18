#include<bits/stdc++.h>
using namespace std;
#define arr_size 10
template <class T>
class Stack
{
    public:
    int cur_size;
    T arr[arr_size];
    Stack()
    {
        cur_size=0;
    }
    void push(T data)
    {
        if(cur_size==arr_size)
        {
            cout<<"Stack is Full!"<<endl;
            return;
        }
        arr[cur_size++]=data;
    }
    T top()
    {
        if(cur_size==0)
        {
            cout<<"Stack is Empty!"<<endl;
            T ob;
            return ob;
        }
        return arr[cur_size-1];
    }
    void pop()
    {
        if(cur_size==0)
        {
            cout<<"Stack is Empty!"<<endl;
            return;
        }
        arr[cur_size-1]=0;
        cur_size--;
    }
};

int main()
{
    Stack<double> stk;
    stk.push(5.1);
    stk.push(4.5);
    stk.push(3.4);
    stk.push(2.2);
    stk.push(1.4);

    cout<<stk.top()<<endl;
    stk.pop();
     cout<<stk.top()<<endl;
    stk.pop();
     cout<<stk.top()<<endl;
    stk.pop();
     cout<<stk.top()<<endl;
    stk.pop();
     cout<<stk.top()<<endl;
    stk.pop();
     
}
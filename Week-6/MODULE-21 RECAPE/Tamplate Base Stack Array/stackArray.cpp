#include<bits/stdc++.h>
using namespace std;
template <class T>
class Stack
{
    public:
    T *a;
    int arr_sz;
    int arr_cap;
    Stack()
    {
        a = new T[1];
        arr_cap=1;
        arr_sz=0;
    }
    void sizeUpdate()
    {
        T *temp = new T[arr_cap*2];
        for(int i=0;i<getSize();i++)
        {
            temp[i]=a[i];
        }
        swap(temp,a);
        arr_cap *=2;
        delete []temp;
    }
    void push(T data)
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
       // a[arr_sz-1]=0;
        arr_sz--;
    }
    T top()
    {
        if(getSize()==0)
        {
            cout<<"Warnig! Stack is Empty"<<endl;
            T ob;
            return ob;
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
    Stack<int> stk;
    stk.push(1);
    stk.push(2);
    cout<<stk.top()<<endl;
    stk.pop();
    cout<<stk.top()<<endl;
    stk.pop();

    Stack<char> cStk;
    cStk.push('c');
    cStk.push('b');
    cStk.push('a');

    cout<<cStk.top()<<endl;
    cStk.pop();
     cout<<cStk.top()<<endl;
    cStk.pop();
     cout<<cStk.top()<<endl;
    cStk.pop();


}
#include<bits/stdc++.h>
using namespace std;
class Stack
{
    public:
    int *a;
    int stack_size;
    int arr_cap;
    Stack()
    {
        stack_size=0;
        arr_cap=1;
        a= new int[1];
    }
    void increseSize()
    {
        int *temp;
        temp=new int[arr_cap*2];
        for(int i=0;i<arr_cap;i++)
        {
            temp[i]=a[i];
        }
        swap(a,temp);
        delete[] temp;
        arr_cap *=2;

    }
    //void push add elements in stack
    void push(int data)
    {
        stack_size+= 1;
        if(stack_size>arr_cap)
        {
           increseSize();
        }
        a[stack_size-1]=data;
    }

    //delete top most elements
    void pop()
    {
        if(stack_size==0)
        {
            cout<<"Stsck is Empty!";
            return;
        }
        a[stack_size-1]=0;
        stack_size--;
    }
    //return top elements 
    int top()
    {
        if(stack_size==0)
        {
            cout<<"Stsck is Empty!"<<endl;
            return -1;
        }
        return a[stack_size-1];

    }
};
int main()
{
   Stack st;
   for(int i=0;i<5;i++)
   {
    st.push(i+1);
   }
   cout<<st.top()<<endl;
   st.pop();
   cout<<st.top()<<endl;
    st.pop();
   cout<<st.top()<<endl;
    st.pop();
   cout<<st.top()<<endl;
    st.pop();
   cout<<st.top()<<endl;
    st.pop();
   cout<<st.top()<<endl;
}
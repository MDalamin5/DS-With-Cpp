#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 500
class Stack
{
    public:
    int a[MAX_SIZE];
    int stack_size;
    Stack()
    {
        stack_size=0;
    }
    //void push add elements in stack
    void push(int data)
    {
        stack_size+= 1;
        if(stack_size>MAX_SIZE)
        {
            cout<<"Stack is Full!";
            return;
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
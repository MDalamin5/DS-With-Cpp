#include<bits/stdc++.h>
using namespace std;
class Stack
{
    public:
    int *a;
    int arr_cap;
    int stack_size;

    Stack()
    {
        stack_size=0;
        arr_cap=1;
        a= new int[arr_cap];
    }
    void incriseStackSize()
    {
        int *temp = new int [arr_cap*2];
        for(int i=0;i<arr_cap;i++)
        temp[i]=a[i];

        swap(a,temp);
        delete[] temp;
        arr_cap *=2;
    }
    void push(int data)
    {
        stack_size +=1;
        if(stack_size>arr_cap)
        {
            incriseStackSize();
        }
        a[stack_size-1]=data;
    }
    void pop()
    {
        if(stack_size==0)
        {
            cout<<"stack is Empty";
            return;
        }
        a[stack_size-1]=0;
        stack_size--; 
    }

    int top()
    {
        if(stack_size==0)
        {
            cout<<"Stack Is Empty";
            return -1;
        }
        return a[stack_size-1];
    }
    int StackSize()
    {
        return stack_size;
    }

};
int main()
{
  Stack stk;
  for(int i=0;i<5;i++)
  {
    //stk.push(rand()%10);
    stk.push(i+1);
  }
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
   cout<<stk.top()<<endl;
}
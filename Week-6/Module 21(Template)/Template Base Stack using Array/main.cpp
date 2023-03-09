#include<bits/stdc++.h>
using namespace std;
template <class T>
class Stack
{
    public:
    T *a;
    int arr_cap;
    int stack_size;

    Stack()
    {
        stack_size=0;
        arr_cap=1;
        a= new T[arr_cap];
    }
    void incriseStackSize()
    {
        T *temp = new T [arr_cap*2];
        for(int i=0;i<arr_cap;i++)
        temp[i]=a[i];

        swap(a,temp);
        delete[] temp;
        arr_cap *=2;
    }
    void push(T data)
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
        //a[stack_size-1]=0;

        stack_size--; 
    }

    T top()
    {
        if(stack_size==0)
        {
            cout<<"Stack Is Empty"<<endl;
            T ob;
            return ob;
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
  Stack<int>stk;
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


   Stack<char>stk2;
   stk2.push('a');
   stk2.push('b');
   cout<<stk2.top()<<endl;
   stk2.pop();
   
}
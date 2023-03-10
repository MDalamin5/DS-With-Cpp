#include<bits/stdc++.h>

using namespace std;


template<class T>
class node
{
public:
    T data;
    node * nxt;
    node * prv;
};
template<class T>
class DoublyLinkedList
{
public:
    node<T> *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node<T> *CreateNewNode(T data)
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node<T> *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

   //Return size
    int getSize()
    {
        return sz;
    }
    // Delete from head
    void eraseAtHead()
    {
        if(head==NULL)
        {
            return;
        }
        node<T> *a = head;
        node<T> *temp = head->nxt;
       delete a;
       if(temp!= NULL)
       {
        temp->prv=NULL;
       }
        head=temp;
        sz--;
        
    }
};

template<class T>
class Stack
{
    public:
    DoublyLinkedList<T> dl;
    Stack()
    {

    }

    void push(T data)
    {
        dl.InsertAtHead(data);
    }
    void pop()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack Is Empty";
        }
        dl.eraseAtHead();
    }
    T top()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack is Empty"<<endl;
            T ob;
            return ob;
        }
        return dl.head->data;
    }
};
int main()
{
    
    Stack<int> stk;
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
   
   Stack<char> ch;
   ch.push('c');
   ch.push('b');
   ch.push('a');
   cout<<ch.top()<<endl;
   ch.pop();
   cout<<ch.top()<<endl;
   ch.pop();
   cout<<ch.top()<<endl;
   ch.pop();
    
   
}
#include <bits/stdc++.h>
using namespace std;
template <class T>
class node
{
public:
    T data;
    node<T> *next;
    node (T data)
    {
        this->data=data;
        this->next=NULL;
    }
};
template<class T>
class Stack
{
    public:
    node<T> *head;
    int size;
    Stack()
    {
        size=0;
        head=NULL;
    }

    void insertAtHead(T data)
    {
        node<T> *newNode = new node<T>(data);
        if(head==NULL)
        {
            head=newNode;
            size++;
            return;
        }
        node<T> *a= head;
        newNode->next=head;
        head=newNode;
        size++;
    }
    void eraseFromHead()
    {
        if(getSize()==0)
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        if(getSize()==1)
        {
            delete head;
            head==NULL;
            size--;
            return;
        }
        node<T> *a= head;
        head=a->next;
        delete a;
        size--;
    }
    T top()
    {
        if(getSize()==0)
        {
            cout<<"Stack is empaty"<<endl;
            T ob;
            return ob;
        }
        return head->data;
    }
    void travers()
    {
        node<T> *a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<endl;
    }
    int getSize()
    {
        return size;
    }
};
int main()
{
    Stack<int> stk;
    stk.insertAtHead(1);
    stk.insertAtHead(2);
    stk.insertAtHead(4);
    stk.travers();
    cout<<stk.top()<<endl;
    stk.eraseFromHead();
    stk.eraseFromHead();
    stk.travers();
    stk.eraseFromHead();
    stk.eraseFromHead();
    
    Stack<char> ch;
    ch.insertAtHead('a');
    cout<<ch.top()<<endl;

}

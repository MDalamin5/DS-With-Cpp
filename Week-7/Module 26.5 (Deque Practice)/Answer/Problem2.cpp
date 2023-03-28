#include<bits/stdc++.h>
using namespace std;
template<class T>
class node
{
    public:
    T data;
    node<T> *prv;
    node<T> *next;
    node(T data)
    {
        this->data=data;
        this->prv=NULL;
        this->next=NULL;
    }
};
template<class T>
class Deque
{
    public:
    node<T> *head;
    node<T> *tail;
    int size;
    Deque()
    {
        head=NULL;
        tail=NULL;
        size=0;
    }
    void pushFront(T data)
    {
        node<T> *newNode = new node<T>(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            size++;
            return;
        }
        node<T> *temp= head;
        newNode->next=head;
        temp->prv=newNode;
        head=newNode;
        size++;
    }
    void pushBack(T data)
    {
        node<T> *newNode = new node<T>(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            size++;
            return;
        }
        newNode->prv=tail;
        tail->next=newNode;
        tail=newNode;
        size++;
    }
    void popBack()
    {
        if(getSize()==0)
        {
            cout<<"Deque is Empty!!!!"<<endl;
            return;
        }
        if(getSize()==1)
        {
            delete tail;
            head=tail=NULL;
            size--;
            return;
        }
        node<T> *temp = tail;
        tail=temp->prv;
        tail->next=NULL;
        delete temp;
        size--;
    }
    void popFront()
    {
        if(getSize()==0)
        {
            cout<<"Deque is Empty!!!!"<<endl;
            return;
        }
        if(getSize()==1)
        {
            delete tail;
            head=tail=NULL;
            size--;
            return;
        }
        node<T> *temp = head;
        head=temp->next;
        head->prv=NULL;
        delete temp;
        size--;
    }
    T frontData()
    {
        if(getSize()==0)
        {
            cout<<"Deque is Empty!!!!"<<endl;
            T ob;
            return ob;
        }
        return head->data;
    }
    T backData()
    {
        if(getSize()==0)
        {
            cout<<"Deque is Empty!!!!"<<endl;
            T ob;
            return ob;
        }
        return tail->data;
    }
    int getSize()
    {
        return size;
    }
    void travers()
    {
        node<T> *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<endl;
    }
};
int main()
{
    Deque<int> dq;
    dq.pushFront(1);
    dq.pushFront(4);
    dq.pushBack(55);
    dq.pushFront(3);
    dq.travers();
    dq.popBack();
    dq.travers();
    dq.popFront();
    dq.travers();
    cout<<"Size of Deque: "<<dq.getSize()<<endl;
    cout<<dq.frontData()<<endl;
    cout<<dq.backData()<<endl;
    
    Deque<char> ch;
    ch.pushBack('a');
    ch.travers();
    return 0;
}
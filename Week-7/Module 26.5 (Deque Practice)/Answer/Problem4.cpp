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
    int revResult;
    Deque()
    {
        head=NULL;
        tail=NULL;
        size=0;
        revResult=0;
    }
    void insertAtHead(T data)
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
    void insertAtTail(T data)
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
    void pushFront(T data)
    {
        if(revResult==0)
        {
            insertAtHead(data);
        }
        else
        {
            insertAtTail(data);
        }
    }
    void pushBack(T data)
    {
        if(revResult==0)
        {
            insertAtTail(data);
        }
        else
        {
            insertAtHead(data);
        }
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
    void reversDeque()
    {
        if(revResult==0)
        {
            revResult=1;
        }
        else
        {
            revResult=0;
        }
    }
    T findMaxData()
    {
        node<T> *a = head;
        T maxValue = head->data;
        while(a!=NULL)
        {
            if(a->data>maxValue)
            {
                maxValue=a->data;
            }
            a=a->next;
        }
        return maxValue;  
    }
    T findMinData()
    {
        node<T> *a = head;
        T minValue = head->data;
        while(a!=NULL)
        {
            if(a->data<minValue)
            {
                minValue=a->data;
            }
            a=a->next;
        }
        return minValue;  
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
    cout<<dq.findMaxData()<<endl;
    cout<<dq.findMinData()<<endl;
    return 0;
}
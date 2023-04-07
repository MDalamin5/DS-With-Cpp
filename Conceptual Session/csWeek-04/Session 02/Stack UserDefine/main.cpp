#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node *next;
    Node *prv;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prv=NULL;
    }
};
class Stack
{
    Node *head;
    Node *top;
    int sz=0;
    public:
    Stack()
    {
        head=NULL;
        top=NULL;
    }
    void push(int val)
    {
        Node *newNode=new Node(val);
        if(head==NULL)
        {
            head=newNode;
            top=newNode;
            sz++;
            return;
        }
        Node *a=head;
        newNode->next=head;
        a->prv=newNode;
        head=newNode;
        top=newNode;
        sz++;
    }
    void pop()
    {
        if(sz==0)
        {
            cout<<"Stack Is Empty!!!!!"<<endl;
            return;
        }
        Node *temp= head;
        head=temp->next;
        top=head;
        head->prv=NULL;
        sz--;
        delete temp;
    }
    int topp()
    {
        if(sz==0)
        {
            cout<<"Stack Is Empty!!!!!"<<endl;
            return -1;
        }
        return head->val;
    }
};
int main()
{
    Stack stk;
    stk.push(10);
    stk.push(20);
    cout<<stk.topp()<<endl;;
    stk.pop();
    cout<<stk.topp()<<endl;
    stk.pop();
    
}
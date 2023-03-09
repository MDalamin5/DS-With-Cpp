#include<bits/stdc++.h>

using namespace std;



class node
{
public:
    int data;
    node * nxt;
    node * prv;
};

class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node * CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    //Inserts the given data at the given index O(n)
    void Insert(int index, int data)
    {
        if(index > sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index!= index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        // a = cur_index - 1
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node *b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }

    //Deletes the given index O(n)
    void Delete(int index)
    {
        if(index >= sz)
        {
            cout<<index<<" doesn't exist.\n";
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->prv;
        node *c = a->nxt;
        if(b!=NULL)
        {
            b->nxt = c;
        }
        if(c!= NULL)
        {
            c->prv = b;
        }
        delete a;
        if(index==0)
        {
            head = c;
        }
        sz--;
    }

    //Prints the linked list O(n)
    void Traverse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }

    //Reverse the doubly linked list O(n)
    void Reverse()
    {
        if(head==NULL)
        {
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != sz-1)
        {
            a = a->nxt;
            cur_index++;
        }
        // last index is in a

        node *b = head;
        while(b!= NULL)
        {
            swap(b->nxt, b->prv);
            b = b->prv;
        }
        head = a;
    }
    void swapAtIndedx(int i, int j)
    {
       node *a= head;
       node *b = head;
       int head_a=0;
       int head_b=0;
       while(head_a!=i)
       {
          a=a->nxt;
          head_a++;
       }
       while(head_b!=j)
       {
          b=b->nxt;
          head_b++;
       }

       swap(a->data,b->data);

    }
    void eraseAtHead()
    {
        if(head==NULL)
        {
            return;
        }
        node *a = head;
        node *temp = head->nxt;
       delete a;
       if(temp!= NULL)
       {
        temp->prv=NULL;
       }
        head=temp;
        sz--;
        
    }
    void deleteZero()
    {
      
       node *b= head;
      while(b!=NULL)
      {
        bool flag = false;
        if(head->data==0)
        {
            eraseAtHead();
            b=b->nxt;
            flag=true;
        }
        if(b->data==0)
        {
            node *temp= b;
            node *p = temp->prv;
            node *q= temp->nxt;

            p->nxt=temp->nxt;
            q->prv=temp->prv;
            delete temp;
            flag=true;
            b=b->nxt;
        }
        if(flag==false)
        {
           b=b->nxt;
        }

      }

    }
};

class Stack
{
    public:
    DoublyLinkedList dl;
    Stack()
    {

    }

    void push(int data)
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
    int top()
    {
        if(dl.getSize()==1)
        {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return dl.head->data;
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
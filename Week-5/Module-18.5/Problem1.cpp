#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};

class linkedList
{
    public:
    node *head;
    int size;
    linkedList()
    {
        head=NULL;
        size=0;
    }
    node *createNewNode(int data)
    {
        node *newNode= new node;
        newNode->data=data;
        newNode->next=NULL;
        return newNode;
    }
    void insertHead(int data)
    {
        node *a = createNewNode(data);
        if(head==NULL)
        {
            head=a;
            size++;
        }
        else
        {
            a->next=head;
            head=a;
            size++;
        }
    }
    void insertAtAnyIndex(int data,int index)
    {
        if(index>=size)
        return;
        node *a = head;
        int cur_indx=0;
        while(cur_indx!=index-1)
        {
            a=a->next;
            cur_indx++;
        }
        node *b =createNewNode(data);
        b->next=a->next;
        a->next=b;

    }
    void travers()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
            size++;
        }
        cout<<endl;
    }

    int getValue(int index)
    {
        if(index>=size)
        {
            return -1;
        }
        int cur_ind=0;
        node *a = head;
        while(cur_ind!=index)
        {
            a=a->next;
            cur_ind++;
        }
        return a->data;
    }
    void deletAtHead()
    {
        
       if(head->data==0)
       {
         size--;
        node *a = head;
        head=a->next;
        delete a;
       }
    }

    void deleteZero()
    {
        node *a =head;
        
        while(a!=NULL)
        {
           
           if(a->next->data==0)
            {
                node *b = a->next;
                a->next=b->next;
                delete b;
                a=a->next;
                size--;
            }
            a=a->next;
        }
    }

    void getOddNumSum()
    {
        node *a =head;
        int sum=0;
        bool flag=true;
        while(a!=NULL)
        {
            if(a->data%2!=0)
            {
                sum+=a->data;
              a=a->next;
              flag=false;
            }
            if(flag)
            {
                a=a->next;
            }
        }
        cout<<"sum of odd dig: "<<sum<<endl;
    }
    void getOddIndexSum()
    {
        node *a = head;
        int sum=0;
        while(a!=NULL)
        {
            sum+=a->data;
            a=a->next->next;
        }
        cout<<"odd index sum: "<<sum<<endl;
    }

    bool hasDuplicate()
    {
        node *a = head;
        node *b=head;
        int a_indx=0,b_indx=0;
        while(a!=NULL)
        {
            while(b!=NULL )
            {
                if(a->data==b->data && a_indx!=b_indx)
                {
                    return true;
                    break;
                }
                b_indx++;
                b=b->next;
            }
            b_indx=0;
            a=a->next;
        }
        return false;
    }
};
int main()
{
    linkedList l;
    l.insertHead(5);
    l.insertHead(0);
    l.insertHead(0);
    l.insertAtAnyIndex(55,1);
    l.travers();

    //cout<<l.getValue(1);
    l.deletAtHead();
    l.deleteZero();
    l.getOddNumSum();
    l.getOddIndexSum();
    l.travers();

    linkedList l2;
    l2.insertHead(5);
    l2.insertHead(3);
    l2.insertHead(6);
    l2.insertHead(2);
    l2.insertHead(3);
    cout<<l2.hasDuplicate();

}
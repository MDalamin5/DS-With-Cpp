#include<bits/stdc++.h>
using namespace std;

class Array{
private:
    int *arr;
    int cap;
    int sz;

    void updateCapacity()
{
    cap=cap*2;
    int *temp = new int[cap];
    for(int i=0;i<sz;i++)
    {
        temp[i]=arr[i];
    }
    delete arr;
    arr=temp;
}
public:
Array()
{
    arr=new int[1];
    cap=1;
    sz=0;
}
void Push_back(int x)
{
    if(sz==cap)
    updateCapacity();
    arr[sz++]=x;  
}
void pirntArr()
{
    for(int i=0;i<sz;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int getSize()
{
    return sz;
}
void push_insert(int pos,int elements)
{
    if(sz==cap)
    updateCapacity();
    
    for(int i=sz-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=elements;
    sz++;

}
int getElements(int indx)
{
    if(indx>=sz)
    {
        cout<<"Error: Array index out_of_bound"<<"\n";
        return -1;
    }
    else
    return arr[indx];
}

void Pop_back()
{
    if(sz==0)
    {
        cout<<"Error: Array out of bound index\n";
    }
    sz--;
}
void Erase(int pos)
{
    if(pos>=sz)
        cout<<"Error: Array out of bound index\n";
    for(int i=pos;i<sz;i++)    
    {
        arr[i]=arr[i+1];
    }
    sz--;
}

};
int main()
{
    Array a;
    a.Push_back(4);
    a.Push_back(5);
    a.Push_back(44);
    a.Push_back(5);
    a.Push_back(7);
    a.Push_back(11);
    a.Push_back(17);
    a.push_insert(3,400);
    a.pirntArr();
    cout<<"\n"<<a.getSize()<<"\n";
    //a.Pop_back();
    a.Erase(2);
    for(int i=0;i<a.getSize();i++)
    {
        cout<<"\n"<<a.getElements(i);
    }

}
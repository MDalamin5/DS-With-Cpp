#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 500
class Queue
{
 public:
    int arr[MAX_SIZE];
    int l,r,size;
    Queue()
    {
        l=0;
        r=-1;
        size=0;
    }
    void enQueue(int data)
    {
        r++;
        arr[r]=data;
    }
};
int main()
{
    
    
}
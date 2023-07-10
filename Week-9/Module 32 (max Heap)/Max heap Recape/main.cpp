#include <bits/stdc++.h>
using namespace std;
class maxHeap
{
public:
    vector<int> nodes;
    maxHeap()
    {
    }
    void insert(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size()-1);
    }
    void up_heapify(int indx)
    {
        while(indx>0 && nodes[indx]> nodes[(indx-1)/2])
        {
            swap(nodes[indx],nodes[(indx-1)/2]);
            indx = (indx-1)/2;
        }
    }
    void pirntHeap()
    {
        for(int i=0;i<nodes.size();i++)
        {
            cout<<nodes[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    maxHeap h;
    h.insert(10);
    h.insert(5);
    h.insert(1);
    h.insert(4);
    h.insert(9);
    h.pirntHeap();
}
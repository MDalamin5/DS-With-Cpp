#include <bits/stdc++.h>
using namespace std;
class MaxHeap
{
public:
    vector<int> nodes;
    MaxHeap()
    {
    }
    void insertData(int data)
    {
        nodes.push_back(data);
        up_heapify(nodes.size() - 1);
    }
    void up_heapify(int ind)
    {
        // O(log n)
        while (nodes.size() > 0 && nodes[ind] > nodes[(ind - 1) / 2])
        {
            swap(nodes[ind], nodes[(ind - 1) / 2]);
            ind = (ind - 1) / 2;
        }
    }

    void printHeap()
    {
        for (int i = 0; i < nodes.size(); i++)
        {
            cout << nodes[i] << " ";
        }
        cout << endl;
    }

    // Deleting Part
    void deleteData(int indx)
    {
        if (indx >= nodes.size())
            return;
        swap(nodes[indx], nodes[nodes.size() - 1]);
        nodes.pop_back();
        downHeapify(indx);
    }
    void downHeapify(int indx)
    {
        int largest = indx;
        int l = 2 * indx + 1;
        int r = 2 * indx + 2;
        while (1)
        {
            if (l < nodes.size() && nodes[l] > nodes[largest])
            {
                largest = l;
            }
            if (r < nodes.size() && nodes[r] > nodes[largest])
            {
                largest = r;
            }
            if (indx == largest)
                break;

            swap(nodes[indx], nodes[largest]);
            indx = largest;
        }
    }

    int getMax()
    {
        if(nodes.size()==0)
        {
            cout<<"Its an empty Heap"<<endl;
            return -1;
        }
        return nodes[0];
    }
    int ExtractMax()
    {
        
        int data = nodes[0];
        deleteData(0);
        return data;

    }
    
    void build_form_arra(vector<int>&a)
    {
        nodes=a;
        int n = nodes.size();
        int last_non_leaf = n/2 -1;
        for(int i=last_non_leaf;i>=0;i--)
        {
            downHeapify(i);
        }
    }
};
int main()
{
    
    MaxHeap heap;
    cout<<"HEllo";
    vector<int>a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(10);
    a.push_back(9);
    a.push_back(8);
    a.push_back(7);
    heap.build_form_arra(a);
    heap.printHeap();
}
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
};
int main()
{
    MaxHeap heap;
    heap.insertData(4);
    heap.insertData(7);
    heap.insertData(9);
    heap.insertData(1);
    heap.insertData(10);
    heap.insertData(20);
    heap.insertData(30);
    cout<<"Max Elements: "<<heap.getMax()<<endl;
   // heap.printHeap();
    cout<<"Max Elements: "<<heap.ExtractMax()<<endl;
    heap.printHeap();
    cout<<"Max Elements: "<<heap.ExtractMax()<<endl;
}
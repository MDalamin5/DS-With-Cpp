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
};
int main()
{
    MaxHeap heap;
    heap.insertData(6);
    heap.insertData(7);
    heap.insertData(2);
    heap.insertData(10);
    heap.printHeap();
}
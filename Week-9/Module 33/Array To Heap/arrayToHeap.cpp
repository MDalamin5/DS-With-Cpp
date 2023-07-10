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
        // O(1)
        nodes.push_back(x);
        up_heapify(nodes.size() - 1);
    }
    void up_heapify(int indx)
    {
        // O(logn)
        while (indx > 0 && nodes[indx] > nodes[(indx - 1) / 2])
        {
            swap(nodes[indx], nodes[(indx - 1) / 2]);
            indx = (indx - 1) / 2;
        }
    }
    void pirntHeap()
    {
        // O(1)
        for (int i = 0; i < nodes.size(); i++)
        {
            cout << nodes[i] << " ";
        }
        cout << endl;
    }
    void Delete(int indx)
    {
        if(indx >= nodes.size())
        return;

        swap(nodes[nodes.size() - 1], nodes[indx]);
        nodes.pop_back();
        down_heapify(indx);
    }
    void down_heapify(int indx)
    {
        // O(logn)
        while (1)
        {
            int largest = indx;
            int l = 2 * indx + 1;
            int r = 2 * indx + 2;
            if (l < nodes.size() && nodes[largest] < nodes[l])
            {
                largest = l;
            }
            if (r < nodes.size() && nodes[largest] < nodes[r])
            {
                largest = r;
            }
            if (largest == indx)
            {
                break;
            }
            swap(nodes[indx], nodes[largest]);
            indx = largest;
        }
    }
    int getMax()
    {
        if(nodes.empty())
        {
            cout<<"Heap is Emapty!!"<<endl;
            return -1;
        }
        return nodes[0];
    }
    int ExtractMax()
    {
        // O(logn)
        if(nodes.empty())
        {
            cout<<"Heap is Emapty!!"<<endl;
            return -1;
        }
        int ret = nodes[0];
        Delete(0);
        return ret;

    }
    void build_from_array(vector<int> &a)
    {
        nodes =a;
        int n= nodes.size();
        int last_non_leaf = n/2 -1;
        for( int  i = last_non_leaf ;i>=0;i--)
        {
            down_heapify(i);
        }
    }
};
int main()
{
    maxHeap h;
    vector<int>a = {1,2,3,4,10,9,8,7};
    h.build_from_array(a);
    h.pirntHeap();
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st;
    // O(logn)
    st.insert(5);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(4);
    // O(n)
    cout << "Printing Set " << endl;
    for (auto i : st)
        cout << i << " ";

    cout << endl;
    cout << "Set size: ";
    cout << st.size() << endl;
    cout << "Printing Set " << endl;
    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    st.erase(5);
    // O(logn)
    cout << "Printing Set erase after 5 " << endl;
    for (auto i : st)
        cout << i << " ";

    cout << endl;

    // Fing O(log(n))
    if (st.find(7) != st.end())
    {
        cout << "7 is Found" << endl;
    }
    else
    {
        cout << "7 Not found" << endl;
    }

    if (st.find(5) != st.end())
    {
        cout << "5 is Found" << endl;
    }
    else
    {
        cout << "5 Not found" << endl;
    }
    return 0;
}
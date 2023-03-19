#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    st.push(5);
    st.push(10);
    st.push(3);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    
}
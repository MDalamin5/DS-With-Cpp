#include<bits/stdc++.h>
using namespace std;
class Node
{
    float flo_num;
    char ch;
    Node* next;

    Node(float flo_num, char ch)
    {
        this->flo_num=flo_num;
        this->ch=ch;
        this->next=NULL;
    }
};
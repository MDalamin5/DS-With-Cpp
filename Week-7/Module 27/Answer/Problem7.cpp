<<<<<<< HEAD

#include<bits/stdc++.h>

using namespace std;

void deleteValue(list<int>& l, int value) {
    auto it = find(l.begin(), l.end(), value);
    
    if (it != l.end()) {
        l.erase(it);
    }
}

int main() {
    
    list<int> l;
    l.push_back(7);
    l.push_back(3);
    l.push_back(8);
    l.push_back(4);
    l.push_back(5);
    l.push_back(4);
    
   
    deleteValue(l, 4);
    for (int num : l) {
        cout << num << " ";
    }
    
    return 0;
}
=======
#include<bits/stdc++.h>
using namespace std;
int main()
{
cout<<"no 7 is loading";
}
>>>>>>> 4255f896da04ecb761913e86d73fd8ab1b3e7447

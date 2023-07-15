#include<bits/stdc++.h>
using namespace std;

vector<int> findPreviousIndices(vector<string>& strr) {
    vector<int> previousIndices;
    map<string, int> lastIndexMap;

    for (string& str : strr) {
        if (lastIndexMap.find(str) == lastIndexMap.end()) {
            
            previousIndices.push_back(-1);
        } else {
            
            previousIndices.push_back(lastIndexMap[str]);
        }


        lastIndexMap[str] = previousIndices.size() - 1;
    }

    return previousIndices;
}

int main() {
    int n;
    cin >> n;

    vector<string> strings(n);
    for (int i = 0; i < n; i++) {
        cin >> strings[i];
    }

    vector<int> previousIndices = findPreviousIndices(strings);

    
    for (int index : previousIndices) {
        cout << index << endl;
    }

    return 0;
}

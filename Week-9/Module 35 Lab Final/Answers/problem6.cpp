#include<bits/stdc++.h>

using namespace std;

void sortLadderArray(int arr[], int n) {
    deque<int> dq;
    
    
    dq.push_back(arr[0]);
    
    
    for(int i=1; i<n; i++) {
        
        if(arr[i] <= dq.front()) {
            dq.push_front(arr[i]);
        }
        
        else {
            dq.push_back(arr[i]);
        }
    }
    
    
    for(int i=0; i<n; i++) {
        
        if(dq.front() <= dq.back()) {
            arr[i] = dq.front();
            dq.pop_front();
        }
        
        else {
            arr[i] = dq.back();
            dq.pop_back();
        }
    }
}

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    sortLadderArray(arr, n);
    
    cout << "Sorted ladder array: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}

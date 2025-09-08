#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a, vector<int> &b,vector<int> &res) {
    int i = 0, j = 0, k = 0;
    int n1 = a.size(), n2 = b.size();
    res.clear();
    
    
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            res.push_back(a[i++]);
        } 
        else { // Handles a[i] >= b[j] properly
           res.push_back(b[j++]);
        }
    }
    
    // Copy remaining elements
    while (i < n1) {
        res.push_back(a[i++]);
    }
    while (j < n2) {
        res.push_back(b[j++]);
    }
}

void mergeSort(vector<int> &a) {
    int n = a.size();
    if(n <=1) return;
    int mid = n/2;
  
    vector<int> left(a.begin(), a.begin() + mid);
    vector<int> right(a.begin() + mid, a.end());
    mergeSort(left);
    mergeSort(right);
    merge(left, right, a);
}

int main() {
    vector<int> a = {1, 2, 8,685,8,9,4,0,-25};
    int n1 = a.size();
  
    mergeSort(a );
     for (int ap = 0; ap < n1 ; ap++) {
        cout << a[ap] << " ";
    }
    cout << endl;
    return 0;
}

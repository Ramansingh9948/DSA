#include<iostream>
#include<vector>
#include<climits>

using namespace std; 
void SelectionSort(vector<int>& arr) {
    int n = arr.size();
    for(int i = 0; i< n-1; i++) {
        int  minNumber = INT_MAX, minIdx = i;
        for(int j = i; j<n; j++) {
            if(arr[j] < minNumber) {
                minNumber = arr[j];
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    for(int i =0; i<n ; i++) cout<<arr[i]<<" ";
}

int main() {
    vector<int> v;
    int n;
    cin>>n;
    for(int i =0; i< n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }

    SelectionSort(v);
    return 0;

}
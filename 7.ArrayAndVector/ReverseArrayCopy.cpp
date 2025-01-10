#include<iostream>
#include<vector>
using namespace std;
void Display (vector<int> arr) {
     for(int i = 0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
}


void reverseArray(vector<int> arr, int n) {
    vector<int> rev_arr(arr.size());
    int start = 0, end = n - 1;
    for(start; start<=end; start++) {
        rev_arr[start] = arr[end-start];
    }
    cout<<"Reversed Array: ";
   Display(rev_arr);
         

}

int main() {
    vector<int> arr;
    int i = 0;
    for(i; i<=10; i++) {
        arr.push_back(i);
    }
    cout<<endl;
     cout<<"Original Array: ";
   Display(arr);
    cout<<endl;
    reverseArray(arr, arr.size());
}
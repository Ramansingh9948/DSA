#include<iostream>
#include<vector>
using namespace std;
void InsertionSort(vector<int>& arr) {
    int n = arr.size();
    for(int i =1; i<n; i++) {
        for(int j = i; j>=1 ; j--) {
            if(arr[j] < arr[j-1]) {
                swap(arr[j] , arr[j-1]);
            }
            else {
                break;
                }
        }
    }
     for(int i =0; i<n ; i++) cout<<arr[i]<<" ";
}
int main(){
     vector<int> v;
    int n;
    cin>>n;
    for(int i =0; i< n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }

    InsertionSort(v);
    return 0;
}
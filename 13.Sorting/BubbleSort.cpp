#include<iostream>
#include<vector>
using namespace std;

int bubbleSort(vector<int>&  arr) {
    int n = arr.size();
    int count = 0;
    for(int i = 0;i < n-1; i++) {
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1]);
                count++;
            }

        }
    }
    cout<<count<<endl;
      for(int i = 0; i<6;i++) {
        cout<<arr[i]<<" ";
      }
      return 0;
}
int OptimizedBubbleSort(vector<int>&  arr) {
    int n = arr.size();
    bool flag = true;
    for(int i = 0;i < n-1; i++) {
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1]);
                flag = false;
            }

        }
        if(flag == true) break;
    }
    if(flag == true) {
        cout<<"Optimized Bubble Sort: ";
        for(int i = 0; i<6;i++) {
        cout<<arr[i]<<" ";
      }
    }

    return 0;
}
int main(){
    vector<int> v(6);
    for(int i = 0; i<6;i++) {
        cin>>v[i];
    }
    cout<<endl;
    bubbleSort(v);
    cout<<endl;
    OptimizedBubbleSort(v);
      
    return 0;
}

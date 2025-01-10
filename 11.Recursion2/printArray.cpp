#include<iostream>
#include<vector>
using namespace std;
void display(int arr[], int n,int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display(arr, n, idx+1);
}
void display2(vector<int> arr, int idx){
    int n = arr.size();
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display2(arr, idx+1);
}
int main()  {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    vector<int> a = {1,2,3,4,5,6,7,8,9,10};
    int n  = sizeof(arr)/sizeof(arr[0]);
    display(arr, n, 0);
}                                                             
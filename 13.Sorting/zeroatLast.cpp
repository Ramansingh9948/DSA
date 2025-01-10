#include<iostream>
#include<vector>
using namespace std; 
void sortZero(vector<int> arr) {
    int n = arr.size();
    for(int i = 0; i< n-1; i++) {
        for(int j = 0; j< n-1-i; j++) {
            if(arr[j] == 0){
                swap(arr[j], arr[j+1]);

            }
        }
    }
    for(int i = 0; i<n ; i++) cout<<arr[i]<<" ";
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

    sortZero(v);
    return 0;

}
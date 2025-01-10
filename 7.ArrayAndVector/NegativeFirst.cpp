#include<iostream>
#include<vector>
using namespace std;
void Display(vector<int> arr) {
    cout<<endl;
    for(int i =0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    }
}
void sortZeroAndOne(vector<int> &arr, int n) {
    int i =0, j = n-1;
    while (i<j) 
    {
        if(arr[i] > 0 && arr[j] <0) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if (arr[i] < 0) i++;
        else j--;
    }
    
}

int main() {
    vector<int> arr;
    arr = {2,-9, 8, -6, -78,4};
    int n = arr.size();
    Display(arr);
    sortZeroAndOne(arr, n);
    Display(arr);
}
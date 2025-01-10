#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr;
   
    arr.push_back(8);
    arr.push_back(5);
    arr.push_back(10);
    arr.push_back(1);

    for(int i=0; i<arr.size();i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //sorting the vector
    sort(arr.begin(), arr.end());
      for(int i=0; i<arr.size();i++) {
        cout<<arr[i]<<" ";
    }
}
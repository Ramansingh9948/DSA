#include<iostream>
#include<vector>
using namespace std;

void change(vector<int> &a) { // with ampersand we can send the 
//address to the fxn in vectors but in case of passing the values 
//we should not use ampersand

    a[0] = 10;

     for(int i=0; i<a.size();i++) {
        cout<<a[i]<<" ";
    }
}
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
    change(arr);
    cout<<endl;
     for(int i=0; i<arr.size();i++) {
        cout<<arr[i]<<" ";
    }
}
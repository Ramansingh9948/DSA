#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    int i =0;
    arr.push_back(i++);
    arr.push_back(i++);
    arr.push_back(i++);
    arr.push_back(i++);
    arr.push_back(i++);
    arr.push_back(i++);
    arr.push_back(i++);
    arr.push_back(i++);
    for(int j =0; j<arr.size(); j++) cout<<arr[j]<<" ";
    cout<<endl;
    arr.pop_back();
    arr.pop_back();
    arr.pop_back();
    arr.pop_back();
    arr.pop_back();
    cout<<arr.capacity();
    cout<<endl;
    for(int j =0; j<arr.size(); j++) cout<<arr[j]<<" ";
    cout<<endl;
    cout<<arr.capacity();

}
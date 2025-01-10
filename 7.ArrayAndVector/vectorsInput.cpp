#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    for(int i = 0; i<5;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    for(int i = 0; i<5;i++){
        cout<<arr[i]<<" ";
    }

    

    

}
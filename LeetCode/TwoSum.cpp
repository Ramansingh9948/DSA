#include<iostream>
#include<vector>
using namespace std;
int main() {
    int x;
    cout<<"Enter the Target Value: ";
    cin>>x;
    vector<int> arr;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the array Elements" <<endl;
    for (size_t i = 0; i < n; i++)
    {
        int y;
        cout<<"Enter Element "<<i<<": ";
        cin>>y;
        arr.push_back(y);
    }

    for (size_t i = 0; i < arr.size()-1; i++)
    {
        for (size_t j = i+1; j < arr.size(); j++) {
            if(arr[i]+arr[j] == x) {
                cout<<"("<<i<<","<<j<<") ";
            }
        }
    }
    
    
}
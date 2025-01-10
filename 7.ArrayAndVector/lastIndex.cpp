#include<iostream>
#include<vector>
using namespace std;
void lastIndexPrint(vector<int> &arr) {
    int n = arr.size();
    cout<<"Last Element:- "<<arr[n-1]<<endl;
}
//Last occurence of an element in an Array
void lastOccurence(vector<int> &arr, int target ) {
    int n = arr.size();
    int last = -1;
    for(int i = 0; i< n; i++) {
        if(arr[i] == target) {
            last = i; 
        }

    }
    for( int i = 0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    };
    cout<<endl;
    cout<<"Last Index is "<<last<<endl;
    
}

void efficientWay(vector<int> &arr, int target) {
      int n = arr.size();
    int last = -1;
    for(int i = n-1; i>=0; i--) {
        if(arr[i] == target) {
            last = i; 
            break;
        }

    }
    for( int i = 0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    };
    cout<<endl;
    cout<<"Last Index is "<<last<<endl;
}
int main() {
    vector<int> a;
    int i =0;
   
        a.push_back(4);
        a.push_back(2);
        a.push_back(9);
        a.push_back(7);
        a.push_back(9);
        a.push_back(5);
        
    
    int target= 9;
    // lastOccurence(a, target);
    efficientWay(a, target);
   


}
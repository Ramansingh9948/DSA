#include<iostream>
using namespace std;
int main() {
    int n, temp = 0, target;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    int arr[n], i, sum=0;
    cout<<"Enter the elements of an array : "<<endl;
    for ( i = 0; i <=n-1; i++) {
        cin>>arr[i]; 
    }
           cout<<"Enter the target element of array"<<endl;
    cin>>target;
 
    for ( i = 0; i <=n-1 ; i++) {
        if(arr[i] == target) {
            temp +=1;
        }
    } 
    if(temp) cout<<"Target element is present in array "<< temp<<" times"<<endl;
    else cout<<"Target element is not present in the array"<<endl;
    return 0;
}

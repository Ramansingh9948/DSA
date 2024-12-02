#include<iostream>
using namespace std;
int main() {

    int arr[6], i;
    cout<<"Enter the elements of an array : "<<endl;
    for ( i = 0; i <=5; i++) {
        cin>>arr[i];
    }

    for ( i = 0; i <=5 ; i++) {
        cout<<arr[i];
    }
    return 0;
}

#include<iostream>
using namespace std;
int main() {

    int arr[6], i, sum=0;
    cout<<"Enter the elements of an array : "<<endl;
    for ( i = 0; i <=5; i++) {
        cin>>arr[i]; 
    }
 
    for ( i = 0; i <=5 ; i++) {
        sum = sum + arr[i];
    } 
    cout<<"Sum : "<<sum<<endl;
    return 0;
}

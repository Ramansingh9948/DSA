#include<iostream>
using namespace std;
int main() {
    int n, max, max2;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    int arr[n], i, sum=0;
    cout<<"Enter the elements of an array : "<<endl;
    for ( i = 0; i <=n-1; i++) {
        cin>>arr[i]; 
    }
max =arr[0];
        for ( i = 1; i <=n-1; i++) {
            if(max < arr[i]) {
                max2 = max;
                max = arr[i];
            }
    }
cout<<"Largest element is : "<<max<<endl;
cout<<"Second Largest element is : "<<max2<<endl;

    return 0;
}

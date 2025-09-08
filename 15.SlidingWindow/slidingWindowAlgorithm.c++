#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n =sizeof(arr)/sizeof(arr[0]);
    int prevSum = 0;
    int k =4
    ;
    for(int i=0;i<k;i++) {
        prevSum+=arr[i];
    }
    int i =1, j=k;
    int maxSum = prevSum;
    while(j<n) {
        prevSum = prevSum + arr[j]-arr[i-1];
        maxSum = max(maxSum, prevSum);
        i++,j++;
    }
    cout<<maxSum;
}
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int nums[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(nums)/sizeof(nums[0]);
    int k =3;
    int maxSum = 0;
    for(int i =0; i<=n-k; i++){
        int sum =0;
        for(int j = i; j<i+k; j++) {
            sum += nums[j];
        }
       maxSum = max(maxSum, sum);
    }
    cout<<maxSum;
    


}
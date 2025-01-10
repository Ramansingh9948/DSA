// #include<iostream>
// using namespace std;
// int main() {
//     int nums[] = {0,1,2,3,4,6,7,9};
//     int i;
//     int n = sizeof(nums)/sizeof(nums[0]);
//     for( i =0; i<n; i++) {
//         if(nums[i]!= i) {
//             cout<<i<<endl;
//             break;
//         }
      
//     }
//     return 0;
  
// }

#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> nums = {1,2,3,5,6,7};
    int n = nums.size();
    int lowNumber = nums[0];
    int low =  0, high = n-1;
    int ans =-1;
    while(low<=high) {
        int mid = low +(high-low)/2;
        if(nums[mid] == lowNumber+ mid) {
            low = mid+1;
        }
        else {
            //returning index
            ans = mid;
            high = mid-1;
        }
    }
    cout<<ans<<endl;

}
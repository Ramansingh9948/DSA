#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 2, 2, 3, 3, 3, 4};
   
    int target = 3;

     int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans;
    int lo = 0, high = n - 1;
    int first = -1, last = -1;

    while (lo <= high) {
        int mid = lo + (high - lo) / 2;
        if (arr[mid] == target) {
            first = mid;  // Update first occurrence
            high = mid - 1;  // Continue searching in the left half
        } else if (arr[mid] < target) {
            lo = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Find the last occurrence
    lo = 0, high = n - 1;
    while (lo <= high) {
        int mid = lo + (high - lo) / 2;
        if (arr[mid] == target) {
            last = mid;  // Update last occurrence
            lo = mid + 1;  // Continue searching in the right half
        } else if (arr[mid] < target) {
            lo = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Store the results
    if (first != -1 && last != -1) {
        ans.push_back(first);
        ans.push_back(last);
    } else {
        ans.push_back(-1);
        ans.push_back(-1);
    }

    // Print the result
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}

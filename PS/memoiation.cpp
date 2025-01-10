#include<iostream>
#include<vector>
using namespace std;
int fibonacii(int n, vector<int> &ans) {
    if(n==0||n==1||n==2) return 1;
        if(ans[n]!=-1)
        ans[n]=fibonacii(n-1, ans) + fibonacii(n-2, ans);
    
    return ans[n];
}
int main()
 {
    int n;
    cin>>n;
    vector<int> ans(n+1, -1);

    cout<<fibonacii(n, ans);
    
 }

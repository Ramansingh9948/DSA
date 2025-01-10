#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sq = sqrt(n);
    vector<int> DAT(n+1, 1);
    for(int i =2; i<=sq; i++) {
        int m = 2*i;
        while(m<=n) {
            DAT[i] = 0;
            m+=i;
        }
    }
    for(int i =2; i<=n; i++) {
        if(DAT[i] == 1) {
            cout<<i<<" ";
        }
    }
    
}
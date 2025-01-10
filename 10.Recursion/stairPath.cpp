#include <iostream>
using namespace std;
int climbStairs(int n) {
     if(n == 1) return 1;
        else if(n ==2) return 2;
        else return climbStairs(n-1)+climbStairs(n-2);
}

int main(){
    int a;
    cin>>a;
   
    // a-> base
    // b-> exponent
   cout<<climbStairs(a)<<endl;
}
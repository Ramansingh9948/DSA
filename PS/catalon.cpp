#include<iostream>
using namespace std;
int p2Catalon(int n) {
    
}
int catalon(int n) {
   int  sum =0;
    if (n == 0 || n==1)
    return 1;
    else {
        for (int i = 0; i < n; i++) {
            sum = sum + catalon(i) * catalon(n - i - 1);
        }
    }
    return sum;
}
int main() {
    int n;
    cin>>n;
    cout<<catalon(n);
}
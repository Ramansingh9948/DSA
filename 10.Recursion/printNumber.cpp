#include <iostream>
using namespace std;
void printNto1(int n) {
    if(n == 0) return;
    else {
        cout<<n<<" ";
        printNto1(n-1);
    }
}
void print1toN(int n) {
    int i=1;
    while(i<=n) {
        cout<<i<<" ";
        i++;
    }
}
void printAfterCall(int n) {
    if(n ==0) return;
    else{
        printAfterCall(n-1);
        cout<<n<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    printNto1(n);
    cout<<endl;
    print1toN(n);
    cout<<endl;
    printAfterCall(n);
    return 0;
}
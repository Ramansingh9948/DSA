#include<iostream>
using namespace std;
int main() {
    int  n, count=1,sum=0;
    cin>>n;
    while ( n!=0) {
        sum = sum+ n%10;
        n /=10;
    }
    cout<<sum<<endl;
    
}
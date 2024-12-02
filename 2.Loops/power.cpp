#include <iostream>
using namespace std;
int main() {
    int i, a, b;
    float product=1;
    cout<<"Enter number and power : ";
    cin>>a>>b;
    b = -b;
   for(i=1; i<=b; i++){
    if(a == 0) cout<<0<<endl;
    else {
        product*=a;
    }
   }
   cout<<(1/product)<<endl;
}
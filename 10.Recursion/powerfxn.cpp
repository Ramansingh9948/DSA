#include <iostream>
using namespace std;
int pow(int a, int b) {
    if (b==0) return 1;
    else return a*pow(a,b-1);
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    // a-> base
    // b-> exponent
   cout<<pow(a,b)<<endl;
}
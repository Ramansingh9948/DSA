#include <iostream>
using namespace std;
int main() {
    int i, n, product=1;
    cout<<"Enter number : ";
    cin>>n;
   for(i=1; i<=n; i++) product*=i;
   cout<<product<<endl;
}
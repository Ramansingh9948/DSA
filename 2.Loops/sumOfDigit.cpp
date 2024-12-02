#include <iostream>
using namespace std;
int main() {
    int i, n, sum=0;
    cout<<"Enter number : ";
    cin>>n;
   while (n)
   {
    sum = sum + n%10;
    n/=10;
   }
   cout<<sum;
}
#include <iostream>
using namespace std;
int sum(int x) {
    int lastDigit , firstDigit ;
    lastDigit = x%10;
    while(x>10) {
        
            x/=10;
        }
        firstDigit = x;
        // int su = *firstDigit + (*lastDigit);
        // return su;
        return firstDigit + lastDigit;

    }
int main()
{
    int a, b;
    cout << "Enter a : ";
    cin >> a;
     int x = sum(a);
    cout<<"Sum of last and first digit is "<<x<<endl;
    return 0;
}
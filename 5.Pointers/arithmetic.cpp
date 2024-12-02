#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a and b : ";
    cin >> a>>b;
    cout<<"Original Values are ";
    cout<<"a = "<<a << " b = "<<b<< endl;
    int *ptr = &a;
    cout<<ptr<<endl;
     ptr++;
    cout<<ptr<<endl;
    return 0;
}
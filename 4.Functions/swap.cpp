#include <iostream>
using namespace std;
void swap(int x, int y) {
    x =x+y;
    y = x-y;
    x = x-y;
    cout<<"Swapped Values are ";
    cout<<"a = "<<x << " b = "<<y<<endl;

}

int main()
{
    int a, b;
    cout << "Enter a and b : ";
    cin >> a>>b;
    cout<<"Original Values are ";
    cout<<"a = "<<a << " b = "<<b<< endl;


    swap(a,b);
    
    return 0;
}
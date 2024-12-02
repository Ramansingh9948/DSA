#include <iostream>
using namespace std;
void swap(int *x, int *y) {
   int temp = *x;
   *x = *y;
   *y = temp;
    cout<<"Swapped Values are ";
    cout<<"a = "<<*x << " b = "<<*y<<endl;
}
int main()
{
    int a, b;
    cout << "Enter a and b : ";
    cin >> a>>b;
    cout<<"Original Values are ";
    cout<<"a = "<<a << " b = "<<b<< endl;
    swap(&a,&b);
    return 0;
}
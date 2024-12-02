#include <iostream>
using namespace std;
int main()
{
    int i, n, reverse = 0;
    cout << "Enter number : ";
    cin >> n;
    while (n)
    {
        reverse *= 10;
        reverse += n % 10;
        n /= 10;
    }
    cout << reverse << endl;
}
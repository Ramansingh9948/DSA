#include <iostream>
using namespace std;
int main()
{
    int i, j;
    char n;
    cout << "Enter + for Addition" << endl
         << "- for Subtraction" << endl
         << "* for Multiplication" << endl
         << "/ for Division" << endl;
    cin >> n;
    cout << "Enter two numbers for Arithmetic Operation" << endl;
    cin >> i;
    cin >> j;

    switch (n)
    {
    case '+':
        cout << i + j << endl;
        break;
    case '-':
        cout << i - j << endl;
        break;
    case '*':
        cout << i * j << endl;
        break;
    case '/':
        cout << i / j << endl;
        break;
    default:
        cout << i + j << endl;
    }
}

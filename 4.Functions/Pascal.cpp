#include <iostream>
using namespace std;
int fact(int z)
{
    if (z < 0)
        return 0;
    if (z == 0 || z == 1)
        return 1;
    return z * fact(z - 1);
}
int combination(int x, int y)
{
    if (y > x || y < 0)
        return 0;
    return fact(x) / (fact(y) * fact(x - y));
}
int main()
{
    int a, b;
    cout << "Enter n : ";
    cin >> a;

    // int result = combination(a, b);
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}
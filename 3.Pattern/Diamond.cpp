#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no of rows" << endl;
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n / 2)
        {

            for (int j = 1; j <= n - i; j++)
            {
                cout << " ";
            }
            for (int k = 1; k <= 2 * i - 1; k++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int l = 1; l <= n - i; l++)
            {
                cout << " ";
            }
            for (int m = 1; m >= 2 * i - 1; m++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENter a number : " << endl;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {   
            count++;
        }
    }
    if (count == 1)
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not a Prime Number" << endl;
    }
}
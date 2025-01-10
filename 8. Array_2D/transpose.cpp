#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;
    int arr[r][c];
    int trans[c][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            // cout<<arr[i][j]<<" ";
            trans[i][j] = arr[i][j];
        }
    }

    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            cout << trans[i][j] << " ";
        }
        for (int j = 0; j < c; j++)
        {
            for (int i = 0; i < r; i++)
            {
                trans[i][j] = arr[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
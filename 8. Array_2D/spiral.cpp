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
    // Spiral
    int minr = 0, minc = 0;
    int maxr = r - 1, maxc = c - 1;
    while (minr <= maxr && minc <= maxc)
    {
        for (int i = minc; i <= maxc; i++)
        {
            cout << arr[minr][i] << " ";
        }
        minr++;
        if (minr > maxr || minc > maxc)
            break;
        for (int i = minr; i <= maxr; i++)
        {
            cout << arr[i][maxc] << " ";
        }
        maxc--;
        if (minr > maxr || minc > maxc)
            break;

        for (int i = maxc; i >= minc; i--)
        {
            cout << arr[maxr][i] << " ";
        }
        maxr--;
        if (minr > maxr || minc > maxc)
            break;

        for (int i = maxr; i >= minr; i--)
        {
            cout << arr[i][minc] << " ";
        }
        minc++;
        if (minr > maxr || minc > maxc)
            break;
    }
}

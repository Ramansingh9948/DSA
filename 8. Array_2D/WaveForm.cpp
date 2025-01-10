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
    //wavePrint
    for (int i = 0; i < r; i++) {
        if(i%2==0) {
            for(int j = 0; j<c; j++) {
                cout << arr[i][j] << " ";
            }
        }else {
             for(int j =c-1; j>=0; j--) {
                cout << arr[i][j] << " ";
            }
        }
    }
}
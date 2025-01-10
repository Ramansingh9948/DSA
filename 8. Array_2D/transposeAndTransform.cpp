#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the number of rows: ";
    cin >> r;
    c=r;
 
    int arr[r][c];
    
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
    //Transform in a same Matrix
    //Traverse either in the upper half matrix or lower half matrix
       for (int i = 0; i < r; i++)
    {
        for (int j = i+1; j < c; j++)
        {
            
            if(i!=j) swap(arr[i][j], arr[j][i]);
            else continue;
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
   

    return 0;
}
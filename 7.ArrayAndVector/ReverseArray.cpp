#include <iostream>
#include <vector>
using namespace std;
void Display(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
void swap(int &start, int &end)
{
    int temp = start;
    start = end;
    end = temp;
}
void reversePartOfArray(vector<int> &arr, int start, int end)
{
    for (start, end; start < end; start++, end--)
    {
        swap(arr[start], arr[end]);
       
    }
     cout << endl;
        cout << "Reverse Part ofArray: ";
        Display(arr);
}
void reverseArray(vector<int> &arr, int n)
{
    int start = 0, end = n - 1;
    // while (start < end)
    // {
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }
    for (start, end; start < end; start++, end--)
    {
        swap(arr[start], arr[end]);
    }
    cout << endl;
    cout << "Reverse Array: ";
    Display(arr);
}

int main()
{
    vector<int> arr;
    int i = 0;
    for (i; i <= 10; i++)
    {
        arr.push_back(i);
    }
    cout << endl;
    cout << "Original Array: ";
    Display(arr);
    cout << endl;
    reversePartOfArray(arr, 2, 8);
}
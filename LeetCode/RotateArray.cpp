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

int main()
{
    vector<int> arr;
    int i = 0;
    for (i; i <= 10; i++)
    {
        arr.push_back(i);
    }
    int start = 0;
    int end = arr.size()-1;
    int k;
    cout<<"Enter the no of element you want to rotate: ";
    cin>>k;

    cout << endl;
    cout << "Original Array: ";
    Display(arr);
    cout << endl;
    reversePartOfArray(arr, start, end-k);
    reversePartOfArray(arr, end-k+1, end);
    reversePartOfArray(arr, start, end);
    cout<<endl;
    cout<<"Rotated array: ";
    Display(arr);

}
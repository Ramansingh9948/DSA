#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& res)
{
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
            res[k++] = a[i++];
        else
            res[k++] = b[j++];
    }
    if (a.size() == i)
    {
        while (j < b.size())
        {
            res[k++] = b[j++];
        }
    }
    if (b.size() == j)
    {
        while (i < a.size())
        {
            res[k++] = a[i++];
        }
    }
    
}
int main()
{
    int arr[] = {5,3,8,9,88,65,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> a(arr, arr + n);
    
}
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    vector<int> arr, isvisited(6, 0);
    arr.push_back(-8946);
    arr.push_back(0);
    arr.push_back(5664);
    arr.push_back(5414);
    arr.push_back(-87);
    arr.push_back(1);

    int n = arr.size() - 1;
     
    int count = 0;
     for (int i=0; i <= n; i++) cout << arr[i] << " ";
    cout<<endl;  
      for (int i=0; i <= n; i++) cout << isvisited[i] << " ";
      cout<<endl;  


   for(int i=0; i<=n; i++)
    {
        int small = INT_MAX;
        int idx;
        for (int j = 0; j <= n; j++)
        {
            if (isvisited[j] == 0)
            {
                if (small > arr[j])
                {
                    small = arr[j];
                    idx = j;
                }
            }
        }
        isvisited[idx] = 1;
        arr[idx] = count;
        count++;
        
    }
    for (int i=0; i <= n; i++)
        cout << arr[i] << " ";

    return 0;
}
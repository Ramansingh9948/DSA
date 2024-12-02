#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
static bool cmp(int x, int y)
{
    if (x % 2 == 0 && y % 2 == 0)
        return x > y;
    if (x % 2 != 0 && y % 2 != 0)
        return x < y;
    if (x % 2 == 0 && y % 2 != 0)
        return true;
    else
        return false;
}
int main()
{
    vector<int> v;
    v.push_back(-3);
    v.push_back(70);
    v.push_back(66);
    v.push_back(11);
    v.push_back(9);
    v.push_back(4);
    v.push_back(18);
    v.push_back(13);
    v.push_back(14);
    v.push_back(15);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << " ";
    }
    sort(v.begin(), v.end(), cmp);
    cout << "\n";
    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << " ";
    }
    return 0;
}
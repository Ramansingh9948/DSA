#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    int num = 1;
     arr.push_back(num++); //pushback is use to push an element in the vector from front
     arr.push_back(num++);
     arr.push_back(num++);
     arr.push_back(num++);
     arr.push_back(num++);
     arr.push_back(num++);
     arr.push_back(num++);
     arr.push_back(num++);
     arr.push_back(num++);
     arr.push_back(num++);
     arr.push_back(num++);
     arr.push_back(num++);
     arr.push_back(num++);

     cout<<arr.capacity()<<endl;
//capacity is use to increase the size of vector in 2^n;
    for(int i = 0; i<arr.size(); i++) cout<<arr[i]<<" ";

}
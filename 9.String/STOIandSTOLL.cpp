#include<iostream>
#include<string>
using namespace std;
int main() {
   string array[] = {"002145", "8745","11616","1000000"};
   int n = sizeof(array)/sizeof(array[0]);
   int maxi =0;
   string maxS ;
   for (int i = 0; i < n; i++) {
    int arr = stoi(array[i]);
    if (arr > maxi) {
        maxi = arr;
        maxS = array[i];
    }
   }
   cout<<maxi+1<<" "<<maxS;
}
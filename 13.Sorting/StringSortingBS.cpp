#include<iostream>
#include<string>
using namespace std;

int bubbleSort(string arr) {
    int n = arr.length();
    string str;
    for(int j = 0; j<n; j++){
            if(arr[j]<= 'X') {
              str.push_back(arr[j]);
            }

        }
    int count = 0;
    for(int i = 0;i < str.size(); i++) {
        for(int j = 0; j<str.size()-1-i; j++){
            if(str[j] > str[j+1]) {
                swap(str[j], str[j+1]);
                count++;
            }

        }
    }
    cout<<count<<endl;
      for(int i = 0; i<6;i++) {
        cout<<str[i]<<" ";
      }
      return 0;
}

int main(){
    string v = "AAZBCXGYXZY";

    cout<<endl;
    bubbleSort(v);
    cout<<endl;
      
    return 0;
}

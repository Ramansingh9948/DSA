#include<iostream>
// #include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    cout<<str.size()<<endl;

    // for(int i =0; i<=str.size();i++) {
    //     for(int j =1; j<=str.size()-i; j++) { 
    //         cout<<str.substr(i, j)<<endl;
    //     }
    // }

    // string reverse
    // reverse(str.begin(), str.end());
    //  reverse(str.begin(), str.end()-2);

    //String Sorting
    sort(str.begin(), str.end()-1);
    cout<<str<<endl;

    // string str1="459555";
    // cout<<str1<<endl;
    // int x = stoi(str1);
    // x++;
    // cout<<x<<endl;
    // int y =46163131;
    // str1 = to_string(y);
    // str1= str1+" Raman";
    // cout<<str1;

}
#include<iostream>
#include<string>
using namespace std;
int main() {
    string str;
    // substr(index, length)
    // cout << str.substr(1) << endl;

    cout<<"Enter a String"<<endl;
    getline(cin,str);
    cout<<str.substr(str.length()/2)<<endl;
    return 0;
}
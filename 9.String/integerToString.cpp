#include<iostream>
#include<string>
using namespace std;
int main() {
    int str= 123456789;
    string s = to_string(str);
    cout<<s.length()<<endl;
    return 0;
}
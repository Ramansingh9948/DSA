#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s ="ABCDEF";
    cout<<s.size()<<endl;
    cout<<s<<endl;
    reverse(s.begin(), s.end()-3);
    cout<<s<<endl;

}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s ="ABCDEF";
    cout<<s.size()<<endl;
    cout<<s<<endl;
    reverse(s.begin()+1, s.begin()+5);
    cout<<s<<endl;

}
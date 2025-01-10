#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s = "physicswallah";
    string s1 = "phywallahsics";
    sort(s.begin(), s.end());
    sort(s1.begin(), s1.end());
    if(s1 == s) cout<<true<<endl;
    else cout<<false<<endl;

}
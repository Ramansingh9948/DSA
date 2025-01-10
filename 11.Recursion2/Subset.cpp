#include<iostream>
#include<string>
using namespace std;

void printSubset(string ans, string original) {
    if (original.empty()) {
        cout << ans << endl;
        return;
        }
    char ch = original[0];
    printSubset(ans+ch, original.substr(1));
    printSubset(ans, original.substr(1));
}

int main() {
    string str = "raman";
    // skipChar("", str,0);
    printSubset("", str);
}
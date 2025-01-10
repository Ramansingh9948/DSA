#include<iostream>
#include<string>
using namespace std;
// void skipChar(string ans, string original){
//     if( original.length() == 0) {
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = original[0];
//     if(ch == 'a') skipChar(ans, original.substr(1));
//     else{
//         skipChar(ans+ch, original.substr(1));
//     }
// }

void skipChar(string ans, string original, int idx){
    if( original.length() == idx) {
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx];
    if(ch == 'a') skipChar(ans, original, idx+1);
    else{
        skipChar(ans+ch, original, idx+1);
    }
}


int main() {
    string str = "raman singh";
    skipChar("", str,0);
}
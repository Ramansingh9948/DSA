#include<iostream>
using namespace std;

int binaryTODecimal(string &binary) {
    int n = binary.size();
    int result = 0;
    for(int i = 0; i<n; i++) {
        char ch = binary[i];
        int num = ch -'0';
        result = result + num * (1 << (n-i-1)) ;
    }
 return result;

}

string decimalToBinary(int n) {
    string result = "";
    while(n>0) {
        if(n%2==0) {
            result= '0' +result;
        }
        else {
            result = '1' + result;
        }
        n = n/2;
    }

    return result;
}

int main() {
    string str = "1011";
    int n = 13;
    cout << decimalToBinary(n) << endl;
    cout << binaryTODecimal(str) << endl;
    return 0;
}
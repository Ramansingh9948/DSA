#include<iostream>
using namespace std;
void TOH(int n, char a, char b, char c) {
    if(n ==0) return;
    TOH(n-1, a, c, b);
    cout << "Move disk " << n << " from peg " <<a << " to peg " << c <<endl;
    TOH(n-1, b, a, c);
}
int main() {
    int n;
    cin>>n;
    TOH(n, 's', 'm','d');
    return 0;
    }
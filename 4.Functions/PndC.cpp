#include <iostream>
using namespace std;

int fact(int z) {
    if (z < 0) return 0; 
    if (z == 0 || z == 1) return 1; 
    return z * fact(z - 1); 
}

int combination(int x, int y) {
    if (y > x || y < 0) return 0; 
    return fact(x) / (fact(y) * fact(x - y)); 
}
int permutation(int x, int y) {
    if (y > x || y < 0) return 0;
    else {
        return fact(x) / fact(x - y);
    }
}

int main() {
    int a, b;
    cout << "Enter n and r: ";
    cin >> a >> b;
    
    int result = combination(a, b);
    int result2 = permutation(a, b);
    if (result == 0) {
        cout << "Invalid input for combination." << endl;
    } else {
        cout << "C(" << a << ", " << b << ") = " << result << endl;
        cout << "P(" << a << ", " << b << ") = " << result2 << endl;
    }
    
    return 0;
}
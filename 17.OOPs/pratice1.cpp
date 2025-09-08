#include<iostream>
using namespace std;

class Book {
    public:
    string name;
    int price;
    int pages;

    int countBook(int p) {
        if(price < p )  return 1;
        else return 0;
    }
    bool isPresent(string n) {
        if (name == n) return true;
        else return false;
    }
};

int main() {
    Book b1, b2, b3;
    b1.name = "C++";
    b1.price = 500;
    b1.pages = 200;
    b2.name = "Java";
    b2.price = 600;
    b2.pages = 300;
    b3.name = "Python";
    b3.price = 700;
    b3.pages = 400;
    int p; cin >> p;
    cout << b1.countBook(p) + b2.countBook(p) + b3.countBook(p) << endl;
    string n; cin >> n;
    if(b1.isPresent(n) || b2.isPresent(n) || b3.isPresent(n)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
    
}
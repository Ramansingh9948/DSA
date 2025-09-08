#include<iostream>

using namespace std;

class Car{
    
  
    public:
      string Color;
    string Model;
    string Company;
        void SetColor(string Color) {  //Member Function
        this->Color = Color;
    }
    void GetColor(string Color) {    //Membr Function
        cout << Color <<endl;
    }
    int Price;
    int Year;
    
};

int main() {
    Car C1;
    C1.Model = "A4";
    C1.Company = "Audi";
    // C1.Color = "Black";
    C1.Price = 5000000;
    C1.Year = 2020;
    C1.SetColor("Black");
    C1.GetColor(C1.Color);
    return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    string str ="I am Raman Singh     .";
    stringstream ss(str);
    string word;

    while(ss>>word) cout<<word<<endl;

    return 0;
}
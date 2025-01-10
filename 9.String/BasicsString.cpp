#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
    // string s1 = "Hello";
    // //Length of a String
    // cout<<s1.size()<<endl;

    // // Push Back
    // s1.push_back(' ');
    // s1.push_back('R');
    // s1.push_back('a');
    // s1.push_back('m');
    // s1.push_back('a');
    // s1.push_back('n');

    // cout<<s1<<endl;
    // //Pop Back
    // s1.pop_back();
    // s1.pop_back();
    // s1.pop_back();
    // s1.pop_back();
    // s1.pop_back();
    // s1.pop_back();
    // cout<<s1<<endl;


    // string s1 = "Raman";
    // string s2 = "Hello ";
    // // Concatenation
    // s2 = s2+ s1;
    // cout<<s2<<endl;


    //Reverse 

string s1 = "Raman Singh";
cout << s1 << endl;
string s2 = s1;
reverse(s2.begin(), s2.end());
cout << "Reversed string: " << s2 << endl;



    return 0;
}

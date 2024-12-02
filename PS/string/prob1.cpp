//A string comprises of lower case alphabet and multiplication, 
// divison , modulus plus and minus. Sort the string such that the
//  special character apperar first followed by lower case alphabet 
// in ascending order

    //day 6 and day 7


#include<iostream>
#include<algorithm>

using namespace std;
int main() {
    string str1;
    string str4;
    cin>>str1;
    string str2 ="";
    string str3="";

    for(int i =0;i <str1.size();i++) {
        if(str1[i]>= 'a' && str1[i]<= 'z' ) {
            str2+=str1[i];
        }
        else {
            str3+=str1[i];
        }
       
    }
    str4 = str3+ str2;

    cout<<str4;

}
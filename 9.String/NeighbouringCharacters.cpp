#include<iostream>
#include<string>
using namespace std;
int main() {
    string str= "abc";
    int count = 0;
    for(int i =0; i<str.size(); i++){
        if(i == 0 ) {
           if(str[i]!= str[i+1]) count++;
        }
        else if(i == str.size()-1) {
            if(str[i]!= str[i-1]) count++;
        }
        else if(str[i] != str[i-1] && str[i] != str[i+1]) {
            count++;
        }
    }
    cout<<count<<endl;
   
    return 0;
}
#include<iostream>
using namespace std; 
int main() {
    int x = 451;
    int *p =&x;
    cout<<p<<endl;
    //Dereferencing Operator is * (Star Operator)
    cout<<"Before "<<*p<<endl;

    *p = 654789;
     cout<<p<<endl;
    //Dereferencing Operator is * (Star Operator)
    cout<<"After "<<*p<<endl;


}
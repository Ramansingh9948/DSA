#include<iostream>
using namespace std;
int main(){
    int x , y ;
    int *p=&x;
    int *q =&y;
    cout<<"Enter any two  numbers to add"<<endl;
    cin>>*p>>*q;
    //Adding the two numbers with the help of pointers

    cout<<*p+*q<<endl;

}
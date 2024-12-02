

#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the no  of students : "<<endl;
    cin>>n;
    int marks[n], i;
    cout<<"Enter the marks of students : "<<endl;
    for ( i = 0; i <=n-1; i++) {
        cin>>marks[i];
    }

    for ( i = 0; i <=n-1 ; i++) {
        if (marks[i]< 35){
            cout<<"Roll Number : "<<i<<endl;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
int main() {
    int i, j, k;
    cout<< "Enter the numbers : "<< endl;
    cin>>i;
    cin>>j;
    cin>>k;
    cout<<"The numbers are "<<i<<","<<j<<","<<k<<endl;
    if (i > j)
    {
       if(i > k) {
        cout << i << endl;
       }
       else {
        cout<< k<< endl;
       }
    }
    else{
        if(j > k) {
            cout << j << endl;
            }
            else {
                cout<< k<< endl;
            }
    }
    return 0;
}
#include<iostream>
using namespace std;
int main() {
    int i, n, a, d;
    cout<<"Enter no. of terms, first term and common difference : ";
    cin>>n>>a>>d;
    for ( i = 1; i <=n ; i++)
    {
        cout<< " "<<a + (i-1)*d<<endl;
    }
    
}
#include<iostream>
using namespace std;
int main() {
    int arr[] ={2,6,87,964};
    int *ptr = arr;  //Address of first element of the array is given to ptr
    cout<<ptr<<endl;
    ptr[0] = 8;
    for(int i =0; i<4; i++) {
        cout<<*(ptr)<<" ";
        ptr++;
    }

    cout<<endl;
     ptr = arr; 
    *ptr = 7;
    ptr++;
    *ptr = 9;
    *ptr--;
    for(int i =0; i<4; i++) {
        cout<<*(ptr)<<" ";
        ptr++;
    }

}
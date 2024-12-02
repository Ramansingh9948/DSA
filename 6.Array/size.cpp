#include<iostream>
using namespace std;
int main() {
    int i;
    int arr[] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    for ( i = 0; i <=5 ; i++) {
        cout<<&arr[i]<<" ";
    }
//0x61fef8 0x61fefc 0x61ff00 0x61ff04 0x61ff08 0x61ff0c 

    // cout<<n<<endl;
    return 0;
}

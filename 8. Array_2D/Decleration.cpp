#include<iostream>
using namespace std;
int main(){
    int i =0;
    int arr[3 ] [3]={{i++,i++,i++},{i++,i++,i++},{i++,i++,i++}};
    
    for(int j=0; j<3;j++) {
        for(int k=0; k<3;k++) {
            cout<<arr[j][k]<<" ";
        }
        cout<<endl;
    }




    return 0;
    

   
}
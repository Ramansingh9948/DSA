#include<iostream>
using namespace std;
int main(){
    int r, c;
    cout << "Enter the number of rows: ";
    cin>>r;
    cout << "Enter the number of columns: ";
    cin>>c;
//We are assuming that both matrix has the same order 
    int arr1[r][c], arr2[r][c];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin>>arr1[i][j];
        }
    }
        for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin>>arr2[i][j];
        }
    }
//
    
      for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            int res[i][j] ={0};
            for(int k = 0; k<c; k++) {
                res[i][k] += arr1[i][k]*arr2[k][j];
            }
        }
    }
        for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
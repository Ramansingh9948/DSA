#include<iostream>
using namespace std;
int main(){
    int r, c;
    cout << "Enter the number of rows: ";
    cin>>r;
    cout << "Enter the number of columns: ";
    cin>>c;

    int arr[r][c];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin>>arr[i][j];
        }
    }
    int max=0, max2;
      for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            if(max<arr[i][j]) {
                max2 =max;
                max=arr[i][j];
                
            }
        }
    }
    cout<<max<<endl;
    cout<<max2<<endl;



    return 0;
    

   
}
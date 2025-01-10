#include <iostream>
using namespace std;
int totalPath(int sr, int sc, int er, int ec) {
        if(sr>er || sc>ec) return 0;
    if(sr==er && sc == ec) {
       return 1;
    }
    int rightPath =  totalPath(sr, sc+1, er, ec);
    int leftPath =  totalPath(sr+1, sc, er, ec);
    return rightPath+leftPath;
}
void printPath(int sr, int sc, int er, int ec, string s) {
    if(sr>er || sc>ec) return;
    if(sr==er && sc == ec) {
        cout << s << endl;return;
    }
     printPath(sr, sc+1, er, ec, s+"C");
     printPath(sr+1, sc, er, ec, s+"R");

}
int main(){
    cout<<totalPath(1,1,3,3)<<endl;
    printPath(1,1,3,3,"");
  


}
//we can do this by using 2 parameter too
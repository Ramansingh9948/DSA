#include<iostream>
using namespace std;
void display(int *a, int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
        }
        cout << endl;

}
void change(int *b, int size) {
    b[0] = 4645;
}
int main(){
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);
    display(a, size);
    change(a, size);
    display(a, size);

}
#include <iostream>
using namespace std;

int main(){
    int a, *b;

    a = 5; 
    b = &a;

    cout<<"nilai a : "<<a;
    cout<<"\nnilai yang ditunjuk oleh b : "<<*b<<endl;

    cout<<"\nAlamat a : "<<&a;
    cout<<"\nAlamat yang ditunjukkan oleh b : "<<b;

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int b;

    cout<<"Masukkan baris :"; cin>>b;

    int (*array)[2];
    array = new int [b][2];

    for(int a = 0; a < 2; a++){
        for(int c = 0; c < b; c++){
            cout<<"Masukkan Array "<<"["<<a<<"]"<<"["<<c<<"] : "; cin>>array[a][c];
        }
    }
    cout<<"\n=======================\n";
    for(int a = 0; a < 2; a++){
        for(int c = 0; c < b; c++){
            cout<<"Nilai Array "<<"["<<a<<"]"<<"["<<c<<"] : "<<array[a][c]<<endl;
        }
    }
    delete array[2];
    return 0;

}
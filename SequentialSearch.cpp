#include <iostream>
#include <conio.h>
using namespace std;

void sequential(){
    int input, search, i, found, position;
    int A[10];

    cout<<"\nMasukkan Jumlah Data yang Akan diinput: "; cin>>input;
    for(i = 0; i < input; i++){
        cout<<"Data ke-"<<i+1<<" = "; cin>>A[i];
    }
    cout<<"\nData yang Ingin dicari: "; cin>>search;

    found = 0;
    for(i = 0; i < input; i++){
        if(A[i]==search){
            found=1;
            position=i;
            i=input;
        }
    }
    if(found==0){
        cout<<"\nData Tidak Ditemukan!";
    }else{
    cout<<"\nData Ditemukan Pada Index ke-"<<position<<endl;
    }
    getch();
}

int main(){
    system("cls");
    sequential();
}
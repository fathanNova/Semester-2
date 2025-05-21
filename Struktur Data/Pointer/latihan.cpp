#include <iostream>
#include <conio.h>
using namespace std;

void konversi(int *angka, char *huruf);

int main(){
    string nama, nim;
    int angka;
    char huruf;

    cout<<"\nMasukkan Nama Mahasiswa : "; getline(cin,nama);
    cout<<"Masukkan NIM \t\t: "; cin>>nim;
    cout<<"Masukkan Nilai Angka \t: "; cin>>angka;

    konversi(&angka, &huruf);

    cout<<"\nData Mahasiswa: \n";
    cout<<"Nama Mahasiswa \t: "<<nama;
    cout<<"\nNIM \t\t: "<<nim;
    cout<<"\nNilai Angka \t: "<<angka;
    cout<<"\nNilai Huruf \t: "<<huruf<<endl;

    getch();
}

void konversi(int *angka, char *huruf){
    if(*angka >=  0 && *angka <= 20){
        *huruf = 'E';
    }else if(*angka >=  21 && *angka <= 40){
        *huruf = 'D';
    }else if(*angka >=  41 && *angka <= 60){
        *huruf = 'C';
    }else if(*angka >=  61 && *angka <= 80){
        *huruf = 'B';
    }else if(*angka >=  81 && *angka <= 100){
        *huruf = 'A';
    }else{}
}
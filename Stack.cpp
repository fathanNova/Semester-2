#include <iostream>
#include <stdlib.h>
using namespace std;

const int maxS = 10; //maksimal stack

struct Barang {
    int Kode;
    char Nama[50];
    int Harga;
    int JmlBarang;
    
};

struct stackBarang{
    Barang data[maxS];
    int top;
};

///inisialisasi stack 
void inS(stackBarang &stack){ 
    stack.top = -1;
}

///inisialisasi stack full (stack.top == 9)
bool full(stackBarang &stack){
    return stack.top == maxS -1;
}

///inisialisasi stack kosong (stack.top == -1)
bool empty(stackBarang &stack){
    return stack.top == -1;
}

///Menghapus semua stack
void clearStack(stackBarang &stack){
    system("cls");
    cout<<"\nStack telah Direset\n";
    stack.top = -1;
}

///menambahkan stack
void input(stackBarang &stack, Barang in){
    if(!full(stack)){
        stack.top++;
        stack.data[stack.top] = in;
        cout<<"\nBerhasil Menambahkan Stack!\n";
    }else{
        cout<<"\nStack Penuh!\n";
    }
}

///Menghapus stack paling atas
void eraseStack(stackBarang &stack){
    system("cls");
    if(!empty(stack)){
        cout<<"Produk dengan ID "<<stack.data[stack.top].Kode<<" Telah Dihapus\n";
        stack.top --;
    }else{
        cout<<"\nStack Kosong!\n";
    }
}

///Menampilkan semua barang yang ada pada stack
void showAll(stackBarang &stack){
    system("cls");
    if(!empty(stack)){
        for (int i = stack.top; i >= 0; i--){
            cout<<"\n===Daftar Barang pada Stack===\n";
            cout<<"ID           : " <<stack.data[i].Kode<<endl;
            cout<<"Nama Barang  : " <<stack.data[i].Nama<<endl;
            cout<<"Harga Barang : " <<stack.data[i].Harga<<endl;
            cout<<"Jumlah Stok  : " <<stack.data[i].JmlBarang<<endl; 
        }    
    }else{
        cout<<"\nStack Kosong!\n";
    }
}

int main(){
    system("cls");
    stackBarang stack;
    inS(stack);
    int pilihan;

    do{
    cout<<"\nProgram Pendataan Barang dengan Stack\n";
    cout<<"1. Input Barang\n";
    cout<<"2. Menampilkan Semua Stack\n";
    cout<<"3. Menghapus Stack\n";
    cout<<"4. Membersihkan Semua Stack\n";
    cout<<"5. Keluar\n";
    cout<<"\nPilih: "; cin>>pilihan;

    switch(pilihan){
        case 1:
        system("cls");
        Barang in;
        cout<<"ID           : "; cin>>in.Kode; 
        cin.ignore();
        cout<<"Nama Barang  : "; cin.getline(in.Nama, 50);
        cout<<"Harga Barang : "; cin>>in.Harga;
        cout<<"Jumlah Stok  : "; cin>>in.JmlBarang;
        input(stack, in);
        break;

        case 2:
        showAll(stack);
        break;

        case 3:
        eraseStack(stack);
        break;

        case 4:
        clearStack(stack);
        break;

        case 5:
        return 0;
        break;

        default:
        system("cls");
        cout<<"\nPilihan Tidak Tersedia. Silahkan Ulangi dengan menginput Angka yang Benar\n";
        break;
    }
    }while(true);

}
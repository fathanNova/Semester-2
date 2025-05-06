#include <iostream>
#include <stdlib.h>
using namespace std;

const int maxS = 10; //maksimal stack

struct barang {
    int kode;
    char nama[50];
    int harga;
    int stok;
    
};

struct stackBarang{
    barang data[maxS];
    int top;
}stack;

void inS();
bool full();
bool empty();
void clearStack();
void input();
void eraseStack();
void show();
char menu();

int main(){
   inS();

    do{
        char select = menu();
        switch(select){
            case 1:
            input();
            break;

            case 2:
            show();
            break;

            case 3:
            eraseStack();
            break;

            case 4:
            clearStack();
            break;

            case 5:
            cout<<"Terima Kasih\n";
            return 0;
            break;

            default:
            system("cls");
            cout<<"\nPilihan Tidak Tersedia. Silahkan Ulangi dengan menginput Angka yang Benar\n";
            break;

        }
   
    }while(true);
   
}

void inS(){
    stack.top = -1;
}

bool full(){
    return stack.top == maxS-1;
}

bool empty(){
    return stack.top == -1;
}
void clearStack(){
    cout<<"\nStack telah di reset!";
    stack.top = -1;
    getchar();
    cin.get();
}

void input(){
    if(!full()){
        barang in;
        cout<<"\nInput Barang baru: \n";

        cout<<"ID           : "; cin>>in.kode; 
        cin.ignore();
        cout<<"Nama Barang  : "; cin.getline(in.nama, 50);
        cout<<"Harga Barang : "; cin>>in.harga;
        cout<<"Jumlah Stok  : "; cin>>in.stok;
        stack.top++;
        stack.data[stack.top] = in;
        cout<<"\nBerhasil Menambahkan Stack!\n";     
    }else{
        cout<<"\nStack Penuh!";
    }
    getchar();
    cin.get();
}

void eraseStack(){
    if(!empty()){
        cout<<"\nBarang dengan ID "<< stack.data[stack.top].kode <<" Telah Dihapus\n";
        stack.top--;
    }else{
        cout<<"\nStack Kosong!";
    }
    getchar();
    cin.get();
}

void show(){
    if(!empty()){
        cout<<"\n--- Menampilkan Daftar Barang ---\n";
        for(int i = stack.top; i >=0 ; i--){
            cout<<"ID       : "<< stack.data[i].kode<<endl;
            cout<<"Nama     : "<< stack.data[i].nama<<endl;
            cout<<"Harga    : "<< stack.data[i].harga<<endl;
            cout<<"Stok     : "<< stack.data[i].stok<<endl;
            cout<<endl;
        }
    }else{
        cout<<"\nStack Kosong!";
    }
    getchar();
    cin.get();
}

//main menu
char menu() {
    system("cls");
    int ch;
    cout<<"---- Stack Barang ----\n";
    cout<<" 1. Tambah Barang\n";
    cout<<" 2. Tampilkan Barang\n";
    cout<<" 3. Hapus Barang\n";
    cout<<" 4. Bersihkan Stack\n";
    cout<<" 5. Keluar\n";
    cout<<"Pilih: ";
    cin>>ch;
    return ch;
}
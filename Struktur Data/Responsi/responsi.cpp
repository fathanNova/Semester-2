#include <iostream>
#include <conio.h>
#define max 20
using namespace std;

struct buku{
    int id;
    string namaBuku;
    int jumlah;
}Buku;

struct stackBuku{
    buku data[max];
    int top;
}stack;

void init();
bool full();
bool empty();
void input();
void deleteBook();
void show();
void sortByAlp();

int main(){
    init();
    int pilih;
    do{
        system("cls");
        cout<<"PROGRAM PENDATAAN BUKU PERPUSTAKAAN AMIKOM\n";
        cout<<"==========================================\n\n";
        cout<<"1. Input Buku\n";
        cout<<"2. Tampilkan Buku\n";
        cout<<"3. Urutkan Berdasarkan Abjad\n";
        cout<<"4. Hapus Semua Buku\n";
        cout<<"5. Keluar\n\n";
        cout<<"Pilihan Anda: "; cin>>pilih;

        switch(pilih){
            case 1: 
                input();
                break;
            case 2:
                show();
                break;
            case 3:
                sortByAlp();
                break;
            case 4:
                deleteBook();
                break;
            default:
                cout<<"Pilihan Anda Salah!\n";
                break;

        }
    }while(pilih != 5);
}

void init(){
    stack.top = -1;
}

bool full(){
    return stack.top == max -1;
}

bool empty(){
    return stack.top == -1;
}

void input(){ 
    if(!full()){
        cout<<"\nInput Buku\n";
        cout<<"==========\n";
        cout<<"Masukkan ID          : "; cin>>Buku.id;
        cin.ignore();
        cout<<"Masukkan Nama Buku   : "; getline(cin, Buku.namaBuku);
        cout<<"Masukkan Jumlah Buku : "; cin>>Buku.jumlah;
        stack.top++;
        stack.data[stack.top] = Buku;
    }else{
        cout<<"\nDaftar Buku Kosong!\n\n";
    }
    cin.get();
    getchar();
}

void deleteBook(){
    cin.ignore();
    cout<<"\nBerhasil Menghapus Semua Buku\n\n";
    stack.top = -1;
    getchar();
}

void show(){
    cin.ignore();
    if(!empty()){
        cout<<"\nMenampilkan Daftar Buku yang Ada\n\n";
        for(int i = stack.top; i >= 0; i--){
            cout<<"ID Buku          : " <<stack.data[i].id<<endl;
            cout<<"Nama Buku        : " <<stack.data[i].namaBuku<<endl;
            cout<<"Jumlah Buku      : " <<stack.data[i].jumlah<<endl;
            cout<<endl;
        }
    }else{
        cout<<"\nDaftar Buku Kosong!\n\n";
    }
    getchar();
}

void sortByAlp(){
    cin.ignore();
    if(!empty()){
        for(int i = 0; i < stack.top; i++){
            for(int j = 0; j < stack.top - i; j++){
                if(stack.data[j].namaBuku < stack.data[j+1].namaBuku){
                    buku temp = stack.data[j];
                    stack.data[j] = stack.data[j+1];
                    stack.data[j+1] = temp;
                }
            }
        }  
        cout<<"\nBuku Berhasil Diurutkan Berdasarkan Abjad\n"; 
    }else{
        cout<<"\nDaftar Buku Kosong!\n\n";
    }
    show();
}
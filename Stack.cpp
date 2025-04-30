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

struct queueBarang{
    Barang isi[maxS];
    int head;
    int tail;
} antrian;

void inQ();
bool queueEmpty();
bool queueFull();
void enqueue();
void dequeue();
void showQueue();
void clearQueue();
char menu();

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
    inQ();
    /*system("cls");
    stackBarang stack;
    inS(stack);
    int pilihan;*/

    do{
        char select = menu();
        switch(select){
            case 1:
            enqueue();
            break;

            case 2:
            showQueue();
            break;

            case 3:
            dequeue();
            break;

            case 4:
            clearQueue();
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
    /*cout<<"\nProgram Pendataan Barang dengan Stack\n";
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
    }*/
    }while(true);
   
}

//inisialisasi Queue
void inQ() {
    antrian.head = 0;
    antrian.tail = 0;
}

//mengecek queue kosong
bool queueEmpty() {
    return antrian.tail == 0;
}

//mengecek queue penuh
bool queueFull() {
   return antrian.tail == maxS;
}

//menghapus semua queue
void clearQueue() {
    antrian.tail = 0;
    antrian.head = 0;
    cout<<"\nSemua Queue telah dihapus\n";
    getchar();
    cin.get();
}

//menampilkan semua queue
void showQueue(){
    if(!queueEmpty()){
        cout<<"\n--- Menampilkan Barang yang Ada di Antrian---\n";
        //cout<<endl;
        for(int i = antrian.head; i < antrian.tail; i++){
            cout<<"\nID       : " <<antrian.isi[i].Kode<<endl;
            cout<<"Nama     : " <<antrian.isi[i].Nama<<endl;
            cout<<"Harga    : " <<antrian.isi[i].Harga<<endl;
            cout<<"Stok     : " <<antrian.isi[i].JmlBarang<<endl;
        }
    }
    else{
        cout<<"Antrian Kosong!\n";
    }
    cout<<"\nJumlah Antrian Sekarang: "<<(antrian.tail - antrian.head)<<endl;
    cout<<endl;
    getchar();
    cin.get();
}

//menambahkan queue
void enqueue() {
    if(!queueFull()){
        cin.ignore();
        cout<<"\nMenambahkan Barang\n";
        antrian.isi[antrian.tail].Kode = antrian.tail;
        cout<<"Nama     : "; cin.getline(antrian.isi[antrian.tail].Nama, 50);
        cout<<"Harga    : "; cin>>antrian.isi[antrian.tail].Harga;
        cout<<"Stok     : "; cin>>antrian.isi[antrian.tail].JmlBarang;
        cout<<"\nData telah ditambahkan di antrian ke-"<< antrian.tail<<endl;
        antrian.tail++;
       // showQueue();   
    }
    else{
        cout<<"\nAntrian Penuh!";
    }
    getchar();
    cin.get();
}

//mengambil queue paling depan
void dequeue() {
    if(!queueEmpty()){
        cout<<"\nBarang yang Dihapus: \n";
        cout<<"ID     : "<<antrian.isi[antrian.head].Kode<<endl;
        cout<<"Nama   : "<<antrian.isi[antrian.head].Nama<<endl;

        for(int i = antrian.head; i < antrian.tail-1; i++){
            antrian.isi[i] = antrian.isi[i+1];
            antrian.isi[i].Kode--;
        }
        antrian.tail--;
    }
    else{
        cout<<"\nAntrian Kosong!";
    }
    getchar();
    cin.get();
}

//main menu
char menu() {
    system("cls");
    int ch;
    cout<<"---- Queue Barang ----\n";
    cout<<" 1. Tambah Barang\n";
    cout<<" 2. Tampilkan Barang\n";
    cout<<" 3. Hapus Barang\n";
    cout<<" 4. Bersihkan Antrian\n";
    cout<<" 5. Keluar\n";
    cout<<"Pilih: ";
    cin>>ch;
    return ch;
}
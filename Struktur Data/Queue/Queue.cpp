#include <iostream>
#include <stdlib.h>
#include <conio.h>
#define max 10
using namespace std;

//const int max = 10;

struct queue
{
    int data[max];
    int head;
    int tail;
}antrian;

void inQ();
bool isFull();
bool isEmpty();
void enqueue();
void dequeue();
void showQueue();
void clearQueue();
char menu();

int main(){
    //system("cls");
    inQ();
    //menu();
    
    do{
        char select = menu();
        switch(select){
            case 1:
            enqueue();
            break;

            case 2:
            dequeue();
            break;

            case 3:
            showQueue();
            getchar();
            cin.get();
            break;

            case 4:
            clearQueue();
            break;

            case 5:
            cout<<"\nTerima Kasih";
            return 0;
            break;

            default :
            system("cls");
            cout<<"\n\nPilihan Tidak Tersedia. Silahkan Ulangi dengan Menginput Angka yang Benar";
            getchar();
            cin.get();
            break;
        }

    }while(true);

    return 0;
}
void inQ(){
    antrian.head = 0;
    antrian.tail = 0;
}

bool isFull(){
    return antrian.tail == max;
}

bool isEmpty(){
    return antrian.tail ==  0;
}

void enqueue(){
    //showQueue();
    if(!isFull()){
        //cin.ignore();
        showQueue();
        int newData;
        
        cout<<"\nMasukkan Data: "; cin>>newData;
        antrian.data[antrian.tail]=newData;
        antrian.tail++;

        showQueue();
        cout<<"Data telah ditambahkan\n";

    }else{
        cout<<"\nAntrian Penuh!";
    }
    getchar();
    cin.get();
}

void dequeue(){
    if(!isEmpty()){
        cout<<"\nMengambil Data \" "<<antrian.data[antrian.head]<<" \" ...\n";
        for(int i = antrian.head; i < antrian.tail; i++){
            antrian.data[i]=antrian.data[i+1];
        }
        antrian.tail--;
    }else{
        cout<<"\nAntrian Kosong!";
    }
    getch();
    //cin.get();
}

void showQueue(){
    if(!isEmpty()){
        for(int i = antrian.head; i < antrian.tail-1; i++){
            cout<<antrian.data[i]<<" | ";
        }
    }
    cout<<endl;
}

void clearQueue(){
    antrian.tail = 0;
    cout<<"\nAntrian Telah Direset";
    getchar();
    cin.get();
}

char menu(){
    system("cls");
    int ch;
    cout<<"\n---Menu Utama--\n";
    cout<<" 1. Enqueue\n";
    cout<<" 2. Dequeue\n";
    cout<<" 3. Tampilkan Antrian\n";
    cout<<" 4. Reset Antrian\n";
    cout<<" 5. Keluar\n";
    cout<<"\nMasukkan Pilihan Anda: "; cin>>ch;
    
    return ch;
}
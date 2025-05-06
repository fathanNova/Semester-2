#include <iostream>
#include <stdlib.h>
using namespace std;

const int maxS = 10; // maksimal antrian

struct Barang {
    int Kode;
    char Nama[50];
    int Harga;
    int JmlBarang;
};

struct queueBarang {
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
void sortBiggest(); 
void sortSmallest();

int main() {
    inQ();

    do {
        char select = menu();
        switch (select) {
            case 1:
                enqueue();
                break;

            case 2:
                showQueue();
                break;
            
            case 3: 
                sortBiggest();
                break;
            
            case 4:
                sortSmallest();
                break;

            case 5:
                dequeue();
                break;

            case 6:
                clearQueue();
                break;

            case 7:
                cout << "Terima Kasih\n";
                return 0;
                break;

            default:
                system("cls");
                cout << "\nPilihan Tidak Tersedia. Silahkan Ulangi dengan menginput Angka yang Benar\n";
                break;
        }
    } while (true);

    return 0;
}

// Inisialisasi Queue
void inQ() {
    antrian.head = 0;
    antrian.tail = 0;
}

// Mengecek queue kosong
bool queueEmpty() {
    return antrian.tail == 0;
}

// Mengecek queue penuh
bool queueFull() {
    return antrian.tail == maxS;
}

// Menghapus semua queue
void clearQueue() {
    antrian.tail = 0;
    antrian.head = 0;
    cout << "\nSemua Queue telah dihapus\n";
    getchar();
    cin.get();
}

// Menampilkan semua queue
void showQueue() {
    if (!queueEmpty()) {
        cout << "\n--- Menampilkan Barang yang Ada di Antrian---\n";
        for (int i = antrian.head; i < antrian.tail; i++) {
            cout << "\nID       : " << antrian.isi[i].Kode << endl;
            cout << "Nama     : " << antrian.isi[i].Nama << endl;
            cout << "Harga    : " << antrian.isi[i].Harga << endl;
            cout << "Stok     : " << antrian.isi[i].JmlBarang << endl;
        }
        cout << endl;
    }
    else {
        cout << "\nAntrian Kosong!";
    }
    cout << "\nJumlah Antrian Sekarang: " << (antrian.tail - antrian.head) << endl;
    cout << endl;
    system("pause");
    //getchar();
    //cin.get();
}

// Menambahkan queue
void enqueue() {
    if (!queueFull()) {
        cin.ignore();
        cout << "\nMenambahkan Barang\n";
        antrian.isi[antrian.tail].Kode = antrian.tail;
        cout << "Nama     : "; cin.getline(antrian.isi[antrian.tail].Nama, 50);
        cout << "Harga    : "; cin >> antrian.isi[antrian.tail].Harga;
        cout << "Stok     : "; cin >> antrian.isi[antrian.tail].JmlBarang;
        cout << "\nData telah ditambahkan di antrian ke-" << antrian.tail << endl;
        antrian.tail++;
    }
    else {
        cout << "\nAntrian Penuh!";
    }
    getchar();
    cin.get();
}

// Mengambil queue paling depan
void dequeue() {
    if (!queueEmpty()) {
        cout << "\nBarang yang Dihapus: \n";
        cout << "ID     : " << antrian.isi[antrian.head].Kode << endl;
        cout << "Nama   : " << antrian.isi[antrian.head].Nama << endl;

        for (int i = antrian.head; i < antrian.tail - 1; i++) {
            antrian.isi[i] = antrian.isi[i + 1];
            //antrian.isi[i].Kode--;
        }
        antrian.tail--;
    }
    else {
        cout << "\nAntrian Kosong!";
    }
    getchar();
    cin.get();
}

// Main menu
char menu() {
    system("cls");
    int ch;
    cout << "---- Queue Barang ----\n";
    cout << " 1. Tambah Barang\n";
    cout << " 2. Tampilkan Barang\n";
    cout << " 3. Sorting Harga Tertinggi\n";
    cout << " 4. Sorting Harga Terendah\n";
    cout << " 5. Hapus Barang\n";
    cout << " 6. Bersihkan Antrian\n";
    cout << " 7. Keluar\n";
    cout << "Pilih: ";
    cin >> ch;
    return ch;
}

// Fungsi untuk mengurutkan antrian berdasarkan harga terkecil
void sortSmallest() {
    if(!queueEmpty()){
        cout << "\nBarang yang Belum Diurutkan\n";
        showQueue();

        cout << "\nMengurutkan Berdasarkan Harga\n";
        Barang temp; // Menampung sementara data Barang

        // Bubble Sort berdasarkan Harga
        for (int i = antrian.head; i < antrian.tail - 1; i++) {
            for (int j = antrian.head; j < antrian.tail - i - 1; j++) {
                if (antrian.isi[j].Harga > antrian.isi[j + 1].Harga) {
                    // Swap barang di antrian[j] dengan antrian[j + 1]
                    temp = antrian.isi[j];
                    antrian.isi[j] = antrian.isi[j + 1];
                    antrian.isi[j + 1] = temp;
                }
            }
        }
        cout << "\nPengurutan Selesai\n";
        showQueue();  // Menampilkan antrian setelah diurutkan
    }else{
        cout << "\nAntrian Kosong!";  
    }
    getchar();
    cin.get();
}

//fungsi mengurutkan antrian barang berdasarkan harga terbesar
void sortBiggest() {
    if(!queueEmpty()){
        cout << "\nBarang yang Belum Diurutkan\n";
        showQueue();

        cout << "\nMengurutkan Berdasarkan Harga\n";
        Barang temp; // Menampung sementara data Barang

        // Bubble Sort berdasarkan Harga
        for (int i = antrian.head; i < antrian.tail - 1; i++) {
            for (int j = antrian.head; j < antrian.tail - i - 1; j++) {
                if (antrian.isi[j].Harga < antrian.isi[j + 1].Harga) {
                    // Swap barang di antrian[j] dengan antrian[j + 1]
                    temp = antrian.isi[j];
                    antrian.isi[j] = antrian.isi[j + 1];
                    antrian.isi[j + 1] = temp;
                }
            }
        }
        cout << "\nPengurutan Selesai\n";
        showQueue();  // Menampilkan antrian setelah diurutkan
    }else{
        cout << "\nAntrian Kosong!";  
    }
    getchar();
    cin.get();
}
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *headNode = NULL;
Node *currentNode = NULL;

bool isEmpty();
void insertNode(int data);
void deleteFromFront();
void deleteFromEnd();
void deleteAll();
void printNode();

int main(){
    int pilihanMenu, data;
    do{
        cout<<">>> PILIHAN MENU SINGLY LINKED LIST <<<\n\n";
        cout<<"1. Menambahkan Node\n";
        cout<<"2. Menghapus Node dari Depan\n";
        cout<<"3. Menghapus Node dari Belakang\n";
        cout<<"4. Mengosongkan Node\n";
        cout<<"5. Menampilkan Node\n";
        cout<<"6. Selesai\n\n";

        cout<<"Masukkan Pilihan Anda: "; cin>>pilihanMenu;
        cout<<endl;

        switch(pilihanMenu){
            case 1: 
            cout<<"Masukkan Data: "; cin>> data;
            insertNode(data);
            break;

            case 2:
            if(isEmpty()){
                cout<<"List masih kosong !!!\n\n";
            }else{
                deleteFromFront();
            }
            break;

            case 3:
            if(isEmpty()){
                cout<<"List masih kosong !!!\n\n";
            }else{
                deleteFromEnd();
            }
            break;

            case 4:
            if(isEmpty()){
                cout<<"List masih kosong !!!\n\n";
            }else{
                deleteAll();
            }
            break;

            case 5:
            if(isEmpty()){
                cout<<"List masih kosong !!!\n\n";
            }else{
                printNode();
            }
            break;

            case 6:
            break;

            default:
            cout<<"Menu yang Anda Pilih Tidak Terdaftar\n\n";
            break;
        }
    }while(pilihanMenu !=6);

    cout<<endl;
    system("pause");
}

bool isEmpty(){
    return (headNode == NULL);
}

void insertNode(int data){
    Node *newNode = NULL;
    newNode = new Node;
    newNode -> data = data;

    if(isEmpty()){
        headNode = newNode;
    }else{
        currentNode -> next = newNode;
    }
    currentNode = newNode;
    currentNode -> next = NULL;
    cout<<"Node Berhasil Ditambahkan\n\n";
}

void deleteFromFront(){
    if(!isEmpty()){
        Node *hapusNode = headNode;
        headNode = headNode -> next;
        delete hapusNode;

        cout<<"Node Berhasil Dihapus\n\n";
    }
}

void deleteFromEnd(){
    if(headNode == currentNode){
        headNode = NULL;
        currentNode = NULL;
        return;
    }
    Node *bantu = headNode;
    Node *hapusNode = currentNode;
    while(bantu -> next != currentNode){
        bantu = bantu -> next;
    }

    currentNode = bantu;
    currentNode -> next = NULL;
    delete hapusNode;
    cout<<"Node Berhasil Dihapus\n\n";
}

void deleteAll(){
    Node *bantu, *hapusNode;
    bantu = headNode;
    while(bantu -> next != currentNode){
        hapusNode = bantu;
        bantu = bantu -> next;
        delete hapusNode;
    }
    headNode = NULL;
    currentNode = NULL;
    cout<<"Node Berhasil Dikosongkan\n\n";
}

void printNode(){
    Node *awalNode = headNode;
    int i = 1;
    while(awalNode != NULL){
        cout<<"Data Pada Node #"<<i<<" = "<<awalNode -> data<<endl;
        awalNode = awalNode -> next;
        i++;
    }
    cout<<endl;
}
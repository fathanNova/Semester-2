#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *headNode = NULL;
Node *currentNode = NULL;

bool isEmpty();
void insertNodeFront(int data);
void insertNodeMiddle(int data, int posisi);
void insertNodeEnd(int data);
void deleteFromFront();
void deleteFromMiddle(int data);
void deleteFromEnd();
void deleteAll();
void printNode();
void showNode();

int main(){
    int pilihanMenu, data, posisi, del;
    
    do{
        cout<<"\n>>>>\n";
        showNode();
        cout<<">>>>\n\n";

        cout<<">>> PILIHAN MENU SINGLY LINKED LIST <<<\n\n";
        cout<<"1. Menambahkan Node dari Depan\n";
        cout<<"2. Menambahkan Node dari Tengah\n";
        cout<<"3. Menambahkan Node dari Belakang\n";
        cout<<"4. Menghapus Node dari Depan\n";
        cout<<"5. Menghapus Node dari Tengah\n";
        cout<<"6. Menghapus Node dari Belakang\n";
        cout<<"7. Mengosongkan Node\n";
        cout<<"8. Menampilkan Node\n";
        cout<<"9. Selesai\n\n";

        cout<<"Masukkan Pilihan Anda: "; cin>>pilihanMenu;
        cout<<endl;

        switch(pilihanMenu){
            case 1: 
            cout<<"Masukkan Data: "; cin>>data;
            insertNodeFront(data);
            break;

            case 2:
            if(isEmpty()){
                cout<<"List Masih Kosong!!!\n\n";
            }else{
                cout<<"Masukkan Data: "; cin>>data;
                cout<<"Masukkan Posisi yang Diinginkan: "; cin>>posisi;
                insertNodeMiddle(data, posisi);
            }
            break;

            case 3:
            cout<<"Masukkan Data: "; cin>> data;
            insertNodeEnd(data);
            break; 

            case 4:
            if(isEmpty()){
                cout<<"List masih kosong !!!\n\n";
            }else{
                deleteFromFront();
            }
            break;

            case 5:
            if(isEmpty()){
                cout<<"List masih kosong !!!\n\n";
            }else{
                cout<<"Masukkan Data yang Ingin Dihapus: "; cin>>del;
                deleteFromMiddle(del);
            }
            break;

            case 6:
            if(isEmpty()){
                cout<<"List masih kosong !!!\n\n";
            }else{
                deleteFromEnd();
            }
            break;

            case 7:
            if(isEmpty()){
                cout<<"List masih kosong !!!\n\n";
            }else{
                deleteAll();
            }
            break;

            case 8:
            if(isEmpty()){
                cout<<"List masih kosong !!!\n\n";
            }else{
                printNode();
            }
            break;

            case 9:
            break;

            default:
            cout<<"Menu yang Anda Pilih Tidak Terdaftar\n\n";
            break;
        }
    }while(pilihanMenu !=9);

    cout<<endl;
    system("pause");
}

bool isEmpty(){
    return (headNode == NULL);
}

void insertNodeFront(int data){
    Node *newNode = NULL;
    newNode = new Node;
    newNode -> data = data;
   // newNode -> next = headNode;
    if(isEmpty()){
        headNode = currentNode = newNode;
        newNode -> next = NULL;
    }else{
        newNode -> next = headNode;
        headNode = newNode;
    }
    
    cout<<"Node Berhasil Ditambahkan\n\n";
}

void insertNodeMiddle(int data, int posisi){
    Node *newNode = new Node;
    newNode -> data = data;
    newNode -> next = NULL;
    Node *bantu = headNode;

    while(bantu != NULL && bantu -> data != posisi){
        bantu = bantu -> next;
    }

    if(bantu == NULL){
        cout<<"\nData yang Dicari Tidak Ditemukan\n\n";
        delete newNode;
        getchar();
        cin.get();
        return;
    }

    newNode -> next = bantu -> next;
    bantu -> next = newNode;

    if(bantu == currentNode){
        currentNode =newNode;
    }
}

void insertNodeEnd(int data){
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

void deleteFromMiddle(int data){
    
    Node *hapusNode = headNode;
    Node *bantu = NULL;

    while(hapusNode != NULL && hapusNode -> data != data){
        bantu = hapusNode;
        hapusNode = hapusNode -> next;
    }

    if(hapusNode == NULL){
        cout<<"Data yang Ingin Dihapus Tidak Ditemukan\n\n";
        return;
    }

    bantu -> next = hapusNode -> next;
    delete hapusNode;
    
    cout<<"Data "<<data<<" Berhasil Dihapus\n\n";
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
    /// Terdapat bug jika nilai yang ada di data hanya satu, maka akan menghapus data 
    /// tersebut dan keluar dari program
    /*Node *bantu, *hapusNode;
    bantu = headNode;
    while(bantu -> next != currentNode){
        hapusNode = bantu;
        bantu = bantu -> next;
        delete hapusNode;
    }*/

    Node *hapusNode;
    while(headNode != NULL){
        hapusNode = headNode;
        headNode = headNode -> next;
        delete hapusNode;
    }
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

void showNode(){
    Node *awalNode = headNode;
    while(awalNode != NULL){
       cout<<awalNode -> data<<" ";
        awalNode = awalNode -> next; 
    }
    cout<<endl;
}
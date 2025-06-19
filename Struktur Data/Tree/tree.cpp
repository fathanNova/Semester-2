#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
//pendeklarasian struct sebuah tree awal
struct Node{
    int data;
    Node *kiri;
    Node *kanan;
};
//fungsi untuk menambahkan node baru
void tambah(Node **root, int databaru)
{
    //jika root masih kosong
    if((*root) == NULL)
    {
        //pembuatan node baru
        Node *baru;
        //pengalokasian memori dari node yang telah dibuat
        baru = new Node;
        //inisialisasi awal node yang baru dibuat
        baru->data = databaru;
        baru->kiri = NULL;
        baru->kanan = NULL;
        (*root) = baru;
        (*root)->kiri = NULL;
        (*root)->kanan = NULL;
        cout<<"Data bertambah!";
    }
        //jika data yang akan dimasukkan lebih kecil daripada elemenroot, maka akan diletakkan di node sebelah kiri.
    else if(databaru<(*root)->data)
        tambah(&(*root)->kiri, databaru);
        //jika data yang akan dimasukkan lebih besar daripada elemenroot, maka akan diletakkan di node sebelah kanan
    else if(databaru>(*root)->data)
        tambah(&(*root)->kanan, databaru);
        //jika saat dicek data yang akan dimasukkan memiliki nilai yang sama dengan data pada root
    else if(databaru == (*root)->data)
        cout<<"Data sudah ada!";

}
//fungsi yang digunakan untuk mencetak tree secara preOrder
void preOrder(Node *root)
{
    if(root != NULL){
        cout<< root->data;
        cout<<" ";
        preOrder(root->kiri);
        //cout<<" ";
        preOrder(root->kanan);
    }
}
//fungsi yang digunakan untuk mencetak tree secara inOrder
void inOrder(Node *root)
{
    if(root != NULL){
        inOrder(root->kiri);
        cout<<" ";
        cout<< root->data;
       // cout<<" ";
        inOrder(root->kanan);
    }
}
//fungsi yang digunakan untuk mencetak tree secara postOrder
void postOrder(Node *root)
{
    if(root != NULL){
        postOrder(root->kiri);
        //cout<<" ";
        postOrder(root->kanan);
        cout<<" ";
        cout<< root->data;
    }
}

void tampilanTree(Node *root, int spasi = 0, int jarak = 5 ){
    if(root == NULL) return;
    //return;
    spasi += jarak;
    
    //cout<<endl;
    tampilanTree(root -> kanan, spasi);
    //cout<<endl;
    for(int i = jarak; i < spasi; i++)
    cout<<" ";
    cout<<root -> data<<endl;
    tampilanTree(root -> kiri, spasi);

}
//fungsi utama
int main()
{
//deklarasikan variabel
    int pil, data;// c;
    Node *pohon; //*t;
    pohon = NULL; //inisialisasi node pohon
//perulangan do-while
    do
    {
        system("cls"); //bersihkan layar
        cout<<"\t#PROGRAM TREE C++#";
        cout<<"\n\t==================";
        cout<<"\nMENU";
        cout<<"\n----\n";
        cout<<"1. Tambah\n";
        cout<<"2. Lihat pre-order\n";
        cout<<"3. Lihat in-order\n";
        cout<<"4. Lihat post-order\n";  
        cout<<"5. Tampilan Tree\n";
        cout<<"6. Exit\n";
        cout<<"Pilihan : ";
        cin>> pil;

        switch(pil)
        {
        //jika pil bernilai 1
            case 1 :
            cout<<"\nINPUT : ";
            cout<<"\n-------";
            cout<<"\nData baru : ";
            cin>> data;
            //panggil fungsi untuk menambah node yangberisi data pada tree
            tambah(&pohon, data);
            break;
        //jika pil bernilai 2
        case 2 :
            cout<<"\nOUTPUT PRE ORDER : ";
            cout<<"\n------------------\n";

            if(pohon!=NULL)
            //panggil fungsi untuk mencetak datasecara preOrder
            preOrder(pohon);
            else
            cout<<"Masih kosong!";
            break;
        //jika pil bernilai 3
        case 3 :
            cout<<"\nOUTPUT IN ORDER : ";
            cout<<"\n------------------\n";
            if(pohon!=NULL)
                //panggil fungsi untuk mencetak datasecara inOrder
                inOrder(pohon);
            else
                cout<<"Masih kosong!";
            break;
        //jika pil bernilai 4
        case 4 :
            cout<<"\nOUTPUT POST ORDER : ";
            cout<<"\n------------------\n";
            if(pohon!=NULL)
                //panggil fungsi untuk mencetak datasecara postOrder
                postOrder(pohon);
            else
                cout<<"Masih kosong!";
            break;
        case 5:
            cout<<"\nOUTPUT TREE : ";
            cout<<"\n------------------\n";
            if(pohon!=NULL){
                tampilanTree(pohon);
            }
            else{
                cout<<"Masih Kosong!";
            }
            break;
}
getch();
}while(pil != 6); //akan diulang jika input tidak samadengan 6
return 0;
}
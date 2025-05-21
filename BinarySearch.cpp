//untuk menggunakan binary search, data harus diurutkan terlebih dahulu
#include <iostream>
using namespace std;

int search, input, A[10];
void inputAndSort(){
    int i, j, temp;

    cout<<"\nJumlah Data yang akan Diinput: ";cin>>input;
    for(i = 0; i < input; i++){
        cout<<"Data ke-"<<i+1<<" = "; cin>>A[i];
    }

    for(i = 0; i < input; i++){
      for(j = 0; j < input-i-1; j++){
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }  
    }

    cout<<"\nAngka Setelah Diurutkan: \n";
    for(i = 0; i < input; i++){
        cout<<A[i]<<" ";
    }
    cout<<"\nMasukkan Angka yang Ingin Dicari: "; cin>>search;
    
}

void binarySearch(){
    int left = 0;
    int right = input-1;
    int mid;
    bool found = false;

    while(left <= right){
        mid=(left+right)/2;
        if(search == A[mid]){
            found = true;
            break;
        }else if(search < A[mid]){
            right = mid -1;
        }else{
            left = mid +1;
        }
    }
    if(found = true){
        cout<<"\nAngka Ditemukan Pada Index ke-"<<mid;
    }else{
        cout<<"\nAngka Tidak Ditemukan";
    }
}

int main(){
    system("cls");
    inputAndSort();
    binarySearch();
}
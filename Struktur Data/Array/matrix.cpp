#include <iostream>
using namespace std;

int main(){
    int b = 3, k =3;
    int A[b][k], B[b][k];
    int C[b][k];

    cout<<"\nMatrix A\n";
    for(int i = 0; i < 3; i++ ){
        for(int j =0; j < 3; j++){
            cout<<"Masukkan Nilai Untuk Array ke- ["<<i<<"]["<<j<<"] : ";
            cin>>A[i][j];
        }
    }
    cout<<"\nMatrix B\n";
    for(int l = 0; l < 3; l++ ){
        for(int m =0; m < 3; m++){
            cout<<"Masukkan Nilai Untuk Array ke- ["<<l<<"]["<<m<<"] : ";
            cin>>B[l][m];
            C[l][m] = A[l][m] + B[l][m];
        }
    }
    cout<<"\n";
    cout<<"Menampilkan Matrix A: \n";
    for(int n = 0; n < 3; n++ ){
        for(int o =0; o < 3; o++){
            cout<<A[n][o]<<"\t";
        }
        cout<<endl;
    }

    cout<<"\n";
    cout<<"Menampilkan Matrix B: \n";
    for(int n = 0; n < 3; n++ ){
        for(int o =0; o < 3; o++){
            cout<<B[n][o]<<"\t";
        }
        cout<<endl;
    }

    cout<<"\n";
    cout<<"Hasil Penjumlahan Matrix A dan B: \n";
    for(int n = 0; n < 3; n++ ){
        for(int o =0; o < 3; o++){
            cout<<C[n][o]<<"\t";
        }
        cout<<endl;
    }
}
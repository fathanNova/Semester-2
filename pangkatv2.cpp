#include <iostream>
using namespace std;

int main(){
    int a;
    int hasil=1;

    cout<<"\nInputkan Jumlah dari Array: ";cin>>a;
    int data[a];

    for(int i=0; i<a; i++){
        cout<<"Masukkan Nilai Array ke-"<<i+1<<" : "; cin>>data[i];
    }
    
    cout<<"\nBilangan Pangkatnya: \n";

    
    for(int i = 0; i < a; i++){
        hasil=1; 
        for(int j =0; j<data[i]; j++){
           hasil *=  data[i];
        }
        cout<<"Data ke- "<<i+1<<" : "<<hasil<<endl;
    }
}
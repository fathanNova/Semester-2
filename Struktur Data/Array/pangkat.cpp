#include <iostream>
using namespace std;

//data dari aray statis (1-10) 
int main(){
    int data[10]={1,2,3,4,5,6,7,8,9,10};
    long long hasil=1;


    cout<<"\nBilangan Pangkatnya: \n";

    
    for(int i = 0; i < 10; i++){
        hasil=1; 
        for(int j =0; j<data[i]; j++){
           hasil *=  data[i];
        }
        cout<<"Data ke- "<<i+1<<" : "<<hasil<<endl;
    }
}
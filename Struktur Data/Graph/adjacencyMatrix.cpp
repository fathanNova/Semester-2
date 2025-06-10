#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"\nInputkan Jumlah Node: "; cin>> n; // input banyak node atau simpul yang akan dibuat
    cout<<"Inputkan Jumlah Edge: "; cin>> m; // input banyak edge atau sebuah jalur yang akan terhubung antar simpul
    //cin >> n >> m ;

    int adjMat[n + 1][n + 1] = {};
    for(int i = 0; i < m; i++){
        int u , v ;
        cin >> u >> v ; // input simpul yang saling terhubung

        // graph tak berarah
        adjMat[u][v] = 1 ;
        adjMat[v][u] = 1 ;
    }

    // dibuat output agar terlihat hasilnya
    cout<<"\nAdjacency Matrix: \n";

    cout<<"  ";
    for(int i = 1; i <= n; i++){
        cout<< i <<" ";
    }
    cout<<endl;

    for(int i = 1; i <= n; i++){
        cout<< i <<" ";
        for(int j = 1; j <= n; j++){
            cout<<adjMat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
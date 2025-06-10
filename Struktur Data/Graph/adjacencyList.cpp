// Representasi sederhana dari graph menggunakan STL
#include <bits/stdc++.h>
using namespace std;
// Fungsi utilitas untuk menambahkan edge pada graph tak berarah.
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
// Fungsi utilitas untuk mencetak representasi adjacency list dari graph
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v) {
        cout << "\n Adjacency list of vertex " << v << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
            printf("\n");
        
    }
}
// Driver code
int main()
{
    int V = 7;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 5);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 4, 6);

    printGraph(adj, V);
    return 0;
}
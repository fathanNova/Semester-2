#include <stdio.h>
int graph[100][100]; //Matriks untuk menyimpan graph yang berisi 
int main (int argc, char** argv){
	printf("Masukkan jumlah edge: ");
	int edges;
	scanf ("%d", &edges);
	
	for ( int i = 1; i <= edges; i++){
		printf("Masukkan edge %d: ", i);
		int x, y;
		scanf("%d %d", &x, &y);
		graph[x][y] = 1;
	}
	return 0;
}
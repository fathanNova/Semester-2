#include <iostream>
using namespace std;

int main() {
    int data[5] = {5, 3, 8, 4, 2};

    for (int i = 0; i < 4; i++) {
        int minIndex = i;
        for (int j = i + 1; j < 5; j++) {
            if (data[j] < data[minIndex]) {
                minIndex = j;
            }
        }
        // menukar elemen terkecil dengan posisi i
        int temp = data[i];
        data[i] = data[minIndex];
        data[minIndex] = temp;
    }

    cout << "Hasil setelah diurutkan: ";
    for (int i = 0; i < 5; i++) {
        cout << data[i] << " ";
    }

    return 0;
}

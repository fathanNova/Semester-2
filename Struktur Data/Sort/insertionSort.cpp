#include <iostream>
using namespace std;

int main() {
    int data[5] = {5, 3, 8, 4, 2};

    for (int i = 1; i < 5; i++) {
        int key = data[i];
        int j = i - 1;

        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }

    cout << "Hasil setelah diurutkan: ";
    for (int i = 0; i < 5; i++) {
        cout << data[i] << " ";
    }

    return 0;
}

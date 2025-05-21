#include <iostream>
using namespace std;

int main() {
    int data[5] = {5, 3, 8, 4, 2};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    cout << "Hasil setelah diurutkan: ";
    for (int i = 0; i < 5; i++) {
        cout << data[i] << " ";
    }

    return 0;
}
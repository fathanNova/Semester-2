#include <iostream>
using namespace std;

int get_max(int ar[], int sz);
int get_min(int ar[], int sz);
double get_avg(int ar[], int sz);

int main(){
    system("cls");
    int data[20];
    int n;
    cout << "\nbanyak data (max 20): ";
    cin >> n;

    for(int i = 0; i < n; ++i){
        cout << "data ke-" << i << ": ";
        cin >> data[i];
    }

    cout << "\nmax: " << get_max(data, n) << endl;
    cout << "min: " << get_min(data, n) << endl;
    cout << "avg: " << get_avg(data, n) << endl;
return 0;
}

int get_max(int ar[], int sz){
    int imax{0};
    for(int i = 1; i < sz; ++i)
        if(ar[i] > ar[imax])
        imax = i;

return ar[imax];
}

int get_min(int ar[], int sz){
    int imin{0};
    for(int i = 1; i < sz; ++i)
        if(ar[i] < ar[imin])
        imin = i;
return ar[imin];
}

double get_avg(int ar[], int sz){
    double sum{0};
    for(int i = 0; i < sz; ++i)
        sum += ar[i];
return sum / sz;
}
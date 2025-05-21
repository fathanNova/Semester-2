#include <iostream>
using namespace std;

char get_max(char ar[], int sz);
char get_min(char ar[], int sz);


int main(){
    system("cls");
    char data[20];
    int n;
    cout << "\nbanyak data (max 20): ";
    cin >> n;

    for(int i = 0; i < n; ++i){
        cout << "data ke-" << i << ": ";
        cin >> data[i];
    }

    cout << "\nmax: " << get_max(data, n) << endl;
    cout << "min: " << get_min(data, n) << endl;
   
return 0;
}

char get_max(char ar[], int sz){
    char imax{0};
    for(int i = 1; i < sz; ++i)
        if(ar[i] > ar[imax])
        imax = i;

return ar[imax];
}

char get_min(char ar[], int sz){
    char imin{0};
    for(int i = 1; i < sz; ++i)
        if(ar[i] < ar[imin])
        imin = i;
return ar[imin];
}

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Masukkkan panjang array: ";
    cin >> n;
    cout << endl;
    int a[n], b[n];
    cout << "Masukkan elemen array 1:" << endl;
    for (int i = 0; i < n; i++){
        cout << "Masukkan elemen a" << i+1 << " : ";
        cin >> a[i];
    }
    cout << endl;
    cout << "Masukkan elemen array 2:" << endl;
    for (int i = 0; i < n; i++){
        cout << "Masukkan elemen b" << i+1 << " : ";
        cin >> b[i];
    }
    cout << endl;
    cout << "Interseksi: " << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i] == b[j]){
                cout << a[i] << endl;
            }
        }
    }
    return 0;
}
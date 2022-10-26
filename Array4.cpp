#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int matriksA[2][2];
    int matriksB[2][2];
    int hasil[2][2];
    cout << "Masukkan elemen matriks A: " << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << "Masukkan elemen A" << i+1 << j+1 << ": "; 
            cin >> matriksA[i][j];
        }
    }
    cout << endl;
    cout << "Masukkan elemen matriks B: " << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << "Masukkan elemen B" << i+1 << j+1 << ": "; 
            cin >> matriksB[i][j];
        }
    }
    cout << endl;
    cout << "Matriks A: " << endl;; 
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << setw(4) << matriksA[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << "Matriks B: " << endl ; 
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << setw(4) << matriksB[i][j];
        }
        cout << endl;
    }
    cout << endl;
    hasil[0][0] = matriksA[0][0] * matriksB[0][0] + matriksA[0][1] * matriksB[1][0];
    hasil[0][1] = matriksA[0][0] * matriksB[0][1] + matriksA[0][1] * matriksB[1][1];
    hasil[1][0] = matriksA[1][0] * matriksB[0][0] + matriksA[1][1] * matriksB[1][0];
    hasil[1][1] = matriksA[1][0] * matriksB[0][1] + matriksA[1][1] * matriksB[1][1];
    cout << "Hasil perkalian matriks: " << endl; 
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << setw(4) << hasil[i][j];
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int N;
    double jumlah = 0, mean;
    cout << "Berapa banyak integer? ";
    cin >> N;
    int bil[N];
    cout << "Masukkan " << N <<  " integer dengan pemisah spasi: ";
    for (int i = 0; i < N; i++){
        cin >> bil[i];
    }
    for (int j = 0; j < N; j++){
        jumlah = jumlah + bil[j];
    }
    mean = jumlah / N;
    cout << "Rata-ratanya adalah: " << mean;
    return 0;
}
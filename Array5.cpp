#include <iostream>
using namespace std;
int main(){
    int N;
    int arr[100];
    cout << "Berapa banyak integer? ";
    cin >> N;

    cout << "Tulis integer dipisahkan spasi: ";
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    for (int i = 1; i <= 100; i++){
        bool found = true;
        for (int j = 0; j < N; j++){
            if(arr[j] == i) {
                found = false;
                break;
            }
        }
        if (found) {
            cout << "Integer positif terkecil yang tidak ada adalah: " << i;
            break;
        }
    }
    
    return 0;
}
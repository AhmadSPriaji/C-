#include <iostream>
using namespace std;
int main()
{
    int x, n, i=0, bin[10];
    cout << "Masukkan sebuah bilangan: ";
    cin >> x;
    n = x;
    while (x>0){
        bin[i] = x%2;
        x = x/2;
        i++;
    }
    cout << "Bentuk biner dari " << n << " adalah: " << endl;
    for (i=i-1; i >= 0 ; i--){
        cout << bin[i] << " ";
    }
    return 0;
}
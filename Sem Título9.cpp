#include <iostream>
using namespace std;

int main() {
    int numero;

    do {
        cin >> numero;
    } while (numero < 0);

    cout << "Numero valido: " << numero;

    return 0;
}
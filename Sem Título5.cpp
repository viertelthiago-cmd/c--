#include <iostream>
using namespace std;

int main() {
    int nota;

    cin >> nota;

    if (nota >= 90) {
        cout << "Excelente";
    } else if (nota >= 70) {
        cout << "Bom";
    } else {
        cout << "Precisa melhorar";
    }

    return 0;
}
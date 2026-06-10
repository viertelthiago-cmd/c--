#include <iostream>
using namespace std;

float media(float abacaxi, float banana, float carro) {
    return (abacaxi + banana + carro) / 3;
}

int main() {
    float 10, 20, 30;

    cin >> 10 >> 20 >> 30;

    cout << "Media = " << media(10, 20, 30);

    return 0;
}
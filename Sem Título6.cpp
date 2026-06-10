#include <iostream>
using namespace std;

int main() {
    char opcao;

    cin >> opcao;

    switch (opcao) {
        case 'A':
            cout << "Opcao A selecionada";
            break;

        case 'B':
            cout << "Opcao B selecionada";
            break;

        case 'C':
            cout << "Opcao C selecionada";
            break;

        default:
            cout << "Opcao invalida";
    }

    return 0;
}
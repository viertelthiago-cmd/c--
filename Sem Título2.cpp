#include <iostream>
#include <string> // deve ser importado para usar string;

int main(){
	char opcao; // char só aceita uma letra e é usado com aspas simples

	std::cout << "Informe uma letra: ";
	std:: cin >> opcao;
	
	if(opcao == 'j'|| opcao == 'j'){
		std::cout << "você digitou a letra j" << std::endl;
	} else{
		std::cout << "Opcao inválida";
	}
	std::string nome = ""; //uma string aceita palavra e é usado com aspas duplas
	std::cout << "Informe o  nome"
	std::cin >> nome;
	std::cout << "Nomedigitado: " << nome << std::sndl;
	return 0;
}
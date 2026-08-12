#include <iostream>
#include <string>

int main() {

	std::string nome;
	char resposta;

	std::cout << "Qual o seu nome: ";
	std::cin >> nome;

	do {

		int idade;

		std::cout << "Insira sua idade: ";
		std::cin >> idade;

		if (idade >= 18) {
			std::cout << "Você é maior de idade" << std::endl;
		} else if (idade <= 12) {
			std::cout << "Você é uma criança" << std::endl;
		} else {
			std::cout << "Você é um adolescente" << std::endl;
		}

		std::cout << "Deseja continuar?\nS - Sim\nN - Não";
		std::cin >> resposta;

	} while (resposta == 'S' || resposta == 's');

	return 0;
}
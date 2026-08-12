#include <iostream>

int main() {

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

	return 0;
}
#include <iostream>

int main() {
	double numero1, numero2, soma;

	std::cout << "Insira um número: ";
	std::cin >> numero1;

	std::cout << "Insira um segundo número: ";
	std::cin >> numero2;

	soma = numero1 + numero2;

	std::cout << "A soma entre " << numero1 << " e " << numero2 << " é " << soma << std::endl;

	return 0;
}
#include <iostream>
/*
Altere o programa do exerc�cio 01) para que cada palavra da frase Aprendendo a
programar na Linguagem C++ apare�a em linhas diferentes da seguinte forma:
b:Depois substitua o comando std::endl pelo caractere de escape nova linha \n � New Line
*/
int main() {
	std::cout << "Aprendendo"
		<< "a" << '\n'
		<< "programar" << '\n'
		<< "na" << '\n'
		<< "Linguagem C++" << '\n';
	system("PAUSE");
	return 0;
}
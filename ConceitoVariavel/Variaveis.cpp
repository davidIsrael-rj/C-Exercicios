#include <iostream>
#include <tchar.h>
int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int NumVidas = 5;
	int Pontuacao = 1350;
	std::cout << "*********INICIO DO JOGO************" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;
	std::cout << "Endere�o que NumVidas Ocupa na Mem�ria RAM: " << &NumVidas << std::endl;
	std::cout << "Endere�o que Pontua��o Ocupa na Mem�ria RAM: " << &Pontuacao << std::endl;
	std::cout << "*********************" << std::endl;


	std::cout << "*********DURANTE O JOGO************" << std::endl;
	Pontuacao = Pontuacao + 150;
	NumVidas = NumVidas - 1;

	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;

	system("PAUSE");
	return 0;
}
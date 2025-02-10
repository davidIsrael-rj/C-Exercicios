#include <iostream>
#include <tchar.h>
int main()
{
	//Função que configura o console windows para mostrar acentos
	_tsetlocale(LC_ALL, _T("portuguese"));

	
	int NumVidas = 5;
	int Pontuacao = 1350;
	
	std::cout << "*********INICIO DO JOGO************" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;
	std::cout << "Tamanho da Variável NumVidas: " << sizeof(NumVidas) << " Bytes" << std::endl;
	std::cout << "Tamanho da Variável Pontuação: " << sizeof(Pontuacao) << " Bytes" << std::endl;

	std::cout << "Endereço que NumVidas Ocupa na Memória RAM: " << &NumVidas << std::endl;
	std::cout << "Endereço que Pontuação Ocupa na Memória RAM: " << &Pontuacao << std::endl;
	std::cout << "*********************" << std::endl;


	std::cout << "*********DURANTE O JOGO************" << std::endl;
	Pontuacao = Pontuacao + 150;
	NumVidas = NumVidas - 1;

	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;
	
	system("PAUSE");
	return 0;
}
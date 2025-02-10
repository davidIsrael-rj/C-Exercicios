#include <iostream>
#include <tchar.h>
int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int Numero;
	Numero = 40;

	std::cout << "Valor Número: " << Numero << std::endl;
	std::cout << "Tamanho da Variável Número: " << sizeof(Numero)<<" Bytes" << std::endl;
	std::cout << "Endereço carregado na Memória: " << &Numero << std::endl;
	system("PAUSE");
	return 0;

}
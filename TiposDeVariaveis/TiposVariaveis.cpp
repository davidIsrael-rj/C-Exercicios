#include <iostream>
#include <tchar.h>
int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int Numero;
	Numero = 40;

	std::cout << "Valor N�mero: " << Numero << std::endl;
	std::cout << "Tamanho da Vari�vel N�mero: " << sizeof(Numero)<<" Bytes" << std::endl;
	std::cout << "Endere�o carregado na Mem�ria: " << &Numero << std::endl;
	system("PAUSE");
	return 0;

}
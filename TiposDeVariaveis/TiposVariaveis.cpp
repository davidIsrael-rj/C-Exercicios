#include <iostream>
#include <tchar.h>
int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int Numero;
	float Numero2;


	Numero = 40;
	Numero2 = 55.56f;

	std::cout << "Valor N�mero: " << Numero << std::endl;
	std::cout << "Tamanho da Vari�vel N�mero: " << sizeof(Numero) << " Bytes" << std::endl;
	std::cout << "Endere�o carregado na Mem�ria: " << &Numero << std::endl;
	
	std::cout << "**************************" << std::endl;

	std::cout << "Valor N�mero2: " << Numero2 << std::endl;
	std::cout << "Tamanho da Vari�vel N�mero2: " << sizeof(Numero2) << " Bytes" << std::endl;
	std::cout << "Endere�o carregado na Mem�ria: " << &Numero2 << std::endl;



	system("PAUSE");
	return 0;

}
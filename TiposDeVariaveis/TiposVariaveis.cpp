#include <iostream>
#include <tchar.h>
int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int Numero;
	float Numero2;
	double Numero3;

	Numero = 40;
	Numero2 = 55.56f;
	Numero3 = 45345.904555;
	std::cout << "Valor Número: " << Numero << std::endl;
	std::cout << "Tamanho da Variável Número: " << sizeof(Numero) << " Bytes" << std::endl;
	std::cout << "Endereço carregado na Memória: " << &Numero << std::endl;
	
	std::cout << "**************************" <<std::endl;

	std::cout << "Valor Número2: " << Numero2 << std::endl;
	std::cout << "Tamanho da Variável Número2: " << sizeof(Numero2)<<" Bytes" << std::endl;
	std::cout << "Endereço carregado na Memória: " << &Numero2 << std::endl;

	std::cout << "**************************" << std::endl;

	std::cout << "Valor Número3: " << Numero3 << std::endl;
	std::cout << "Tamanho da Variável Número3: " << sizeof(Numero3) << " Bytes" << std::endl;
	std::cout << "Endereço carregado na Memória: " << &Numero3 << std::endl;

	system("PAUSE");
	return 0;

}
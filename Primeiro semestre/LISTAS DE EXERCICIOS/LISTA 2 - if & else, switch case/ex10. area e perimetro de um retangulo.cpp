//Fa�a o mesmo procedimento do exerc�cio 9, por�m com um ret�ngulo. 
#include <iostream>

using namespace std;

int main (){
	
	float base;
	float altura;
	float area;
	float perimetro;
	
	cout << "Escreva a altura de um retangulo: ";
	cin >> altura;
	
	cout << "Agora digite sua base: ";
	cin >> base;
	
	area = base * altura;
	perimetro = (2 * base) + (2 * altura);
	
	cout << "\nArea: " << area << "    Perimetro: " << perimetro;
	
	return 0;
}

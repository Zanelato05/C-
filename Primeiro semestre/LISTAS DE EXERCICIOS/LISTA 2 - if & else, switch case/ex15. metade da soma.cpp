//Pe�a ao usu�rio tr�s n�meros reais e calcule a metade da soma deles. Com o c�lculo sendo feito em uma linha de c�digo. Exiba o resultado�depois.
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	double num1;
	double num2;
	double num3;
	double resultado;
	
	cout << "D�gite o primeiro n�mero real: ";
	cin >> num1;
	
	cout << "\nD�gite o segundo n�mero real: ";
	cin >> num2;
	
	cout << "\nD�gite o ter�eiro n�mero real: ";
	cin >> num3;
	
	resultado = (num1 + num2 + num3) / 2;
	
	cout << "\nA metade da soma dos n�meros �: " << resultado;
	
}

//Pe�a ao usu�rio tr�s n�meros inteiros, calcule e exiba a soma, subtra��o, divis�o e multiplica��o entre eles. 
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float soma;
	float subtracao;
	float divisao;
	float multiplicacao;
	float num1;
	float num2;
	float num3;
	
	cout << "D�gite o primeiro n�mero inteiro: ";
	cin >> num1;
	
	cout << "\nD�gite o segundo n�mero inteiro: ";
	cin >> num2;
	
	cout << "\nD�gite o ter�eiro n�mero inteiro: ";
	cin >> num3;
	
	soma = num1 + num2 + num3;
	subtracao = num1 - num2 - num3;
	divisao = num1 / num2 / num3;
	multiplicacao = num1 * num2 * num3;
	
	cout << "\nResultado da soma: " << soma;
	cout << "\nResultado da subtra��o: " << subtracao;
	cout << "\nResultado da divis�o: " << divisao;
	cout << "\nResultado da multplica��o: " << multiplicacao;
	
}


//Fa�a um programa que solicita ao usu�rio dois valores inteiros e positivos que ser�o a base e o expoente. O programa deve usar la�o de repeti��o para calcular e escrever o resultado 
//da base elevado ao expoente (pot�ncia).
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int base;
	int expoente;
	int resultado = 1;
	int contador;
	
	
	cout << "Dig�te a base: ";
	cin >> base;
	
	cout << "\nD�gite o seu expoente: ";
	cin >> expoente;
	
	if(base < 0 || expoente < 0){
		
		cout << "\nPor favor, d�gite valores inteiros e pos�tivos!";
		return 0;
	}
	
	for(contador = 0; contador < expoente; contador++){
		
		resultado *= base;
	}
	
	cout << "\nO resultado de " << base << " elevado a " << expoente << " �: " << resultado;

		
		
		
	return 0;
}

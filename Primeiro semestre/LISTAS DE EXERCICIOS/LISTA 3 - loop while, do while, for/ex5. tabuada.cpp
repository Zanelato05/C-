//Fa�a um algoritmo que solicite um valor para o usu�rio, e gere a tabuada deste valor. Por exemplo, se o usu�rio informar o valor 2 dever� ser gerada a tabuada do n�mero 2, 
//variando de 0 a 10.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
		float numero;
		int contador = 0;
		
		cout << "D�gite de qual n�mero voc� quer a tabuada: ";
		cin >> numero;
		cout << "\n";
		
		system("cls");
		
		while(contador <= 10){
		
			cout << numero << "X" << contador<< " = " <<numero * contador << "\n";
			contador++;
		}
		
		cout << "\nEssa � a tabuada do " << numero;
		
	return 0;
}

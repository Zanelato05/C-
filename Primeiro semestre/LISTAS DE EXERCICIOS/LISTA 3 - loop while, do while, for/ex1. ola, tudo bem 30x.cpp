//Fa�a um programa que exiba 30 vezes na tela a mensagem �Ol�, tudo bem?�.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
		int oi = 1;
		
		while(oi <=30){
			cout << "\nOl�, tudo bem?";
			oi++;
		}
		
		cout << "\n\nPrograma finalizado";
		
	return 0;
}

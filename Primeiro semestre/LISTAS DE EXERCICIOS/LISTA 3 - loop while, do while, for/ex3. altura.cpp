//Chico tem 1,50 metros e cresce 2 cent�metros por ano, enquanto Z� tem 1,10 metro e cresce 3 cent�metros por ano. Construa um algoritmo que calcule e imprima quantos anos ser�o
//necess�rios para que Z� seja maior que Chico. 
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	float chico = 1.50;
	float ze = 1.10;
	int anos = 0;
	
	for(chico, ze; chico > ze ; chico+=0.02, ze+=0.03){
			
		anos++;
	
	}
	
	cout << "\nZ� vai precisar de " << anos << " anos para se tornar mais alto que Chico\n\n";
		
	return 0;
}

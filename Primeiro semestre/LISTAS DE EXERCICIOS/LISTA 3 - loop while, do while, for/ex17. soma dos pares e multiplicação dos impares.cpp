//Fa�a um algoritmo que leia dois valores inteiros e informe: a soma dos n�meros pares desse intervalo de n�meros, incluindo os n�meros digitados; 
//a multiplica��o dos n�meros �mpares desse intervalo de n�meros, incluindo os n�meros digitados.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int N1, N2;
	int somapares = 0;
	int multiplicacaoimpares = 1;
	
		cout << "Vamos trabalhor com o intervalo entre dois n�meros inteiros!!!\n\n";
		cout << "D�gite o primeiro valor inteiro: ";
		cin >> N1;
		
		cout << "\nD�gite o segundo valor inteiro: ";
		cin >> N2;
		
		system("cls");
		
		if(N1 < N2){
			
		while(N1 <= N2){
			
			if(N1 % 2 == 0){
				
				somapares = somapares + N1;
				N1 = N1 + 1;
				
			}else if(N1 % 2 != 0){
				
				multiplicacaoimpares = multiplicacaoimpares * N1;
				N1 = N1 + 1;
				
			}
		}
			
		}else if(N1 > N2){
			
			while(N1 >= N2){
			
			if(N1 % 2 == 0){
				
				somapares = somapares + N1;
				N1 = N1 - 1;
				
			}else if(N1 % 2 != 0){
				
				multiplicacaoimpares = multiplicacaoimpares * N1;
				N1 = N1 - 1;
				
			}
		}
					
		}
		
		cout << "A soma dos n�meros pares foi de " << somapares << ". J� a multiplica��o dos n�meros impares � de " << multiplicacaoimpares;
		
	return 0;
}

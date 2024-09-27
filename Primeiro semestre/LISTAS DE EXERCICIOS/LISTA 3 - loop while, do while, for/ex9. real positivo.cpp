//Fa�a um programa que solicita ao usu�rio um n�mero real positivo. Verifique se o n�mero � realmente positivo, e em caso contr�rio solicite ao usu�rio digitar novamente
//(este processo pode se repetir in�meras vezes e � chamado de consist�ncia, pois garante que o n�mero ser� v�lido ap�s a entrada de dados). Sa�das: 
//� Pedido ao usu�rio = �Digite um n�mero real positivo�; 
//� Caso n�mero valido = �O n�mero digitado � valido�; 
//� Caso n�mero invalido = �N�mero invalido, tente novamente�.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int n;
	int contador = 0;
	
	do{
		
		cout << "D�gite um n�mero real pos�tivo: ";
		cin >> n;
		contador ++;
		
		if(n > 0){
			
			cout << "\nO n�mero d�gitado � valido!\n\n\n\n";
			system("pause");
			system("cls");
			
		}else{
			
			cout << "\nN�mero inv�lido, tente novamente!\n\n\n\n";
			system("pause");
			system("cls");
			
		}
		
	}while(contador != 0);
		
	return 0;
}

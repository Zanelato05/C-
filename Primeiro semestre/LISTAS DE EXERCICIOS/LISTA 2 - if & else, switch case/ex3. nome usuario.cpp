//Fa�a um programa que pe�a o nome do usu�rio e exiba na tela: �Ol�, [nome do usu�rio]!�
#include <iostream>

using namespace std;

int main(){
	
string nome;

cout << "Digite seu nome: ";
getline (cin,nome);

cout << "Ola, " << nome << endl;
	
	return 0;
}

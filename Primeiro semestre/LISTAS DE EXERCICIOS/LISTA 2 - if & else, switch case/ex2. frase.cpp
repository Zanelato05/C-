//Fa�a um programa que pe�a uma frase ao usu�rio e exiba no console. 
#include <iostream>

using namespace std;

int main(){
	
string frase;

cout << "Digite uma frase: ";
getline (cin, frase);

cout << frase;

return 0;
}

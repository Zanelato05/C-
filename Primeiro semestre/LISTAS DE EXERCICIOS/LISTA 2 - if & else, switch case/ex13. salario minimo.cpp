//Fazer um programa que leia o valor do sal�rio-m�nimo e o valor do sal�rio de uma pessoa. Calcule e imprima quantos sal�rios-m�nimos essa pessoa ganha. 
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float salariominimo;
	float salariopessoal;
	float quantoganha;
	
	cout << "\nQual o valor do seu s�lario?: ";
	cin >> salariopessoal;
	
	salariominimo = 1412.00;
	
	quantoganha = salariopessoal / salariominimo;
	
	if(quantoganha < 1){
		cout << "\nVoc� recebe menos de um sal�rio min�mo";
	}
	
	else if(quantoganha > 1 && quantoganha < 2){
		cout << "\nVoc� ganha entre um a dois sal�rios min�mos";
	}
	
	else if(quantoganha > 2 && quantoganha < 3){
		cout << "\nVoc� ganha entre dois a tr�s sal�rios min�mos";
	}
	
	else if(quantoganha > 3 && quantoganha < 4){
		cout << "\nVoc� ganha entre tr�s a quatro sal�rios min�mos";
	}
	
	else if(quantoganha > 4 && quantoganha < 5){
		cout << "\nVoc� ganha entre quatro a cinco sal�rios min�mos";
	}
	
	else if(quantoganha > 5 && quantoganha < 6){
		cout << "\nVoc� ganha entre cinco a seis sal�rios min�mos";
	}
	
	else if(quantoganha > 6 && quantoganha < 7){
		cout << "\nVoc� ganha entre seis a sete sal�rios min�mos";
	}
	
	else if(quantoganha == 1){
		cout << "\nVoc� ganha um sal�rio min�mo";
	}
	
	else if(quantoganha == 2){
		cout << "\nVoc� ganha dois sal�rios min�mos";
	}
	
	else if(quantoganha == 3){
		cout << "\nVoc� ganha tr�s sal�rios min�mos";
	}
	
	else if(quantoganha == 4){
		cout << "\nVoc� ganha quatro sal�rios min�mos";
	}
	
	else if(quantoganha == 5){
		cout << "\nVoc� ganha cinco sal�rios min�mos";
	}
	
	else if(quantoganha == 6){
		cout << "\nVoc� ganha seis sal�rios min�mos";
	}
	
	else if(quantoganha == 7){
		cout << "\nVoc� ganha sete sal�rios min�mos";
	}
	
	else{
		cout << "\nVoc� ganha mais de sete sal�rios min�mos";
	}
		
	return 0;
}


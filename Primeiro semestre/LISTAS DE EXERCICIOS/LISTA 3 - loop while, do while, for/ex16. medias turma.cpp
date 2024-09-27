//Fa�a um programa que solicita ao usu�rio o n�mero de alunos de uma turma e o n�mero de provas realizadas. A seguir o programa deve para cada aluno: 
//a) Solicitar o nome do aluno 
//b) Para cada prova realizada solicita a nota deste aluno 
//c) Exibir o nome e a m�dia aritm�tica das notas deste aluno
//Pedido para a quantidade de alunos = �Digite a quantidade de alunos na sala:�; 
//Pedido para a quantidade de provas realizadas = �Digite a quantidade de provas aplicadas:� 
//Para cada aluno = �Digite o nome do aluno:�;
//Para cada prova do aluno = �Digite a nota da prova:�; 
//Ap�s cada pedido de nome e nota ser� exibido o nome do aluno e m�dia aritm�tica; 
//Ao fim ser� exibido = �Aluno com melhor m�dia: �, seguido do nome do aluno com melhor m�dia.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int provasrealizadas;
	int alunosnaturma;
	int contadoralunos;
	int contadorprovas = 1;
	double media = 0;
	double melhormedia = 0;
	char nome;
	double notaprova = 0;
	double verificadordemedia = 0;
	char melhoraluno;
	
	cout << "Digite a quantidade de alunos na sala: ";
	cin >> alunosnaturma;
	
	cout << "\nDigite a quantidade de provas aplicadas: ";
	cin >> provasrealizadas;
	
	cout << "\n\n\n";
	
	system("cls");
	
	while(contadoralunos < alunosnaturma){
		
		
		cout << "Digite o nome do aluno: ";
		cin >> nome;
		
		cout << "\n";
		
		media = 0;
		notaprova = 0;
		verificadordemedia = 0;
		contadorprovas = 1;
		
		while(contadorprovas < provasrealizadas + 1){
			
			
			cout << "\nNota da prova " << contadorprovas << ": ";
			cin >> notaprova;
			
			media = media + notaprova;
			verificadordemedia = media / provasrealizadas;
			
			contadorprovas++;
			
		}
		
		cout << "\n\n\nO aluno " << nome << " ficou com m�dia " << verificadordemedia;	
		
		cout << "\n\n\n\n\n\n";
		
		system("pause");
		system("cls");	
		
		if(verificadordemedia > melhormedia){
			
			melhormedia = verificadordemedia;
			melhoraluno = nome;
			
		}
		
		contadoralunos++;
		
	}
	
	cout << "Aluno com melhor m�dia foi " << melhoraluno << " com " << melhormedia;
		
	return 0;
}

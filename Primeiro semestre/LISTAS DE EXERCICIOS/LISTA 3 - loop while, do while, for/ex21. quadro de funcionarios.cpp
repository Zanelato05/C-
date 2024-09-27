/*Uma empresa contratou-o para desenvolver um software para realizar a sele��o de pessoal para seu quadro de funcion�rios. O software deve solicitar os seguintes dados dos candidatos: 
� N�mero de inscri��o; 
� Idade; 
� Sexo (M ou F); 
� Possui experi�ncia anterior (S ou N) 
A entrada dos dados deve ser encerrada quando o n�mero de inscri��o for igual a -1. 
N�o � necess�rio fazer a consist�ncia de nenhuma das informa��es digitadas. 
A empresa solicitou que as seguintes informa��es fossem exibidas na tela ap�s a entrada dos dados: 
a) Quantidade de candidatos do sexo feminino; 
b) Idade m�dia dos homens que apresentam experi�ncia anterior; 
c) Porcentagem dos homens com mais de 45 anos; 
d) Quantidade de mulheres com idade inferior a 35 anos e com experi�ncia anterior; 
e) Entre as mulheres que j� tem experi�ncia anterior, a que possui menor idade.*/
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");

	int letraA;
	int letraB;
	int letraC;
	int letraD;
	int letraE;
	
	int inscricao = 1;
	int idade;
	char sexo;
	char experiencia;
	
	int contF = 0;
	int contM = 0;
	int contS = 0;
	int contN = 0;
	int somaidadeM = 0;
	int contMS;
	int contM45;
	int contF35S;
	int menoridadeMS;
	
	while(inscricao != -1){
	
	cout << "D�gite o n�mero da sua inscri��o: ";
	cin >> inscricao;
	
	if(inscricao != -1){
	
	cout << "\nD�gite a sua idade: ";
	cin >> idade;
	
	cout << "\nQual seu g�nero 1- Masculino  2- Feminino: ";
	cin >> sexo;
	
	if(sexo == 2){
		contF++;
		letraA = contF;
	}else if(sexo == 1){
		contM++;
	}
	
	cout << "\nPossu� experi�ncia anterior 1- Sim  2- N�o: ";
	cin >> experiencia;
	
	if(sexo = 1 && experiencia == 1){
		somaidadeM += idade;
		contMS++;
		letraB = somaidadeM/contMS;
	}
	
	if(sexo == 1 && idade > 45){
		contM45++;
		
	}
	
	if(sexo == 2 && idade < 35 && experiencia == 1){
		contF35S++;
		letraD = contF35S;
	}
	
	if(sexo == 2 && experiencia == 1){
		
		if(idade < menoridadeMS){
			
			menoridadeMS = idade;
			letraE = inscricao;
		}
	}
	letraC = ((contM45*100) / contM);
	

	system("cls");
}
}
	
	cout << "a) Quantidade de candidatos do sexo feminino " << letraA;
	cout << "\n\nb) Idade m�dia dos homens que apresentam experi�ncia anterior " << letraB;
	cout << "\n\nc) Porcentagem dos homens com mais de 45 anos " << letraC;
	cout << "\n\nd) Quantidade de mulheres com idade inferior a 35 anos e com experi�ncia anterior " << letraD;
	cout << "\n\ne) Entre as mulheres que j� tem experi�ncia anterior, a que possui menor idade � a de matricula n�mero " << letraE << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	
	return 0;
	
}

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
#include <time.h>
#include <cmath>

using namespace std;

double obterJogadaUm(){
	
  	int jogadaUm = (rand() % 6) + 1;
  	return jogadaUm;
}

double obterJogadaDois(int jogadaUm){
	
  int jogadaDois;
	
  	do{
  	jogadaDois = (rand() % 6) + 1;
}while(jogadaDois == jogadaUm);
  	return jogadaDois;
}

int jogarNovamente(int jogarnovamente){
	
	cout << "\n\n\n\nDeseja jogar novamente?" << endl;
    cout << "\n0 - Sair" << endl;
    cout << "1 - Jogar novamente" << endl; 
    cout << "\nDigite aqui: ";
    cin >> jogarnovamente;
    return jogarnovamente;	
}



int main(){ 

	setlocale(LC_ALL, "portuguese");

	int jogar, jogadaum, jogadadois, jogarnovamente;
  do{
  	
  	system("cls");

do{//fun��o primeira jogada
	system("cls");
    cout << "Primeiro jogador, digite '1' para arremessar o dado: ";
    cin >> jogar;
}while(jogar != 1);
    
    jogadaum = obterJogadaUm(); //fun��o jogada do primeiro dado
    cout << "\nCaiu o n�mero " << jogadaum << endl;
    
do{//fun��o segunda jogada
    cout << "\n\nSegundo jogador, digite '1' para arremessar o dado: ";
    cin >> jogar;
}while(jogar != 1);
    
    jogadadois = obterJogadaDois(jogadaum); //fun��o jogada do segundo dado
    cout << "\nCaiu o n�mero " << jogadadois << endl;
    
    if(jogadaum > jogadadois){ //fun��o de verifica��o
      cout << "\n\nPRIMEIRO JOGADOR VENCEU, PARAB�NS!" << endl;
    }else if(jogadadois > jogadaum){
      cout << "\n\nSEGUNDO JOGADOR VENCEU, PARAB�NS!" << endl;
    }
    
    jogarnovamente = jogarNovamente(jogarnovamente);//fun��o jogar novamente
    
  }while(jogarnovamente == 1);

  	return 0;
}

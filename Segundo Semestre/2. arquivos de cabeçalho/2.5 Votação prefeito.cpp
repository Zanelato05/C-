#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
#include <time.h>
#include <cmath>

using namespace std;

double obterVoto(){
  int voto;
  cout << "\n\nQual candidato voc� deseja votar: ";
  cin >> voto;
  return voto;
}

int obterVerificacao(int votoCarlos, int votoOsmar, int votoRobison){
	
	if(votoCarlos > votoOsmar && votoCarlos > votoRobison){
    cout << "\n\nCarlos Chiodini � o novo prefeito de Itaja�!";
 	}else if(votoOsmar > votoCarlos && votoOsmar > votoRobison){
    cout << "\n\nOsmar Teixeira � o novo prefeito de Itaja�!";
  	}if(votoRobison > votoOsmar && votoRobison > votoCarlos){
    cout << "\n\nRobison Coelho � o novo prefeito de Itaja�!";
  	}
}

int main(){
	
	setlocale(LC_ALL, "portuguese");

 int i, voto, votoCarlos=0, votoOsmar=0, votoRobison=0, resultado;
 
  cout << "**CANDIDATOS A PREFEITO DE ITAJA�**";
  cout << "\n\nCarlos Chiodini - 1570" << endl;
  cout << "Osmar Teixeira - 77777" << endl;
  cout << "Robison Coelho - 2354" << endl;
  
  
  for(i=1; i<6; i++){
    voto = obterVoto();
    if(voto == 1570){
      votoCarlos++;
    }else if(voto == 77777){
      votoOsmar++;
    }else if(voto == 2354){
      votoRobison++;
    }
    else{
      cout << "\n\nNenhum candidato corresponde a esse n�mero." << endl;
      i--;
    }
  }  
  
 	resultado = obterVerificacao(votoCarlos, votoOsmar, votoRobison);
 	
  return 0;
}

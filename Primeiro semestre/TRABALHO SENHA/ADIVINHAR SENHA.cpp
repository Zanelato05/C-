#include <iostream>
#include <locale.h>
#include <time.h>//Biblioteca de tempo/hor�rio.
#include <stdlib.h>

using namespace std;

int main (){//�NICIO.
	
	setlocale(LC_ALL, "portuguese");//Caracteres especias e assentos podem ser usados.
	
	
	int n1, n2, n3, n4, n5, senha;
	int a1, a2, a3, a4, a5;
	int acertounumeroelocal = 0;
	int acertounumero = 0;
	int vid; //Tentativas modo f�cil.
	int vidas; //Tentativas modo m�dio
	int vida; //Tentativas modo d�ficil.
	float menu;
	float dificuldade;
	int voltar;
	
	do{
			int vid = 8;//N�vel f�cil recebe oito tentativas
			int vidas = 10;//N�vel m�dio recebe dez tentativas
			int vida = 12;//N�vel dif�cil recebe doze tentativas
			int acertounumeroelocal = 0;
			int acertounumero = 0;
			
	system("cls");
	
	do{ //Apresenta��o do jogo e menu principal 
		
		cout << "                                           SEJA BEM-VINDO AO JOGO DA SENHA!\n\n";
		cout << "                   Seu objetivo � tentar acertar uma senha aleat�ria em um certo n�mero de tentativas.\n\n\n\n\n";
		cout << "                                                     MENU INICIAL\n\n";
		cout << "                                             1- Jogar   2- Sobre  3- Fim: ";
		cin >> menu;
		system("cls");
		
	if(menu == 1){//Pula pra escolha da dificuldade.
		break;
		
	}else if(menu == 2){//A proposta � apresentada.
		cout << "\nEste � o jogo MASTER MIND, conhecido nacionalmente como o JOGO DA SENHA.\nFoi o jogo de tabuleiro mais bem-sucedido dos anos 70.\n";
		cout << "O objetivo principal do jogador era descobrir a ordem correta das cores.\n";
		cout << "Foi inspirado nisso que o professor de 'Algoritmos e programa��o' Eduardo Alvez da Silva prop�s este trabalho.\nNo entanto, diferentemente da vers�o original, ";
		cout << "hoje vamos trabalhar com n�meros.\nVoc� ter� que desvendar qual � a senha do jogo atrav�s de dicas que ser�o exibidas no console.\n\n";
		cout << "Produzido por: (Lucas Zanelato, Rafael Marques e Lucas Francelino em Maio de 2024).\n\n";
		system ("pause");
		system("cls");
		
	}else if(menu == 3){//O jogo � encerrado.
		cout << "Obrigado por participar at� aqui!";
		return 0;
		
	}else{
		cout << "N�mero digitado inv�lido. Tente novamente!\n\n";
		system ("pause");
		system("cls");
		
	}
	}while(menu == 2 || menu != 1 || menu != 3); //Garanto que o usu�rio escolha uma op��o v�lida, e que s� saia do loop quando clicar em 'jogar'.
	system("cls");
	
	while(dificuldade != 1 || dificuldade != 2 || dificuldade != 3){
	
	cout << "                                                ESCOLHA A DIFICULDADE\n\n" << "                                          1- F�cil  2- M�dio  3- Dif�cil: ";
	cin >> dificuldade;
	system("cls");
		
	if(dificuldade == 1){
	break;
		
	}else if(dificuldade == 2){
	break;
		
	}else if(dificuldade == 3){
	break;
		
	}else{
	cout << "Valor inv�lido. Tente novamente!\n\n";
	system ("pause");
	system("cls");
		
	}
	}//Uso esse loop pra garantir que o usu�rio selecione um valor v�lido e que escolha a dificuldade desejada.
    
    cout << "REGRA: � v�lido somente n�meros entre 1 e 6, e nenhum d�gito pode se repetir!\n\n\n"; //Apresento a regra.
    
    if(dificuldade == 2){//Entra no n�vel 'm�dio' se o usu�rio tiver escolhido a op��o '2'. 
		
    	srand(time(NULL));

    a1 = (rand() % 6) + 1;

    do {
        a2 = (rand() % 6) + 1;

    } while(a2 == a1);
    
    do {
        a3 = (rand() % 6) + 1;

    } while(a3 == a2 || a3 == a1);
    
    do {
        a4 = (rand() % 6) + 1;

    } while(a4 == a3 || a4 == a2 || a4 == a1);//Gero uma senha alet�ria de '4' d�gitos com n�meros entre 1 e 6 e garanto que os n�meros n�o se repitam.
    
    //	cout << a1 << a2 << a3 << a4;
    	cout << "Nesse n�vel voc� precisa descobrir uma senha de 4 d�gitos em apenas 10 tentativas. BOA SORTE!";//Falo o modo de jogo dessa dificuldade.
    	cout << "\n\n\n\n";
		system("pause");
		system("cls");
    
   do {
   	
   	
        if (vidas > 0) {
			
			do{
	
            cout << "D�gite a senha: ";
            cin >> senha;
    
            n1 = senha / 1000;//Transformo o primeiro valor d�gitado em uma v�riavel.
            n2 = (senha % 1000) / 100;//Transformo o segundo valor d�gitado em uma v�riavel.
            n3 = (senha % 100) / 10;//Transformo o ter�eiro valor d�gitado em uma v�riavel.  
            n4 = senha % 10;//Transformo o quarto valor d�gitado em uma v�riavel.
            //Uso isso para que n�o seja necess�rio o usu�rio digitar '4' valores, sendo assim ele d�gita um valor �nico ex: 1234.
            
            if(n1 == n2 || n1 == n3 || n1 == n4 || n2 == n3 || n2 == n4 || n3 == n4){
            	cout << "\nATEN��O: senha inv�lida. S�o permitidos apenas 4 d�gitos por tentativa, e os n�meros aceitos est�o entre 1 e 6, os d�gitos n�o podem se repetir. Tente novamente!\n\n";
            	system("pause");
    			cout << "\n\n";//Garanto que n�meros repetidos n�o sejam aceitos.
    			
			}else if(n1 < 1 || n1 > 6 || n2 < 1 || n2 > 6 || n3 < 1 || n3 > 6 || n4 < 1 || n4 > 6){
				cout << "\nATEN��O: senha inv�lida. S�o permitidos apenas 4 d�gitos por tentativa, e os n�meros aceitos est�o entre 1 e 6, os d�gitos n�o podem se repetir. Tente novamente!\n\n";
				system("pause");
				cout << "\n\n";//Garanto que n�meros menores que '1' ou maiores que '6' n�o sejam aceitos.
   				
			}
			
		}while(n1 == n2 || n1 == n3 || n1 == n4 || n2 == n3 || n2 == n4 || n3 == n4 || n1 < 1 || n1 > 6 || n2 < 1 || n2 > 6 || n3 < 1 || n3 > 6 || n4 < 1 || n4 > 6 );
		//Garanto que n�meros repetidos e n�meros menores que '1' ou maiores que '6' n�o sejam aceitos.
		
		//A parte principal do programa, o jogo acontece aqui, � aonde as compara��es s�o feitas.
            if (n1 == a1) {
                acertounumeroelocal++;
            } else if (n1 == a2 || n1 == a3 || n1 == a4) {
                acertounumero++;
            }
            
            if (n2 == a2) {
                acertounumeroelocal++;
            } else if (n2 == a1 || n2 == a3 || n2 == a4) {
                acertounumero++;
            }
            
            if (n3 == a3) {
                acertounumeroelocal++;
            } else if (n3 == a1 || n3 == a2 || n3 == a4) {
                acertounumero++;
            }
 			if (n4 == a4) {
                acertounumeroelocal++;
            } else if (n4 == a1 || n4 == a2 || n4 == a3) {
                acertounumero++;
            }
            
            cout << "\nAcertou " << acertounumeroelocal << " n�meros no lugar certo" << endl;//Mostro quantos n�meros est�o certos e no lugar certo.
            cout << "Acertou " << acertounumero << " n�meros no lugar errado\n\n";//Mostro quantos n�meros est�o certos e no lugar errado.
            
            vidas = vidas - 1;
            
            cout << "RESTAM " << vidas << " TENTATIVAS\n\n\n\n";//Indico para o usu�rio em qual tentativa ele est�.
            
       		 } if(n1 == a1 && n2 == a2 && n3 == a3 && n4 == a4){
       		 	cout << "PARAB�NS VOC� DESCOBRIU A SENHA!\n\n";//Quando o usu�rio acertar a senha o loop � interrompido e a mensagem de vit�ria � exibida.
       		 	break;
				}if(vidas == 0){
					cout << "VOC� PERDEU!\nsenha era: " << a1 << a2 << a3 << a4;//Se a senha n�o for acertada pelo usu�rio a mensagem de derrota � exibida.
					break;//Se n�o acertar a senha o programa � finalizado.
				}
        
        acertounumero = 0;//Preciso zerar os contadores para que eles n�o fiquem somando.
        acertounumeroelocal = 0;//Preciso zerar os contadores para que eles n�o fiquem somando.
        
    }while(n1 != a1 || n2 != a2 || n3 != a3 || n4 != a4);//O loop s� acaba quando a senha for acertada ou quando as tentativas acabam.
}
    
    if(dificuldade == 1){//Entra no n�vel 'f�cil' se o usu�rio tiver escolhido a op��o '1'. 
    	
    	srand(time(NULL));

    a1 = (rand() % 6) + 1;

    do {
        a2 = (rand() % 6) + 1;

    } while(a2 == a1);
    
    do {
        a3 = (rand() % 6) + 1;

    } while(a3 == a2 || a3 == a1);//Gero uma senha alet�ria de '3' d�gitos com n�meros entre 1 e 6 e garanto que os n�meros n�o se repitam.
    
        // cout << a1 << a2 << a3;	
    	cout << "Nesse n�vel voc� precisa descobrir uma senha de 3 d�gitos em apenas 8 tentativas. BOA SORTE!";//Falo o modo de jogo dessa dificuldade.
    	cout << "\n\n\n";
		system("pause");
		system("cls");
    	
	do {
   	
        if (vid > 0) {
			
			do{
			 
            cout << "D�gite a senha: ";
            cin >> senha;
       
            n1 =  senha / 100;//Transformo o primeiro valor d�gitado em uma v�riavel.
            n2 = (senha % 100) / 10;//Transformo o segundo valor d�gitado em uma v�riavel.
            n3 = senha % 10;//Transformo o ter�eiro valor d�gitado em uma v�riavel.
            //Uso isso para que n�o seja necess�rio o usu�rio digitar '3' valores, sendo assim ele d�gita um valor �nico ex: 123.
            
            if(n1 == n2 || n1 == n3 || n2 == n3){
            	cout << "\nSenha inv�lida. S�o permitidos apenas 3 d�gitos por tentativa, e os n�meros aceitos est�o entre 1 e 6, os d�gitos n�o podem se repetir. Tente novamente!\n\n";
            	system("pause");
    			cout << "\n\n";//Garanto que n�meros repetidos n�o sejam aceitos.
    			
			}else if(n1 < 1 || n1 > 6 || n2 < 1 || n2 > 6 || n3 < 1 || n3 > 6 ){
				cout << "\nSenha inv�lida. S�o permitidos apenas 3 d�gitos por tentativa, e os n�meros aceitos est�o entre 1 e 6, os d�gitos n�o podem se repetir. Tente novamente!\n\n";
				system("pause");
				cout << "\n\n";//Garanto que n�meros menores que '1' ou maiores que '6' n�o sejam aceitos.
   				
			}
			
		}while(n1 == n2 || n1 == n3 || n2 == n3 || n1 < 1 || n1 > 6 || n2 < 1 || n2 > 6 || n3 < 1 || n3 > 6 );
    	//Garanto que n�meros repetidos e n�meros menores que '1' ou maiores que '6' n�o sejam aceitos.
    	
    	//A parte principal do programa, o jogo acontece aqui, � aonde as compara��es s�o feitas.
            if (n1 == a1) {
                acertounumeroelocal++;
            } else if (n1 == a2 || n1 == a3 ) {
                acertounumero++;
            }
            
            if (n2 == a2) {
                acertounumeroelocal++;
            } else if (n2 == a1 || n2 == a3 ) {
                acertounumero++;
            }
            
            if (n3 == a3) {
                acertounumeroelocal++;
            } else if (n3 == a1 || n3 == a2 ) {
                acertounumero++;
            }
            
            cout << "\nAcertou " << acertounumeroelocal << " n�meros no lugar certo" << endl;//Mostro quantos n�meros est�o certos e no lugar certo.
            cout << "Acertou " << acertounumero << " n�meros no lugar errado\n\n";//Mostro quantos n�meros est�o certos e no lugar errado.
            
            vid = vid - 1;
            
            cout << "RESTAM " << vid << " TENTATIVAS\n\n\n\n";//Indico para o usu�rio em qual tentativa ele est�.
            
       		 } if(n1 == a1 && n2 == a2 && n3 == a3){
       		 	cout << "PARAB�NS VOC� DESCOBRIU A SENHA!\n\n";//Quando o usu�rio acertar a senha o loop � interrompido e a mensagem de vit�ria � exibida.
       		 	break;
				}if(vid == 0){
					cout << "VOC� PERDEU!\nsenha era: " << a1 << a2 << a3;//Se a senha n�o for acertada pelo usu�rio a mensagem de derrota � exibida.
					break;//Se n�o acertar a senha o programa � finalizado.
				}
        
        acertounumero = 0;//Preciso zerar os contadores para que eles n�o fiquem somando.
        acertounumeroelocal = 0;//Preciso zerar os contadores para que eles n�o fiquem somando.
        
    }while(n1 != a1 || n2 != a2 || n3 != a3 );//O loop s� acaba quando a senha for acertada ou quando as tentativas acabam.
}
    if(dificuldade == 3){//Entra no n�vel 'dif�cil' se o usu�rio tiver escolhido a op��o '3'. 
    	
    	srand(time(NULL));

    a1 = (rand() % 6) + 1;

    do {
        a2 = (rand() % 6) + 1;

    } while(a2 == a1);
    
    do {
        a3 = (rand() % 6) + 1;

    } while(a3 == a2 || a3 == a1);
    
    do {
        a4 = (rand() % 6) + 1;

    } while(a4 == a3 || a4 == a2 || a4 == a1);
    
    do {
        a5 = (rand() % 6) + 1;

    } while(a5 == a1 || a5 == a2 || a5 == a3 || a5 == a4);//Gero uma senha alet�ria de '5' d�gitos com n�meros entre 1 e 6 e garanto que os n�meros n�o se repitam.
    
    
    //	cout << a1 << a2 << a3 << a4 << a5;
    	cout << "Nesse n�vel voc� precisa descobrir uma senha de 5 d�gitos em apenas 12 tentativas. BOA SORTE!";//Falo o modo de jogo dessa dificuldade.
    	cout << "\n\n\n";
		system("pause");
		system("cls");
	
	do {
   	
        if (vida > 0) {
			
			do{
	
            cout << "D�gite a senha: ";
            cin >> senha;
    
    		n1 = senha / 10000;//Transformo o primeiro valor d�gitado em uma v�riavel.
            n2 = (senha % 10000) / 1000;//Transformo o segundo valor d�gitado em uma v�riavel.
            n3 = (senha % 1000) / 100;//Transformo o ter�eiro valor d�gitado em uma v�riavel.
            n4 = (senha % 100) / 10;//Transformo o quarto valor d�gitado em uma v�riavel.
            n5 = senha % 10;//Transformo o quinto valor d�gitado em uma v�riavel.
            //Uso isso para que n�o seja necess�rio o usu�rio digitar '5' valores, sendo assim ele d�gita um valor �nico ex: 12345.
            
            if(n1 == n2 || n1 == n3 || n1 == n4 || n1 == n5|| n2 == n3 || n2 == n4 || n2 == n5|| n3 == n4 || n3 == n5 || n4 == n5){
            	cout << "\nSenha inv�lida. S�o permitidos apenas 5 d�gitos por tentativa, e os n�meros aceitos est�o entre 1 e 6, os d�gitos n�o podem se repetir. Tente novamente!\n\n";
				system("pause");
				cout << "\n\n";//Garanto que n�meros repetidos n�o sejam aceitos.
    			
			}else if(n1 < 1 || n1 > 6 || n2 < 1 || n2 > 6 || n3 < 1 || n3 > 6 || n4 < 1 || n4 > 6 || n5 < 1 || n5 > 6){
				cout << "\nSenha inv�lida. S�o permitidos apenas 5 d�gitos por tentativa, e os n�meros aceitos est�o entre 1 e 6, os d�gitos n�o podem se repetir. Tente novamente!\n\n";
				system("pause");
				cout << "\n\n";//Garanto que n�meros menores que '1' ou maiores que '6' n�o sejam aceitos.
   				
			}
			
		}while(n1 == n2 || n1 == n3 || n1 == n4 || n1 == n5|| n2 == n3 || n2 == n4 || n2 == n5|| n3 == n4 || n3 == n5 || n4 == n5 || n1 < 1 || n1 > 6 || n2 < 1 || n2 > 6 || n3 < 1 || n3 > 6 || n4 < 1 || n4 > 6 || n5 < 1 || n5 > 6 );
    	//Garanto que n�meros repetidos e n�meros menores que '1' ou maiores que '6' n�o sejam aceitos.
    	
    	//A parte principal do programa, o jogo acontece aqui, � aonde as compara��es s�o feitas.
            if (n1 == a1) {
                acertounumeroelocal++;
            } else if (n1 == a2 || n1 == a3 || n1 == a4 || n1 == a5) {
                acertounumero++;
            }
            if (n2 == a2) {
                acertounumeroelocal++;
            } else if (n2 == a1 || n2 == a3 || n2 == a4 || n2 == a5) {
                acertounumero++;
            }
            if (n3 == a3) {
                acertounumeroelocal++;
            } else if (n3 == a1 || n3 == a2 || n3 == a4 || n3 == a5) {
                acertounumero++;
            }
 			if (n4 == a4) {
                acertounumeroelocal++;
            } else if (n4 == a1 || n4 == a2 || n4 == a3 || n4 == a5) {
                acertounumero++;
            }
            if (n5 == a5) {
                acertounumeroelocal++;
            } else if (n5 == a1 || n5 == a2 || n5 == a3 || n5 == a4) {
                acertounumero++;
            }
            
            cout << "\nAcertou " << acertounumeroelocal << " n�meros no lugar certo" << endl;//Mostro quantos n�meros est�o certos e no lugar certo.
            cout << "Acertou " << acertounumero << " n�meros no lugar errado\n\n";//Mostro quantos n�meros est�o certos e no lugar errado.
            
            vida = vida - 1;
            
            cout << "RESTAM " << vida << " TENTATIVAS\n\n\n\n";//Indico para o usu�rio em qual tentativa ele est�.
            
       		 } if(n1 == a1 && n2 == a2 && n3 == a3 && n4 == a4 && n5 == a5){
       		 	cout << "PARAB�NS VOC� DESCOBRIU A SENHA!\n\n";//Quando o usu�rio acertar a senha o loop � interrompido e a mensagem de vit�ria � exibida.
       		 	break;
				}if(vida == 0){
					cout << "VOC� PERDEU!\nsenha era: " << a1 << a2 << a3 << a4 << a5;//Se a senha n�o for acertada pelo usu�rio a mensagem de derrota � exibida.
					break;//Se n�o acertar a senha o programa � finalizado.
				}
        
        acertounumero = 0;//Preciso zerar os contadores para que eles n�o fiquem somando.
        acertounumeroelocal = 0;//Preciso zerar os contadores para que eles n�o fiquem somando.
        
    }while(n1 != a1 || n2 != a2 || n3 != a3 || n4 != a4 || n5 != a5);//O loop s� acaba quando a senha for acertada ou quando as tentativas acabam.
}
	do{
	
	cout << "\n\nDeseja voltar ao menu principal?\n ";
    cout << "\n1- Sim   2- N�o: " ;
    cin >> voltar;
    
    if(voltar == 1){
    	break;
	}else if(voltar == 2){
		return 0;
	}else{
		cout << "\nN�mero inv�lido. Tente novamente!\n\n";
		system("pause");
		system("cls");
	}
	
	}while(voltar != 1 || voltar == 2);//Garanto que s� 1 & 2 executem a��es.
    
}while(voltar != 2);//Se o usu�rio acertar ou errar a senha ele tem a op��o de voltar ao menu principal.

	return 0;//FIM.
	   
}


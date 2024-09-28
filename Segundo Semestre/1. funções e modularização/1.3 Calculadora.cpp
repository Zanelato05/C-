#include <iostream>
#include <cmath>  
#include <locale.h>
#include <cstdlib>
#include <string>
#include <time.h>
using namespace std;

int menu(){
	
    int opcao;
    do{
    cout << "MENU DE SELE??O\n" << endl;
    cout << "1 - somar" << endl;
    cout << "2 - subtrair" << endl;
    cout << "3 - dividir" << endl;
    cout << "4 - multiplicar" << endl;
    cout << "5 - potencia??o" << endl;
    cout << "6 - fatorial" << endl;
    cout << "7 - m?dulo" << endl;
    cout << "8 - raiz quadrada" << endl;
    cout << "0 - Sair" << endl;
    cout << "\n\nDigite a opc?o desejada: ";
    cin >> opcao;
    system("cls");
}while(opcao < 0 || opcao > 8);
    return opcao;
}
double obterNumero(string mensagem){
    double numero;
    cout << mensagem;
    cin >> numero;
    return numero;
}
double somar(double num1, double num2){
    double resultado = num1 + num2;
    return resultado;
}
double subtrair(double num1, double num2) {
    double resultado = num1 - num2;
    return resultado;
}
double dividir(double num1, double num2) {
    double resultado = 0;
    if(num2 == 0){
        cout << "\nO divisor n?o pode ser zero" << endl;        
    }else{
        resultado = num1 / num2;
    }
    return resultado;
}
double multiplicar(double num1, double num2) {
    double resultado = num1 * num2;
    return resultado;
}
double potenciacao(double base, double expoente) {
    double resultado = pow(base, expoente);
    return resultado;
}
double fatorial(double num1) {
    double resultado = 0;
    if (num1 < 0) {
      cout << "\nFatorial n?o ? definido para n?meros negativos" << endl;
    }else{ 
      resultado = 1;   
      for(int i = num1; i>=1; i--){
         resultado *= i;
      }
    }
    return resultado;
}
int modulo(int num1, int num2) {
    double resultado = 0;
    if(num2 == 0){
      cout << "\nO divisor n?o pode ser zero" << endl;  
    }else{
      resultado = num1 % num2;               
    }   
    return resultado;
}
double raiz(double num1) {
    double resultado = 0;
    if (num1 < 0) {
        cout << "\nN?o existe raiz quadrada de n?meros negativos" << endl;                 
    }else{
        resultado = sqrt(num1);    
    }
    return resultado;
}
int main(){
   
   setlocale(LC_ALL, "portuguese");
   int opcao;
   double num1, num2, resultado;

    do
    {   
        opcao = menu();
        switch (opcao){
        	
        case 0:
            cout << "Encerrando o programa!";
            return 0;
            break;

        case 1:
            num1 = obterNumero("informe o primeiro n?mero: ");
            num2 = obterNumero("\ninforme o segundo n?mero: ");
            resultado = somar(num1,num2);
        	break;

        case 2:
            num1 = obterNumero("informe o primeiro n?mero: ");
            num2 = obterNumero("\ninforme o segundo n?mero: ");
            resultado = subtrair(num1, num2);
        	break;

        case 3:
            num1 = obterNumero("informe o dividendo: ");
            num2 = obterNumero("\ninforme o divisor: ");
            resultado = dividir(num1, num2);
        	break;

        case 4:
            num1 = obterNumero("informe o primeiro n?mero: ");
            num2 = obterNumero("\ninforme o segundo n?mero: ");
            resultado = multiplicar(num1, num2);
        	break;

        case 5:
            num1 = obterNumero("informe a base: ");
            num2 = obterNumero("\ninforme o expoente: ");
            resultado = potenciacao(num1, num2);
        	break;

        case 6:
            num1 = obterNumero("informe o n?mero: ");
            resultado = fatorial(num1);
        	break;

        case 7:
        
            num1 = obterNumero("informe o dividendo: ");
            num2 = obterNumero("\ninforme o divisor: ");
            resultado = modulo(num1, num2); 
        	break;

        case 8:
            num1 = obterNumero("informe o n?mero: ");
            resultado = raiz(num1);
       		break;
}

    cout << "\n\nResultado = " << resultado << "\n\n\n\n\n";
    system("pause");
    system("cls");

    } while (opcao != 0);
}

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
#include <time.h>
#include <cmatch>
#include "Programa_de_convers�es_fun��es.hpp"

using namespace std;

double obterCentimetros(){
	double centimetros;
	cout << "Informe o valor em cent�metros: ";
	cin >> centimetros;
	return centimetros;
}
double obterMetros(){
    double metros;
    cout << "Informe o valor em metros: ";
    cin >> metros;
    return metros;
}
double obterQuilometros(){
    double quilometros;
    cout << "Informe o valor em quil�metros: ";
    cin >> quilometros;
    return quilometros;
}
double obterQuilogramas(){
    double quilos;
    cout << "Informe o valor em quilogramas: ";
    cin >> quilos;
    return quilos;
}
double obterGramas(){
    double gramas;
    cout << "Informe o valor em gramas: ";
    cin >> gramas;
    return gramas;
}
double obterCelsius(){
    double celsius;
    cout << "Informe os graus em celsius: ";
    cin >> celsius;
    return celsius;
}
double obterKelvin(){
	double kelvin;
	cout << "Informe os graus em kelvin: ";
	cin >> kelvin;
	return kelvin;
}
double obterFahrenheit(){
	double fahrenheit;
	cout << "Informe os graus em fahrenheit: ";
	cin >> fahrenheit;
	return fahrenheit;
}

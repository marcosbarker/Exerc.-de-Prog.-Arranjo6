#include <iostream>//manipula��o de fluxo de dados padr�o do sistema 
#include <locale> //biblioteca manipula��o de diversas conven��es culturais do utilizador (nessse codigo para acentua��o)
using namespace std;

int main(){
int dia_do_ano(int dia, int mes, int ano);
int dia, mes, ano;
bool ano_bissexto(int ano);
setlocale(LC_ALL, ""); //setlocale <locale>	

    cout << "Digite uma data no modelo 00 00 000 para saber o dia no ano: \n";	
    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Ano: ";
    cin >> ano;
	
    cout << "Na data " << dia << "/" << mes << "/" << ano << " voce esta ou estara no " << dia_do_ano (dia,mes,ano) << " dia do ano." << endl;
  }

bool ano_bissexto(int ano){
    bool bissexto = false;

    if (ano < 1752)
    bissexto = false;
		else{
    if (ano % 400 == 0)
    bissexto = true;
		else{
    if(ano % 100 == 0)
    bissexto = false;
		else{
    if(ano % 4 == 0)
    bissexto = true;
       }
      }
    }

    return bissexto;
 }

int dia_do_ano(int dia, int mes, int ano){
    int dias = dia;
    int diasMes[12] = {31,0,31,30,31,30,31,31,30,31,30,31};

    if (ano_bissexto(ano))
    diasMes[1] = 29;
		else
    diasMes[1] = 28;
    
	for (int m=1; m<mes; m++){
    dias += diasMes[m-1];
    }

    return dias;
    
 }

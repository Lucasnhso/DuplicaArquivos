#include <stdio.h>
#include <stdlib.h>

#include <iostream>


using namespace std;
int main (int argc, char *argv[]){
	//Declaracao de variaveis
    char busca[40],  comando[100];
	char arquivo[50];
	
    cout << "Qual base deseja utilizar?\n";
    cin >> busca;
    
    //Apagar arquivo ini atual
    if(remove("adjutor.ini") != 0){
    	cout << "Nao foi possivel apagar\n";
	} 
	
	//duplicar arquivo e salvar para adjutor.ini
   
	sprintf(comando,"copy adjutor%s.ini adjutor.ini",busca);
	cout << comando;
	system(comando);
    

	return 0;
} 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;
int main (int argc, char *argv[]){
    char busca[40],  comando[100];
	char arquivo;
	remove("adjutor.ini");
	
    cout << "Qual base deseja utilizar?";
    cin >> busca;
    //arquivo = 'adjutor', busca, '.ini';
	sprintf(arquivo,"adjutor%c.ini",busca);
	
	sprintf(comando,"copy %c adjutor.ini",arquivo);
	
	system(comando);
    //duplicar arquivo e renomear para adjutor.ini
	//system(copia);	
    //system("copy comando adjutor.ini");
    
	return 0;
} 

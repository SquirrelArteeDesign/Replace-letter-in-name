#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char nome[50];
	char letraFind[1];
	char letraReplace[1];
	
	char * pFind;
	pFind = letraFind;
	
	char * pReplace;
	pReplace = letraReplace;
	
	int i;
	
	cout << "Qual o seu nome ? ";
	cin >> nome;
	
	cout << "Qual letra quer procurar ? ";
	cin >> *pFind;
	
	cout << "Por qual letra deseja trocar ? ";
	cin >> *pReplace;
	
	for(i = 0; i < sizeof(nome)/sizeof(int); i++){
		if(tolower(nome[i]) == tolower(*pFind)){
			nome[i] = *pReplace;
		}
	}
	
	cout << nome << endl;
	
	// Desalocando
	delete[] pFind;
	pFind = NULL;
	delete[] pReplace;
	pReplace = NULL;
}

#include<iostream>
#include<chrono>
#include<thread>
#include "Personagem.h"
#include "Menu.h"
#include "Fases.h"


using namespace std::this_thread;
using namespace std::chrono;
using namespace std;

void menu();
void personagem();
void fases();



int main() {

	
	
	
	
	cout << "			  		  \033[97mInterface do \033[91mRETURN FROM HELL\033[0m\n\n\n\n\n\n\n\n";

	sleep_until(system_clock::now() + seconds(1));
	
	menu(); //Menu do Game
	
	sleep_until(system_clock::now() + seconds(1));
	
	switch (opc) {

	case 1:
		personagem(); //Menu de personagems

		fases(); //Fases do Jogo
		
		break;

	case 2:
		personagem(); //Menu de personagems

		cout << "\nDigite o Codigo da Fase: ";
		cin >> code;

		while (code != 4532 && code != 7891 && code != 2367 && code != 9825 && code != 1046) {
			cout << "\nO codigo esta incorreto digite novamente: ";
			cin >> code;
		}

		fases(); //Fases do Jogo

		break;

	case 3:
		return 0;

	default:
		break;
	}

	return 0;
}

/*
1- Código de fase: 4532
2- Código de fase: 7891
3- Código de fase: 2367
4- Código de fase: 9825
5- Código de fase: 1046
*/
#pragma once
#include<iostream>
using namespace std;


int vida = 0, atq = 0, mana = 0, atqm = 0, race, cura = 0, resp = 0;

void personagem() {

	cout << "\n\nCrie Seu Personagem\n\n";

	do {
		cout << "\033[33mEscolha Sua Raca\n\n\n \033[93m1-Humano  \033[0m(\033[0m \033[92mVida = 100 | \033[90mAtaque = 20 | \033[96mMana = 100 | \033[94mAtaque de Mana = 50 | \033[94mCura = 25 \033[0m)\033[0m\n \033[36m2-Anjo    \033[0m(\033[0m \033[92mVida = 110 | \033[90mAtaque = 20 | \033[96mMana = 115 | \033[94mAtaque de Mana = 50 | \033[94mCura = 30 \033[0m)\033[0m \n \033[91m3-Demonio \033[0m(\033[0m \033[92mVida = 100 | \033[90mAtaque = 25 | \033[96mMana = 105 | \033[94mAtaque de Mana = 60 | \033[94mCura = 20 \033[0m)\033[0m\n R:";
		cin >> race;

		cout << "Tem certeza da sua escolha de Raca?\nVoce so podera escolhar UMA vez!!\n\n1-Sim\n2-Nao\nR:";
		cin >> resp;
	} while (resp != 1);



	switch (race) {

	case 1: vida = 100; atq = 20; mana = 100; atqm = 50, cura = 25;
		break;

	case 2: vida = 110; atq = 20; mana = 115; atqm = 50, cura = 30;
		break;

	case 3: vida = 100; atq = 25; mana = 105; atqm = 60, cura = 20;
		break;

	default:
		break;
	}
}

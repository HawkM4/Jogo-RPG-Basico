#pragma once
#include<iostream>
using namespace std;


int opc, timer = 0;

void menu() {
	do {
		if (timer > 0) { cout << "\nDigite corretamente\n\n"; }

		cout << " 1- New Game \n 2- Codes For Levels \n 3- Quit \n R: ";
		cin >> opc;
		timer++;
	} while (opc != 1 && opc != 2 && opc != 3);
}
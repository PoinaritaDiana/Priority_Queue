#include <iostream>
#include "nod.h"
#include "Pqueue.h"
using namespace std;

int main() {
	Pqueue cp1;
	cin >> cp1;
	cout << "Coada 1: " << cp1 << endl;

	Pqueue cp2;
	cin >> cp2;
	cout << "Coada 2: " << cp2 << endl;

	Pqueue cp3;
	cout << "Coada 3: " << cp3 << endl;

	cp3.eliminare();  // va afisa "Queue Underflow"

	Pqueue cp4(4, 6);
	cout << "Coada 4: " << cp4 << endl;

	Pqueue cp5(2, 5);
	cout << "Coada 5: " << cp5 << endl;

	cp1.eliminare(4);  // daca size < 4, se va afisa "Pozitia nu se afla in interval"
	cout << "Coada 1: " << cp1 << endl;

	cp1.adaugare(6, 3);
	cout << "Coada 1: " << cp1 << endl;
	cout << "Valoare maxima coada 1: " << cp1.elemValMax() << endl;

	cp3.adaugare(17, 8);
	cp3.adaugare(2, 6);
	cout << "Coada 3: " << cp3 << endl;
	cout << "Prioritate maxima coada 3: " << cp3.valPriorMax() << endl;
	cout << "Prioritate minima coada 3: " << cp3.valPriorMin() << endl;

	cp5 = cp4;
	cout << "Coada 5: " << cp5 << endl;
	cout << "Coada 4: " << cp4 << endl;

	cp4.adaugare(2, 3);
	cout << "Coada 4: " << cp4 << endl;
	cout << "Coada 5: " << cp5 << endl;

	cout << "Coada 4--: " << cp4-- << endl;
	cout << "Coada 4(after): " << cp4 << endl;

	cout << "Coada 4 + 5: " << cp4 + cp5 << endl;

	cout << "Coada 4++: " << cp4++ << endl;
	cout << "Coada 4 (after): " << cp4 << endl;

	cp4.adaugare(1, 1);
	cp4.adaugare(3, 1);
	cout << "Coada 4:" << cp4 << endl;
	cout << "Coada 4--: " << cp4-- << endl;
	cout << "Coada 4(after): " << cp4 << endl;

	return 0;
}
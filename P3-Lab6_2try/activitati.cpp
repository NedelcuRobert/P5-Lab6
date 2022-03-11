#include "activitati.h"

CActivitati* CActivitati::nodNou(CActivitati a) {
	CActivitati* temp = new CActivitati;

	temp->nume = a.nume;
	temp->adresa.oras = a.adresa.oras;
	temp->adresa.strada = a.adresa.strada;
	temp->adresa.nr = a.adresa.nr;
	temp->data.zi = a.data.zi;
	temp->data.luna = a.data.luna;
	temp->data.an = a.data.an;

	temp->stanga = NULL;
	temp->dreapta = NULL;

	return temp;
}

void CActivitati::citire() {
	cout << "Nume:" << endl;cin >> nume;
	cout << "Adresa" << endl;
	cout << "Oras:";cin >> adresa.oras;
	cout << "Strada:";cin >> adresa.strada;
	cout << "Numar:";cin >> adresa.nr;
	cout << "Data" << endl;
	cout << "Zi:";cin >> data.zi;
	cout << "Luna:";cin >> data.luna;
	cout << "An:";cin >> data.an;
}

void CActivitati::afisare() {
	cout << nume << endl;
	cout << adresa.oras << endl;
	cout << adresa.strada << endl;
	cout << adresa.nr << endl;
	cout << data.zi << endl;
	cout << data.luna << endl;
	cout << data.an << endl;
}

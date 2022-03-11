#include <iostream>

using namespace std;

class CActivitati
{
private:
	string nume;
	class CAdresa {
	private:
		string oras;
		string strada;
		int nr;
		friend class CActivitati;
	}adresa;
	class CData {
	private:
		int zi;
		int luna;
		int an;
		friend class CActivitati;
		friend class CBST;
	}data;
	CActivitati* stanga;
	CActivitati* dreapta;
public:
	CActivitati* nodNou(CActivitati a);
	void citire();
	void afisare();
	friend class CBST;
};


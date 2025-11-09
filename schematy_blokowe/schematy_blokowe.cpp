#include <iostream>

using namespace std;
// Funkcja do zadania 1 
int ile_nog(int kura, int krowa, int swinia) //zbieramy informacje o ilosci zwierząt i mnożymy je przez ilość nóg.
{
	int a;
	a = (kura * 2) + (krowa * 4) + (swinia * 4);
	return a;
}

void czyprzestepny(int rok)
{
	if (rok % 4 == 0 && (rok % 100 != 0 || rok % 400 == 0)) //sprawdzamy czy rok jest podzielny przez 4 i czy nie jest podzielny przez 100 lub czy jest podzielny przez 400
	{
		cout << rok << " jest rokiem przestepnym";
	}
	else 
	{	
		cout << rok << " nie jest rokiem przestepnym";

	}
}



int main() {
	// ZADANIE 1 ----------------------------
	int ku, kr, sw; //tworzymy zmienne dla zwierząt

	cout << "ZADANIE 1 ----------------------------" << endl;

	cout << "Podaj liczbe kur: ";
	cin >> ku;
	cout << endl << "Podaj liczbe krow: ";
	cin >> kr;
	cout << endl << "Podaj liczbe swin: ";
	cin >> sw;

	cout << ile_nog(ku, kr, sw);

	// ZADANIE 2 ----------------------------

	int wybor;

	cout << "ZADANIE 2 ----------------------------" << endl;

	cout << "Podaj zadanie ktore chcesz wykonac" << endl;

	cin >> wybor;


}
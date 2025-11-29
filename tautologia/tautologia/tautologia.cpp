#include <iostream>

using namespace std;

void negacja(bool p, bool q)	//uzywam \n w cout w celu zachowania czytelnosci i przyspieszenia pracy
{
	bool p, q, w;


	cin >> p;

	cin >> q;

	cout << "negacja p: " << !p << "\nnegacja q: " << !q;
}

void koniunkcja(bool p, bool q)
{
	if (p && q) {
		cout << "\nKoniunkcja p /\\ q = 1";
	}
	else
	{
		cout << "\nKoniunkcja p /\\ q = 0";
	}
}

void alternatywa(bool p, bool q)
{
	if (p || q)
	{
		cout << "\nAlternatywa p \\/ q = 1";
	}
	else
	{
		cout << "\nAlternatywa p \\/ q = 0";
	}
}
	
void implikacja(bool p, bool q)
{

	if (p == 1 && q == 0)
	{
		cout << "\nImplikacja p -> q = 0";
	}
	else
	{
		cout << "\nImplikacja p -> q = 1";
	}
}

void rownowaznosc(bool p, bool q)
{

	if (p == q)
	{
		cout << "\nRownowaznosc p <-> q = 1";
	}
	else
	{
		cout << "\nRownowaznosc p<-> q = 0";
	}
}



int main()
{
	bool p, q;
	cin >> p;
	cin >> q;
	negacja(p, q);
	koniunkcja(p, q);
	alternatywa(p, q);
	implikacja(p, q);
	rownowaznosc(p, q);

}
#include <iostream>

using namespace std;

int main()
{
	bool p, q, w;


	cin >> p;

	cin >> q;

	cout << "negacja p: " << !p << "\nnegacja q: " << !q;

	if (p && q) {
		cout << "\nKoniunkcja p /\\ q = 1";
	}
	else
	{
		cout << "\nKoniunkcja p /\\ q = 0";
	}

	if (p || q)
	{
		cout << "\nAlternatywa p \\/ q = 1";
	}
	else
	{
		cout << "\nAlternatywa p \\/ q = 0";
	}
	
	if (p == 1 && q == 0)
	{
		cout << "\nImplikacja p -> q = 0";
	}
	else
	{
		cout << "\nImplikacja p -> q = 1";
	}

	if (p == q)
	{
		cout << "\nRownowaznosc p <-> q = 1";
	}
	else
	{
		cout << "\nRownowaznosc p<-> q = 0";
	}
	// ZADANIE 1 DO SKOŃCZENIA COS Z FUNKCJAMI!!!!!!!!!!!!
}
#include <iostream>

using namespace std;

bool negacja(bool p)
{
	return !p;

}

bool koniunkcja(bool p, bool q)
{
	if (p && q) {
		return 1;
	}
	else
	{
		return 0;
	}
}

bool alternatywa(bool p, bool q)
{
	if (p || q)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

bool implikacja(bool p, bool q)
{

	if (p == 1 && q == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

bool rownowaznosc(bool p, bool q)
{

	if (p == q)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}




int main()
{
	// ZADANIE 1 ------------------------------------
	bool p, q;
	cin >> p;
	cin >> q;
	cout << negacja(p);					// ¬
	cout << endl << negacja(q);			// ¬
	cout << endl << koniunkcja(p, q);	//∧
	cout << endl << alternatywa(p, q);	//∨
	cout << endl << implikacja(p, q);	//⇒
	cout << endl << rownowaznosc(p, q) << endl << endl; //⇔


	// ZADANIE 2 ------------------------------------

	bool r;

	for (int i = 2; i * i <= 5; i++) {
		if (5 % i == 0) {
			p = 0;
		}
		else {
			p = 1;
		}
	}
	q = (8 % 2 == 0);
	r = ((5 - 8) == 3);

	cout << endl << koniunkcja(p, q) << endl; // a) p ∧ q
	cout << alternatywa(p, q) << endl;			// b) p ∨ q
	cout << koniunkcja(negacja(p), (alternatywa(p, q))) << endl; // c) ¬p ∧ (p ∨ q)
	cout << implikacja((koniunkcja(p, r)), q) << endl; // d) (p ∧ r) → q
	cout << negacja(rownowaznosc(p, alternatywa(q, r))) << endl; //e) ¬(p (q ∨ r))
	cout << rownowaznosc(alternatywa(implikacja(p, r), negacja(q)), implikacja(p, koniunkcja(r, negacja(q)))) << endl;  //f) [(𝑝→𝑟)∨¬𝑞] [𝑝→(𝑟∧¬𝑞)]
	cout << implikacja(alternatywa(alternatywa(negacja(r), q), negacja(koniunkcja(q, r))), negacja(implikacja(q, p))) << endl; //g) [(¬𝑟∨𝑞)∨¬(𝑞∧𝑟)]→[¬(𝑞→𝑝)]
}

}
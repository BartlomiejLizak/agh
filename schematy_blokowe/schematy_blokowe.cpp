#include <iostream>

using namespace std;

int ile_nog(int kura, int krowa, int swinia)
{
	int a;
	a = (kura * 2) + (krowa * 4) + (swinia * 4);
	return a;
}


int main() {
	int ku, kr, sw;

	cout << "Podaj liczbe kur: ";
	cin >> ku;
	cout << endl << "Podaj liczbe krow: ";
	cin >> kr;
	cout << endl << "Podaj liczbe swin: ";
	cin >> sw;

	cout << ile_nog(ku, kr, sw);

}
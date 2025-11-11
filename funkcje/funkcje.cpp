#include <iostream>
#include <iomanip>
#include <cstdlib>
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

int przedzial(int a, int b)
{
	int w = 0; //tworzymy zmienne a i b ktore przechowuja liczby z ktorych bedziemy robic przedzial i tworzymy zmienna pomocnicza w ktora inicjalizujemy wpisujac w = 0;

	if (a > b) //sprawdzamy czy a jest wieksze od b. Jesli tak to kontynuujemy
	{
		for (int i = b + 1; i < a; i++) //tworzymy petle for i tworzymy zmienna i ktora inicjalizujemy przypisujac jej wartosc zmiennej b + 1
		{
			cout << i << endl; // wypisujemy liczbe z przedzialu i robimy odstep linii w celu przejzystosci
			if (i % 2 == 0) { //sprawdzamy czy dana liczba jest parzysta sprawdzajac czy jest podzielna przez 2
				w += i;	//jesli jest podzielna dodajemy ja do zmiennej w
			}
		}
	}
	else //w przypadku kiedy b jest wieksze od a kontynuujemy tutaj
	{
		for (int i = a + 1; i < b; i++) //tworzymy petle for i tworzymy zmienna i ktora inicjalizujemy przypisujac jej wartosc zmiennej a + 1
		{
			cout << i << endl; // wypisujemy liczbe z przedzialu i robimy odstep linii w celu przejzystosci
			if (i % 2 == 0) { //sprawdzamy czy dana liczba jest parzysta sprawdzajac czy jest podzielna przez 2
				w += i; //jesli jest podzielna dodajemy ja do zmiennej w
			}
		}
	}
	return w; // na koniec wypisujemy zmienna w ktora jest wynikiem naszego dodawania

}

void nwnmor()
{
	int a[5], p;
	for (int i = 0; i <= 4; i++) { //uzywajac petli for wypisuje w kazdy element tablicy wartosc wpisana z klawiatury
		cin >> a[i];
		for (int x = i; x >= 1; x--) //uzywajac petli for sprawdzam czy podana liczba jest wieksza od poprzedniej. Jesli tak to sprawdzana jest kolejny poprzedni element tablicy
		{
			if (a[x] > a[x - 1]) //jesli warunek (aktualny element tablicy jest wiekszy niz poprzedni) jest prawdziwy dokonujemy zamiany wartosci w tablicy wspomagajac sie wartoscia pomocnicza 
			{
				p = a[x - 1];
				a[x - 1] = a[x];
				a[x] = p;
			}
		}
	}
	cout << a[0] << " " << a[4] << endl << a[0] - a[4] << endl; //wypisujemy wartosc najwieksza potem najmniejsza i na koniec ich roznice


}

void srednia ()
{
		int a, b;
		float w = 0; //deklaruje 3 zmienne, jedna do wypisania ilosci powtorzen, druga do wypisania wartosci ktore bedziemy dodawac do siebie w zmiennej nr 3 ktora inicjalizujemy przy deklaracji
		cin >> a; // wpisujemy ile liczb chcemy wpisac
		for (int i = 0; i < a; i++)
		{
			cin >> b; //wypisujemy liczhy ktore pod spodem dodajemy do siebie
			w += b;
		}
		cout << w / a << endl; // wypisujemy srednia 
		for (int i = 0; i < w / a; i++) // wypisujemy "0" tyle razy ile wychodzi średnia liczb
		{
			cout << setprecision(0) << "0";
		}

}

void robot()
{
	int x[4];

	for (int i = 0; i < 4; i++)
	{
		cin >> x[i];

	}
	cout << endl << "Pozycja robota (" << x[1] - x[3] << "," << x[0] - x[2] << ")" << endl;
	
}

void kpn(int a)
{
	int p;
	int r =(rand() % 3) + 1;
	cout << r << endl;
	p = (a - r + 3) % 3; // wykonujemy obliczenie z modulo aby sprawdzić resztę z dzielenia przez 3 żeby otrzymać wynik cykliczny.
	if (p == 0)
	{
		cout << "Remis! " << endl;
	}
	if (p == 1)
	{
		cout << "Wygrywasz! " << endl;
	}
	if (p == 2)
	{
		cout << "Przegrywasz! " << endl;
	}
	
}

int main() {
	srand(time(NULL));
	//// ZADANIE 1 ----------------------------	
	//int ku, kr, sw; //tworzymy zmienne dla zwierząt

	//cout << "ZADANIE 1 ----------------------------" << endl;

	//cout << "Podaj liczbe kur: ";
	//cin >> ku;
	//cout << endl << "Podaj liczbe krow: ";
	//cin >> kr;
	//cout << endl << "Podaj liczbe swin: ";
	//cin >> sw;

	//cout << ile_nog(ku, kr, sw);

	//// ZADANIE 2 ----------------------------

	//int wybor, a2, b2;

	//cout << endl << "ZADANIE 2 ----------------------------" << endl;

	//cout << "Podaj zadanie ktore chcesz wykonac" << endl;

	//cin >> wybor;

	//switch (wybor) {

	//case 1:
	//	cout << endl << "podaj rok do sprawdzenia: " << endl;
	//	cin >> a2;
	//	czyprzestepny(a2);
	//	break;

	//case 2: 
	//	cout << endl << "podaj dwie calkowite: " << endl;
	//	cin >> a2 >> b2;
	//	cout << przedzial(a2, b2);
	//	break;
	//case 3:
	//	nwnmor();
	//	break;
	//case 4:
	//	srednia();
	//	break;
	//case 5:
	//	exit(0);
	//	break;
	//
	//}

	//
	//// ZADANIE 3 ----------------------------
	//robot();

	// ZADANIE 4 ----------------------------

	int gracz;
	for (int i = 0; i < 3; i++)
	{
		cin >> gracz;
		kpn(gracz);
	}

}
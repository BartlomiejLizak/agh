#include <iostream>
#include <fstream>
#include <iomanip> // używam tylko dla polepszenia wyglądu wyjścia do pliku


using namespace std;

int main() {
	// Zadanie 1 -----------------------------------------------------
	//fstream plik;

	//plik.open("tabliczka.txt", ios::out);

	//int** tab, wiersze, kolumny;
	//cout << "Podaj liczbe wierszy i kolumn w tablicy: ";

	//cin >> wiersze >> kolumny;

	//tab = new int* [wiersze];

	//for (int i = 0; i < wiersze; i++)
	//{
	//	tab[i] = new int[kolumny];
	//}

	//for (int i = 0; i < wiersze; i++)
	//{
	//	tab[i][0] = i; //przypisuje pierwsze wiersze od 0 do 10
	//}


	//for (int j = 0; j < kolumny; j++)
	//{
	//	tab[0][j] = j; // przypisuje pierwsze kolumny od 0 do 10
	//}


	//for (int i = 1; i < wiersze; i++)
	//{
	//	for (int j = 1; j < kolumny; j++)
	//	{
	//		tab[i][j] = i * j; // przypisuje całą tabliczke mnożenia
	//	}
	//}


	//for (int i = 0; i < wiersze; i++)
	//{
	//	plik << endl;  //ten endl jest tutaj aby zachować ład w wypisywaniu
	//for (int j = 0; j < kolumny; j++)
	//			{
	//				plik << setw(5) << tab[i][j]; //wypisuje tabliczke mnożenia z odstępami
	//			}
	//}


	// Zadanie 2 -----------------------------------------------------

	fstream haslo;

	haslo.open("haslo.txt", ios::in);
	
	string zapisane, podane;
	int wybor = 0;

	int** tab, wiersze, kolumny;

	haslo >> zapisane;

	for (int i = 3; i > 0; i--)
	{ 
	cout << "podaj haslo: ";
	cin >> podane;

	if (podane == zapisane)
	{
		cout << "Witaj rodzicu!" << endl;

		while (wybor != 2)
		{
			cout << "opcje: " << endl;

			cout << "1: pokaz oceny" << endl << "2: wyjdz" << endl;

			cin >> wybor;

			if (wybor == 1)
			{
				cout << 
			}

		}
	}
	else
	{
		cout << "Bledne haslo! zostalo " << i - 1  << " prob";
	}

	}

}
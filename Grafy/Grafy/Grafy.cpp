#include <iostream>
#include <fstream>
#include <iomanip> // używam tylko dla polepszenia wyglądu wyjścia do pliku


using namespace std;


int main() {
	// Zadanie 1 -----------------------------------------------------
	//fstream plik;
	//srand(time(0));
	//plik.open("oceny.txt", ios::out);

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
	//		tab[i][j] = rand() % 6 + 1; // przypisuje całą tabliczke mnożenia
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

	fstream oceny;

	haslo.open("haslo.txt", ios::in);
	oceny.open("oceny.txt", ios::in);
	
	string zapisane, podane;
	int wybor = 0;

	int** tab, wiersze = 10, kolumny = 5;

	haslo >> zapisane;


	tab = new int* [wiersze];

	for (int i = 0; i < wiersze; i++)
	{
		tab[i] = new int [kolumny];
	}



	


	for (int i = 3; i > 0; i--)
	{ 
	cout << "podaj haslo: ";
	cin >> podane;

	if (podane == zapisane)
	{
		cout << "Witaj rodzicu!";

		while (wybor != 2)
		{
			cout << endl << "opcje: " << endl;

			cout << "1: pokaz oceny" << endl << "2: wyjdz" << endl;

			cin >> wybor;

			if (wybor == 1)
			{
				cout << setw(10) << "polski" << setw(10) << "angielski" << setw(10) << "wf" << setw(10) << "chemia";
				for (int i = 1; i < wiersze; i++)
					{
						for (int j = 1; j < kolumny; j++)
						{
							oceny >> tab[i][j]; 
						}
					}

			for (int i = 1; i < wiersze; i++)
				{
				cout << endl;
					for (int j = 1; j < kolumny; j++)
					{
						cout << setw(10) << tab[i][j];
					}
				}
				
			}
			
		}
		exit(0);
	}
	else
	{
		cout << "Bledne haslo! zostalo " << i - 1  << " prob";
	}

	}

}
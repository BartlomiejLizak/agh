#include <iostream>
#include <fstream>
#include <Windows.h>
#include <cstdlib>
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

	//fstream haslo;

	//fstream oceny;

	//haslo.open("haslo.txt", ios::in);
	//oceny.open("oceny.txt", ios::in);
	//
	//string zapisane, podane;
	//int wybor = 0;

	//int** tab, wiersze = 10, kolumny = 5;

	//haslo >> zapisane;


	//tab = new int* [wiersze];

	//for (int i = 0; i < wiersze; i++)
	//{
	//	tab[i] = new int [kolumny];
	//}



	//


	//for (int i = 3; i > 0; i--)
	//{ 
	//cout << "podaj haslo: ";
	//cin >> podane;

	//if (podane == zapisane)
	//{
	//	cout << "Witaj rodzicu!";

	//	while (wybor != 2)
	//	{
	//		cout << endl << "opcje: " << endl;

	//		cout << "1: pokaz oceny" << endl << "2: wyjdz" << endl;

	//		cin >> wybor;

	//		if (wybor == 1)
	//		{
	//			cout << setw(10) << "polski" << setw(10) << "angielski" << setw(10) << "wf" << setw(10) << "chemia";
	//			for (int i = 1; i < wiersze; i++)
	//				{
	//					for (int j = 1; j < kolumny; j++)
	//					{
	//						oceny >> tab[i][j]; 
	//					}
	//				}

	//		for (int i = 1; i < wiersze; i++)
	//			{
	//			cout << endl;
	//				for (int j = 1; j < kolumny; j++)
	//				{
	//					cout << setw(10) << tab[i][j];
	//				}
	//			}
	//			
	//		}
	//		
	//	}
	//	exit(0);
	//}
	//else
	//{
	//	cout << "Bledne haslo! zostalo " << i - 1  << " prob";
	//}

	//}


fstream wierzcholki, krawedzie, ile_k;

wierzcholki.open("graf_wierzcholki.txt", ios::in);
krawedzie.open("graf_krawedzie.txt", ios::in);
ile_k.open("graf_ile_krawedzi.txt", ios::in);

 
if (wierzcholki.good() == false)
{
	cout << "nie ma pliku wierzcholki";
		exit(0);
}
 
if (krawedzie.good() == false)
{
	cout << "nie ma pliku krawedzie";
		exit(0);
}
 
if (ile_k.good() == false)
{
	cout << "nie ma pliku ile_k";
		exit(0);
}


int n, m, i, j, v1, v2; //liczba wierzcholkow i krawedzi, wspolrz�dne macierzy, wirzcholek startowy i koncowy
int** A; // macierz

wierzcholki >> n;          // Czytamy liczb� wierzcho�k�w 
ile_k >> m;         // Czytamy liczb� kraw�dzi


A = new int* [n];  // Tworzymy macierz

for (i = 0; i < n; i++)
	A[i] = new int[n]; // Tworzymy wiersze

// Macierz wype�niamy zerami

for (i = 0; i < n; i++)
	for (j = 0; j < n; j++)
		A[i][j] = 0;

// Odczytujemy kolejne definicje kraw�dzi

for (i = 0; i < m; i++)
{
	krawedzie >> v1 >> v2;    // Wierzcho�ek startowy i ko�cowy kraw�dzi
	A[v1][v2] = 1;// Kraw�d� v1->v2 obecna
	A[v2][v1] = 1; // krawędź v2->v1 obecna w celu stworzenia grafu nieskierowa-nego

}

cout << endl;

// Wypisujemy zawarto�� macierzy s�siedztwa

cout << "   ";
for (i = 0; i < n; i++)
	cout << setw(3) << i;

cout << endl << endl;

for (i = 0; i < n; i++)
{
	cout << setw(3) << i;
	for (j = 0; j < n; j++)
		cout << setw(3) << (int)A[i][j];
	cout << endl;
}

// Usuwamy macierz, zwalniamy miejsce w pami�i RAM

for (i = 0; i < n; i++) delete[] A[i];
delete[] A;

cout << endl;

system("pause");

return 0;
}
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

//do zadania 1
int porownanie(int a, int b) {
	int wieksza;
	if (a > b) {
		wieksza = a;
	}
	else {
		wieksza = b;
	}
	return wieksza;
}

void wyswietlenie(int a, int b) {
	int wynik = porownanie(a, b);
	cout << "Wieksza liczba to: " << wynik << endl;
}

//do zadania 2

void dzielniki(int n) {
	cout << "Dzielniki liczby " << n << " to: " << endl;
	for (int i = 1; i <= n/2; i++) {
		if (n % i == 0) {
			cout << i << " ";
		}
	}
	cout << n << endl; 
}


//do zadania 3

int dodawanie(int a, int b) {
	return a + b;
}

int odejmowanie(int a, int b) {
	return a - b;
}

int mnozenie(int a, int b) {
	return a * b;
}

void dzielenie(int a, int b)
{
	if (b == 0)
		cout << "Dzialanie nie moze zostac wykonane, nie da sie dzilic przez 0. " << endl;
	else
		cout << a / b << endl;

	}

//do zadania 4

int potegowanie(int a, int b){

	int wynik = 1;
	for (int i = 0; i < b; i++) {
		wynik = wynik * a;
	}
	return wynik;

}

//do zadania 5
int silnia(int n){
	int wynik = 1;
	for (int i = 1; i <= n; i++) {
		wynik = wynik * i;
	}
	return wynik;
 }

//do zadania 6
int potegowanie2(int n) {
	int wynik = 1;
	for (int i = 0; i < +n; i++) {
		wynik = wynik * 2;
	}
	return wynik;
}

//do zadania 7
void szczesliwy(int n) {
	int tab[10];
	float ile = 0;


	for (int i = 0; i < 10; i++) {
		tab[i] = (rand() % 10) + 1;
		if(tab[i] == n) {
			ile++;
		}
	}
	cout << "Na 10 losowan wybrany szczesliwy numerek pojawil sie: " << ile << " razy." << endl;
	cout << "Stanowi to " << (ile / 10) * 100 << " % wszystkich losowan. " << endl;
	
}

//do zadania 8

int parzyste(int n) {
	int wynik;
	wynik = n / 2;
	return wynik;
}

int nieparzysta(int n) {
	int wynik;
	wynik = (n - 1) / 2;
	return wynik;
}


int main() {
	//zadanie 1

	/*int a, b;
	cout << "Podaj dwie liczby calkowite: ";
	cin >> a >> b;

	wyswietlenie(a, b); */


	//zadanie 2
	/*int n;
	cout << "Podaj liczbe całkowita ktorej dzielniki chcesz poznac: "; 
	cin >> n;
	dzielniki(n); */

	//zadanie 3
	/*int wybor;
	float a, b;
	char c;
	while (1) {
		cout << "Podaj dwie liczby: " << endl;
		cin >> a >> b;

		cout << "Podaj znak pozadanego dzialania: " << endl;
		cin >> c;

		if (c == '/' && b == 0)
			cout << "Dzialanie nie może zostac wykonane. Nie dzielimy przez zero!" << endl;
		else {
			switch (c) {
			case '+':
				cout << dodawanie(a, b) << endl;
				break;
			case '-':
				cout << odejmowanie(a, b) << endl;;
				break;
			case '*':
				cout << mnozenie(a, b) << endl;
				break;
			case '/':
				dzielenie(a, b);
			}
		}
		cout << "Czy kalkulator ma zakonczyc dzialanie?. Jesli tak wprowadz cyfre 0. W przeciwnym wypadku 1. " << endl;
		cin >> wybor;
		if (wybor == 1)
			continue;
		else if (wybor == 0)
			return 0;
	}*/


	//zadanie 4

	/*
	int a, b;
	cout << "Podaj liczbe ktora ma zostac spotegowana: " << endl;
	cin >> a;
	cout << "Podaj do jakiej potegi ma zostac podniesiona: " << endl;
	cin >> b;

	cout << "Wynik potęgowania to: " << potegowanie(a, b) << endl;
	*/


	//zadanie 5 

	/*
	int n;
	cout << "Podaj liczbe dla ktorej chcesz obliczyc silnie: " << endl;
	cin >> n;
	cout << "Silnia z liczby " << n << " to " << silnia(n) << endl;
	*/

	//zadanie 6

	/*  int n;
	cout << "Podaj do ktorej potegi chcesz podniesc 2: " << endl;
	cin >> n;
	cout << "Wynik potegowania to: " << potegowanie2(n) << endl;   */

	//zadanie 7

	/*   int n;
	cout << "Wybierz swoj szczesliwy numerek od 1 do 10: " << endl;
	cin >> n;
	szczesliwy(n);  */

	//zadanie 8

	for (int i = 1; i <= 100; i++) {
		if (i & 2 == 0) {
			cout << i << " ----> " << parzyste(i) << endl;
		}
		else {
			cout << i << " ----> " << nieparzysta(i) << endl;	
		}
	}


	return 0;
}

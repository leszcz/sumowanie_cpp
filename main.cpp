#include <iostream>

/* uruchomienie aplikacji */
using namespace std;

int wynik = 0;
	
int main(int argc, char** argv) {

	/* definiowanie zmiennych dla uzyskania optymalizacji kodu */
	int liczba = 0;
	int petla = 0; /* zmienna, ktora sluzy do obslugi petli - maksymalna ilosc wprowadzonych liczb */
	
	std::cout << "*** Autor: Tomasz Leszczynski <https://github.com/leszcz> ***\n";
	
	std::cout << "Wprwowadz ilosc liczb, ktore chcesz do siebie dodac: ";
	std::cin >> petla;
	
	if ( petla > 1 ) 
	{
		std::cout << "Aby wyswietlic wynik pamietaj o wpisaniu cyfry 0\n";
		/* uruchamiamy pętle by wprowadzane liczby mogły być dodawane */
		for( int a = 0; a < petla; a++ ) {
			std::cout << "Wprowadz liczbe, ktora chcesz dodac do sumy: ";
			std::cin >> liczba;
			wynik += liczba;
			
			if( liczba == 0) 
			{
				std::cout << "Wynik dzialania to: " << wynik << "\n";
				system("pause");
			}
		}
		
	} else {
		std::cout << "Wpisana liczba jest mniejsza lub rowna 1\n";
	}

}

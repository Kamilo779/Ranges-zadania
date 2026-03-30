#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <ranges>
#include <array>
#include <string>
#include <vector>
#include <list>

// struct potrzebny do wykonania zadania 4
struct Pacjent {
	std::string imie;
	std::string nazwisko;
	int wiek;
	std::string diagnoza;
};

int main()
{
	std::cout << "---------- ZADANIE 1 ----------\n\n";

	// Zadanie 1. Wykorzystując wybrany adaptor, wybierz tylko liczby parzyste z wektora "liczby", 
	// następnie dodaj je do nowego wektora "parzyste" i posortuj go wykorzystując wybrany algorytm biblioteki ranges.

	std::vector<int> liczby{ 4,3,8,1,9,7,5,2,6 };
	std::vector<int> parzyste;



	std::cout << "\n\npoprawna odp: { 2,4,6,8 }";





	std::cout << "\n\n---------- ZADANIE 2 ----------\n\n";

	// Zadanie 2. Korzystając z funkcji dostępnych w bibliotece <ranges> dokonaj na podanej liście następujące operacje.

	std::list<double> zmiennoprzecinkowe = { 5.89, 0.00, 3.1415, -2.2222, 178.2, -84, 92.123, 21, 26.01, 25.99 };

	// Dokonaj wyboru jedynie nieujemnych liczb, pomnóż je razy dwa, zwróć liczby większe od 45, a na koniec policz ich pierwiastki kwadratowe.
	// Uwaga: wykonaj wszystko w ramach jednego pipeline'u.

	// Dodatkowo do pierwszej funckji wybierającej liczby nieujemne dodaj wypisywanie sprawdzanych wartości (np. std::cout << "sprawdzam: " << x << std::endl;).
	// Następnie przed użyciem pipeline'u wypisz komunikat "Pipeline gotowy".

	// Na koniec dodaj te elementy do nowej listy i wyświetl wynik operacji.

	std::list<double> nowa;

	// Zaobserwuj kiedy dokładnie wykonywane są operacje na elementach i wyjaśnij co to oznacza.

	std::cout << "\n\nOdp. {18.8786 13.5737 7.21249 7.20972}";





	std::cout << "\n\n---------- ZADANIE 3 ----------\n\n";

	// Zadanie 3. Z tablicy "imiona" pobierz tylko ostatnie trzy, następnie odwróć kolejność liter w tych 
	// imionach i wyświetl je za pomocą algorytmu ranges::for_each

	std::array<std::string, 8> imiona = { "Jan", "Anna", "Tomek", "Kasia", "Piotr", "Zosia", "Marek", "Ela" };



	std::cout << "\n\nPoprawna odpowiedz: \"aisoZ keraM alE\"";





	std::cout << "\n\n---------- ZADANIE 4 ----------\n\n";

	// Zadanie 4. W pliku tekstowym pacjenci.txt podana jest baza zawierająca pacjentów szpitala.
	// Format w jakim są podani to imię nazwisko wiek diagnoza. Dane są odczytywane przy pomocy pętli while
	// oraz są zapisywane do wektora pacjenci. Wczytanie z pliku tekstowego oraz przykład utworzonego wektora poniżej:

	std::ifstream plik("pacjenci.txt");
	std::vector<Pacjent> pacjenci;

	std::string imie, nazwisko, diagnoza;
	int wiek;

	while (plik >> imie >> nazwisko >> wiek >> diagnoza) {
		pacjenci.push_back({ imie, nazwisko, wiek, diagnoza });
	}

	/*std::vector<Pacjent> pacjenci = {
		{"Anna", "Kowalska", 25, "nadcisnienie"},
		{"Jan", "Nowak", 17, "alzheimer"},
		{"Piotr", "Wozniak", 45, "udar"}
	};*/

	// W ramach zadania na podstawie diagnoz pacjentów w bazie danych przydziel ich do odpowiednich 
	// oddziałów szpitala zgodnie z kryteriami:
	//		nadcisnienie, miazdzyca lub zawal -> kardiologia
	//		rozyca lub czerniak -> dermatologia
	//		udar lub alzheimer -> neurologia
	//		reszta pacjentów znajduje się na internie

	// Podpowiedź: 
	// Stwórz funkcję przypisz_oddzial, która najłatwiej niech zwraca typ auto (dla chętnych typ std::pair<>),
	// a której argumentem jest konkretny pacjent, przechwytywany za pomocą wyrażenia lambda.
	// Niech każdy z przypadków zwróci imię, nazwisko oraz oddział przebywania pacjenta.

	// auto przypisz_oddzial = ...

	// Korzystając z adaptora transform przypisz powyższą funkcję do zmiennej przypisani.

	// Następnie wypisz wszystkie elementy kolekcji za pomocą algorytmu ranges::for_each.
	// Ponownie przydatna może być lambda oraz wykorzystany wcześniej typ auto do przechwycenia całego elementu.


	std::cout << "\n\nOdp.: \n";
	std::cout << "Anna Kowalska -> kardiologia\n"
		"Jan Nowak -> dermatologia\n"
		"Piotr Zielinski -> neurologia\n"
		"Kasia Wojcik -> interna\n"
		"Marek Lewandowski -> kardiologia\n"
		"Jan Kozlonosowski -> dermatologia\n"
		"Agnieszka Szymanska -> neurologia\n"
		"Jakub Wozniak -> interna\n"
		"Lukasz Mazur -> interna\n"
		"Dariusz Gorski -> kardiologia\n"
		"Ewa Michalska -> interna\n"
		"Patrycja Dabrowska -> kardiologia\n"
		"Sylwia Urban -> interna\n"
		"Mariusz Zawadzki -> interna\n"
		"Pawel Lampert -> kardiologia\n"
		"Rafal Kubiak -> interna\n"
		"Alicja Sadowska -> dermatologia\n"
		"Mateusz Wojciechowski -> interna\n"
		"Kinga Pawlowska -> interna" << std::endl;


	return 0;
}

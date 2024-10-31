#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double wysokosc_calkowita, dlugosc_calkowita;
	cout<<"Podaj wysokość całkowitą schodów (cm): ";
	cin>>wysokosc_calkowita;
	cout<<"Podaj długość całkowitą schodów (cm): ";
	cin??dlugosc_calkowita;

	const double min_wysokosc_stopnia = 16.0;
	const double max_wysokosc_stopnia = 19.0;
	const double min_dlugosc_stopnia = 25.0;
	const double max_dlugosc_stopnia = 32.0;

	//Obliczamy liczbę stopni na podstawie wysokości
	int min_stopnie_wysokosc = ceil(wysokosc_calkowita / max_wysokosc_stopnia);
	int max_stopnie_wysokosc = floor(wysokosc_calkowita / min_wysokosc_stopnia);

	//Obliczamy liczbę stopni na podstawie długości
	int min_stopnie_dlugosc = ceil(dlugosc_calkowita / max_dlugosc_stopnia);
	int max_stopnie_dlugosc = floor(dlugosc_calkowita / min_dlugosc_stopnia);

	//Szukamy wspólnego zakresu
	int min_stopnie = max(min_stopnie_wysokosc, min_stopnie_dlugosc);
	int max_stopnie = min(max_stopnie_wysokosc, max_stopnie_dlugosc);

	//Sprawdzamy czy możliwa liczba stopni istnieje w dopuszczalnym zakresie
	if (min_stopnie <= max_stopnie) {
		cout << "Minimalna liczba stopni: " << min_stopnie << endl;
		cout << "Maksymalna liczba stopni: " << max_stopnie << endl;
	} else {
		cout << "Nie da się zbudować schodów w optymalnym zakresie o zadanych wymiarach." << endl;
	}
	
	
	return 0;
}

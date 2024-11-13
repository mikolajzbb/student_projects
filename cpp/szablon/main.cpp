#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double calkowita_dlugosc, calkowita_wysokosc;
	cout<<"Podaj wysokość całkowitą schodów (cm): ";
	cin>>calkowita_wysokosc;
	cout<<"Podaj długość całkowitą schodów (cm): ";
	cin>>calkowita_dlugosc;

	const int min_wysokosc = 16;
	const int max_wysokosc = 18;
	const int opt_dlugosc = 29;

	int liczba_stopni = std::round(calkowita_wysokosc / ((min_wysokosc + max_wysokosc) / 2.0));
	double rzeczywista_wysokosc_stopnia = calkowita_wysokosc / liczba_stopni;
	double rzeczywista_dlugosc_stopnia = calkowita_dlugosc / liczba stopni;

	if (rzeczywista_wysokosc_stopnia < min_wysokosc || rzeczywista_wysokosc > max_wysokosc) {
		cout<<"Nie można uzyskać optymalnych schodów przy podanych wymiarach. \n";
		return 1;
	}

	cout<<"Optymalna liczba stopni: " << liczba_stopni << endl;
	cout<<"Wysokość każdego stopnia: " << rzeczywista_wysokosc_stopnia << " cm" << endl;
	cout<<"Długość każdego stopnia: " << rzeczywista_dlugosc_stopnia << " cm" << endl;
	
	return 0;
}

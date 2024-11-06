Dokumentacja programu - Kalkulator Liczby Stopni Schodów

1. Program służy do obliczenia liczby stopni potrzebnych do wykonania schodów o zadanej wysokości i długości. Każdy stopień musi spełniać określone wymagania podlinkowe na dole pliku.
Na podstawie tych danych program wylicza minimalną i maksymalną liczbę stopni, które spełniają te kryteria.
Wykorzystywane są biblioteki iostream oraz cmath. 

2. Użycie
Program przyjmuje od użytkownika:
a) całkowitą wysokość schodów (w cm)
b) całkowitą długość stopni (w cm)

Następnie oblicza minimalną i maksymalną liczbę stopni, które mogą być użyte.
Program wyświetla wynik lub informuje, że nie można zbudować schodów o zadanych wymiarach zgodnie z kryteriami.

3. Kod:
a) stałe:
- min_wysokosc_stopnia = 16cm
- max_wysokosc_stopnia = 19cm
- min_dlugosc_stopnia = 25cm
- max_dlugosc_stopnia = 32cm

b) zmienne:
- wysokosc_calkowita - całkowita wysokość schodów w centymetrach podana przez użytkownika
- dlugosc_calkowita - całkowita długość schodów w centymetrach podana przez użytkownika
- min_stopnie_wysokosc - minimalna liczba stopni wymagana na podstawie minimalnej wysokości jednego stopnia
- max_stopnie_wysokosc - maksymalna liczba stopni wymagana na podstawie maksymalnej wysokości jednego stopnia
- min_stopnie_dlugosc - minimalna liczba stopni wymagana na podstawie minimalnej długości jednego stopnia
- max_stopnie_dlugoscc - maksymalna liczba stopni wymagana na podstawie maksymalnej długości jednego stopnia
- min_stopnie - największa liczba spośród minimalnych obliczonych stopni
- max_stopnie - najmniejsza liczba spośród maksymalnych obliczonych stopni

4. Algorytm
- program pobiera dane wejściowe od użytkownika: wysokosc_calkowita i dlugosc_calkowita
- oblicza minimalną i maksymalną liczbę stopni wymaganych na podstawie wysokości a potem długości schodów
- wyznacza wspólny zakres liczby stopni, który spełnia oba wymagania
- jeśli min_stopnie jest mniejsze lub równe max_stopnie, program wyświetla możliwą minimalną i maksymalną liczbę stopni. W przeciwnym razie wyświetla komunikat, że schodów nie można zbudować z podanych wymiarów.

Zalecenia budowlane co do wysokości i długości stopnia są zgodne z wytycznymi rządowymi: 
https://budowlaneabc.gov.pl/standardy-projektowania-budynkow-dla-osob-niepelnosprawnych/budynek/komunikacja-pionowa-budynku/schody/stopnie/


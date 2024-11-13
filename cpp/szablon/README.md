Dokumentacja programu - Kalkulator Liczby Stopni Schodów

1. Program służy do obliczenia liczby stopni potrzebnych do wykonania schodów o zadanej wysokości i długości. Każdy stopień musi spełniać zalecenia budowlane co do długości i wysokości każdego stopnia.
Wykorzystywane są biblioteki iostream oraz cmath. 

2. Użycie
Program przyjmuje od użytkownika:
a) całkowitą wysokość schodów (w cm)
b) całkowitą długość stopni (w cm)

Następnie oblicza minimalną i maksymalną liczbę stopni, które mogą być użyte.
Program wyświetla wynik lub informuje, że nie można zbudować schodów o zadanych wymiarach zgodnie z kryteriami.

3. Kod:
a) stałe:
- min_wysokosc = 16cm
- max_wysokosc = 18cm
- opt_dlugosc = 29cm

b) zmienne:
- calkowita_wysokosc - całkowita wysokość schodów w centymetrach podana przez użytkownika
- calkowita_dlugosc - całkowita długość schodów w centymetrach podana przez użytkownika
- liczba stopni - ile stopni jest wymaganych do osiągnięcia wymiarów
- rzeczywista_dlugosc_stopnia - jaka powinna być długość stopnia
- rzeczywista_wysokosc_stopnia - jaka powinna być wysokość stopnia

4. Algorytm
- program pobiera dane wejściowe od użytkownika: wysokosc_calkowita i dlugosc_calkowita
- oblicza liczbę stopni na podstawie średniej optymalnej wysokości
- sprawdza czy rzeczywiste wymagane wymiary mieszczą się się w zaleceniach, jeśli nie to wyświetla odpowiedni komunikat
- wyświetla liczbę stopni wymaganych i jakie wymiary powinny mieć

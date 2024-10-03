BENCHMARK PORÓWNUJĄCY WYDAJNOŚĆ IINSTRUKCJI SWITCH I IF-ELSE

1. Program mierzy czas wykonania instrukcji switch i if-else używając losowych liczb z przedziału od 0 do 9 jako argumentów do funkcji. Celem jest porównanie, która instrukcja wykonuje zadania szybciej.

2. Struktura:
   a) funkcja switch_case(int x):
     - przyjmuje liczbę całkowitą x jako argument
     - używa instrukcji switch do zwrócenia wartości x na podstawie dopasowania do przypadków (case)

  b) funkcja if_else_case(int x):
    - przyjmuje liczbę całkowitą x jako argument
    - zawiera sekwencję instrukcji if-else, która zwraca wartość x na podstawie dopasowania do warunków (if-else)

  c) funkcja main():
   - tworzy losową liczbę całkowitą x z przedziału od 0 do 9
   - wykonuje milion iteracji, w każdej z nich wywołana jest funkcja switch_case oraz if_else_case
   - do pomiaru czasu używa biblioteki chrono
   - na końcu wyświetla czasy dla obu podejść

3. Biblioteki:
   - iostream - do obsługi wejścia i wyjścia
   - chrono - do pomiaru czasu
   - cstdlib - do generowania losowych liczb
   - ctime - ustawienie ziarna generowania liczb losowych za pomocą funkcji time

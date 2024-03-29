### Metodyka i Techniki Programowania II
## Lab 06
C++: Biblioteka STL (Standard Template Library)

**Biblioteka STL (Standard Template Library)**
Biblioteka STL – materiały z wykładu PI_13.pdf od slajdu 55.

#### Zadanie 1
1. Uruchom i przeanalizuj kod ze slajdu 58 (zamieszczony poniżej):
```cpp
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v(10);

    for (size_t i=0; i<10; ++i)
    {
        v[i] = i;
        cout << v[i] << endl;
    }
}
```
2. Zmodyfikować kod programu z punktu 1 aby rozmiar wektora mógł być dynamiczny (slajdy 64-67) 
3. Wypisz ilość elementów w wektorze. 
4. Usuń elementy od 3 do 7 i wyświetl wynik. 
5. Usuń ostatni element wektora i wyświetl wynik. 
6. Wstaw na początek wektora liczbę 102 i wyświetl wynik. 
7. Wstaw na koniec wektora liczbę 110011 i wyświetl wynik. 
8. Następnie kod umieść **W SWOJEJ GAŁĘZI** w repozytorium zdalnym

#### Zadanie 2
Prosta kolejka typu FIFO (ang. First In First Out) umożliwia wstawianie elementów na końcu i pobieranie elementów z początku kolejki. Wykorzystując dwie metody kolejki `queue` z biblioteki STL: `push` i `pop`, które służą do dodawania danych do kolejki i pobierania danych z kolejki (z jednoczesnym ich usuwaniem): 
1. Napisz program wstawiający do kolejki liczby naturalne od 1 do 12. Wyświetl zawartość kolejki na ekran. 
2. Podaj długość kolejki używając metody `size`. 
3. Usuń z kolejki 5 elementów. Wyświetl zawartość kolejki na ekran i podaj jej długość. 
4. Uzupełnić program o funkcję ograniczającą długość kolejki do zadanej wartości np. 15 i usuwającej elementy przekraczające ograniczenie. W przypadku gdy przekroczone jest ograniczenie funkcja ma wyświetlać informację, ze kolejka jest pełna a element jest usuwany. 
5. Wykorzystując opracowaną funkcję dodać do kolejki 4 elementy. 
6. Wyświetl zawartość kolejki na ekran i podaj jej długość. 7. Usunąć z kolejki 2 elementy. 
8. Wyświetl zawartość kolejki na ekran i podaj jej długość. 
9. Dodać do kolejki 7 elementów. 
10. Wyświetl zawartość kolejki na ekran i podaj jej długość. 
11. Następnie kod umieść **W SWOJEJ GAŁĘZI** w repozytorium zdalnym


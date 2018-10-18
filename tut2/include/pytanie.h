#ifndef PYTANIE_H
#define PYTANIE_H
#include <iostream>
using namespace std;

class Pytanie
{
    public:
        string trescPytania;
        string a, b, c, d;
        int numerPytania;
        string poprawnaOdpowiedz;
        string odpowiedzUzytkownika;
        int punkt; // 1 lub 0

        void wczytaj(); //wczytuje pytania z pliku
        void zadajPytanie(); //pokazuje pytanie, czyta odpowiedz
        void sprawdz(); // sprawdza poprawnosc

};

#endif // PYTANIE_H

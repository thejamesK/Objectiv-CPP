#include <iostream>
#include "pytanie.h"

using namespace std;

int main()
{
    Pytanie p[5];
    int suma = 0;
    for(int i = 0; i <= 4; i++)
    {
        p[i].numerPytania=i+1;
        p[i].wczytaj();
        p[i].zadajPytanie();
        p[i].sprawdz();
        suma += p[i].punkt;
    }

    cout<<"KONIEC QUIZU! PUNKTY = "<<suma;

    return 0;
}

#include "pytanie.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void Pytanie::wczytaj()
{
    fstream plik;
    plik.open("quiz.txt", ios::in);

    if(plik.good()==false)
    {
        cout<<"Nie udalo sie otworzyc pliku!";
        exit(0);
    }

    int numerLinii = (numerPytania-1)*6+1;
    int aktualnyNumer = 1;
    string linia;


    while(getline(plik, linia))
    {
        if(aktualnyNumer==numerLinii)   trescPytania = linia;
        if(aktualnyNumer==numerLinii+1)   a = linia;
        if(aktualnyNumer==numerLinii+2)   b = linia;
        if(aktualnyNumer==numerLinii+3)   c = linia;
        if(aktualnyNumer==numerLinii+4)   d = linia;
        if(aktualnyNumer==numerLinii+5)   poprawnaOdpowiedz = linia;
        aktualnyNumer++;
    }

    plik.close();

}

void Pytanie::zadajPytanie()
{
    cout<<endl<<trescPytania<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<"---------------------"<<endl;
    cout<<endl<<"Odpowiedz: ";
    cin>>odpowiedzUzytkownika;

}

void Pytanie::sprawdz()
{
    if(odpowiedzUzytkownika==poprawnaOdpowiedz)
    {
        punkt = 1;
    }
    else
        punkt = 0;
}

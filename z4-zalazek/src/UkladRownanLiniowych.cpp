#include "UkladRownanLiniowych.hh"

using namespace std;
/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy UkladRownanLiniowych, ktore zawieraja 
 *  wiecej kodu niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */

std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych &UklRown)
{
    Strm>>UklRown.set_Matrix()>>UklRown.set_WWolny();
    return Strm;
}

std::ostream& operator << ( std::ostream &Strm, const UkladRownanLiniowych &UklRown)
{
    Strm<<"Macierz transpowana wynosi: "<<endl;
    Strm<<UklRown.get_Matrix();

    Strm<<"Wyraz wolny wynosi: "<<endl;
    Strm<<UklRown.get_WWolny(); 
    return Strm;
}

#include "Macierz.hh"


/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Macierz, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */
  Wektor &Macierz::operator [](int x)
  {
    return Tab[x];
  }

  Wektor Macierz::operator [](int x) const
  {
    return Tab[x];
  }

  std::istream& operator >> (std::istream &Strm, Macierz &Mac)
  {
    for(int x=0; x<ROZMIAR; x++)
    Strm>>Mac[x];
    return Strm;
  }

  std::ostream& operator << (std::ostream &Strm, const Macierz &Mac)
  {
    for(int x=0; x<ROZMIAR; x++)
    Strm<<Mac[x]<<endl;
    return Strm;
  }
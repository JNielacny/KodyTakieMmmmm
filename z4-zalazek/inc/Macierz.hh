#ifndef MACIERZ_HH
#define MACIERZ_HH

#include "Wektor.hh"
#include "rozmiar.h"
#include <iostream>


/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Macierz {
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich pol i metod prywatnych
   */
  Wektor Tab[ROZMIAR];
  public:
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich metod publicznych
   */
  Wektor &operator [](int x);
  Wektor operator [](int x) const;    
};


/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::istream& operator >> (std::istream &Strm, Macierz &Mac);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::ostream& operator << (std::ostream &Strm, const Macierz &Mac);


#endif

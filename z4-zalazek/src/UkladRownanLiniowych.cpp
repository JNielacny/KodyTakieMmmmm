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

void Macierz::Gauss()
{
    int a=1;
    int x,z,p ;
    Wektor odej; /*wartość która odejmiemy*/    
    double ilor;   /*iloraz*/
    double suma;

    for(x=0; x<ROZMIAR; x++)
    {
        for(z=0; z<ROZMIAR; z++)
        {
            if(Tab[x][x]!=0)
            {
               for(p=x+1; p<ROZMIAR; p++)
                {
                    ilor=Tab[p][x]/Tab[x][x];
                    odej=Tab[x]*ilor;
                    Tab[p]=Tab[p]-odej;
                }
            }
            else
            {
                for(p=x+1; p<ROZMIAR; p++)
                {
                    if(Tab[p][x]==0)
                    {
                        break;
                    }
                    else
                    {
                        a=a*(-1);
                        swap(Tab[x], Tab[p]);
                    }
                }
            }
        }
    }
    
    suma=1;
    for(x=0; x<ROZMIAR; x++)
    {
        suma=suma*Tab[x][x];
    }
    suma=suma*a;
    Wyzn=suma;
    
    cout << "Wyznacznik macierzy wynosi: " << endl;
    cout << Wyzn << endl; 

}
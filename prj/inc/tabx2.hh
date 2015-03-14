#ifndef TABX2HH
#define TABX2_HH
#include <iostream>
#include <time.h>
#include <string>
#include <fstream>
#include <cstdlib>
#include "benchmark.hh"
/*!
 * \file
 * \brief Definicja klasy tabx2
 *
 * Plik zawiera definicję klasy tabx2.Modeluje glowne pojecia zwiazane z programem
 */
class tabx2: public benchmark
{
  /*!
   *\brief Modeluje pojęcie tabx2
   *
   * Tworzy tablice alokowana dynamicznie o pojemnosci wybranej przez uzytkownika , umozliwia wykonywanie mnozenia przez 2 wszystkich elementow tablicy
   */
  
private:
  /*!
   * \brief Rozmiar tablicy                                        
   */
  int size;
  /*!
   *\brief Wskaznik na tablice przechowujaca dane                                  */
  int *tab;
  
public:
  
  /*!
   *  Mnozy okreslona ilosc danych przez 2
   \param[in] length - ilosc danych do przemnozenia                                       
  */
  void test(int length);
  
  /*!
   *Konstruktor wczytujacy okreslona ilosc danych i alokujacy je dynamicznie 
   \param[in] size - dlugosc tablice                                       
  */
  tabx2(int size);
  /*!
   *\brief zwykly destruktor
   */
  ~tabx2();
};

#endif

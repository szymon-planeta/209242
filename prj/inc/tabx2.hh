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
 */
class tabx2: public benchmark
{

  
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
   *\brief Konstruktor paramteryczny
   */
  /*!
   *Konstruktor wczytujacy okreslona ilosc danych i alokujacy je dynamicznie 
   \param[in] size - dlugosc tablice                                       
  */
  tabx2(int size);
  /*!
   *\brief Zwykly destruktor
   */
  ~tabx2();
};

#endif

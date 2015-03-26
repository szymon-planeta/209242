#ifndef LIST_ARRAY_HH
#define LIST_ARRAY_HH
#include <iostream>
#include <time.h>
#include <string>
#include <fstream>
#include <cstdlib>
#include "benchmark.hh"
/*!
 * \file
 * \brief Definicja klasy list_array
 */


class list_array: public benchmark
{
public:

  /*!
   * \brief Ilość elementów na liscie
   */
  unsigned long int n;
  /*!
   * \brief Uchwyt do listy
   */
  int * tmp;
  /*!
   * \brief Rozmiar tablicy
   */
  unsigned long int temp;

public:
  /*!
   *\brief 
   * Metoda push() dodaje element na listę
   *
   *\param[in] insert - wartość dodawanego elementu
   *\param[in] where  - na które miejsce ów element ma zostać dodany
   *\param[in] extend - parametr ustalający o ile powiększyć listę
   *\param[in] x - typ zwiększania tablicy '+'/'-'
   */
  void push(int insert,unsigned int where,unsigned int extend,char x);
  /*!
   *\brief
   * Metoda pop() definiuje usuwanie elementu z listy
   *\param[in] whence - numer usuwanego elementu
   */
  void pop(unsigned int whence);
  /*!
   *\brief Metoda size() zwraca ilość elementów na liście
   */
  unsigned size();
  
  /*!
   *\brief Konstruktor inicjalizuje pustą listę , wskaźnik na listę jest domyślnie ustawiony na NULL
   */
  list_array();
  /*!
   *\brief Destruktor usuwa listę
   */
   ~list_array();
  /*!
   *\brief Metoda test() realizuje operacje wypełniania listy danymi
   *\param[in] length - ilość dodawanych lementów  
   */
  void test(unsigned long int length);

  /*!
   * \brief Metoda quicksort(int left, int right) przeprowadza operację sortowania szybkiego.
   *
   * Aby posortować całą tablicę, należy jako argumenty podać 0 i size()-1.
   *
   * \param[in] left - początek zakresu (pierwszy element) sortowania
   * \param[in] right - koniec zakresu (ostatni element) sortowania
   */
  void quicksort(int left, int right);
};

#endif

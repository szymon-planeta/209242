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
  /*!
   *\brief Metoda push() dodaje daną na stos 
   *\param[in] insert - dodawany element    
   */
  void push(int insert,unsigned int where,unsigned int extend);
    /*!
   *\brief Metoda pop() definiuje usuwanie elementu ze stosu   
   */
  void pop();
  /*!
   *\brief Metoda size() zwraca ilość elementów stosu
   */
  unsigned size();
  
public:
  /*!
   *\brief Konstruktor inicjalizujący zmienną wskaźnikową , która domyślnie ma pokazywać na NULL
   */
  list_array();
  /*!
   *\brief Destruktor usuwa wszystkie elementy ze stosu za pomocą funkcji pop
   */
   ~list_array();
  /*!
   *\brief Metoda test() realizuje operacje zapelniania stosu ustalonymi danymi, czas będzie zliczany 
   *\param[in] length - ilość dodawanych lementów  
   */
  void test(unsigned long int length);
};

#endif

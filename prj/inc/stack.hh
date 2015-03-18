#ifndef STACK_HH
#define STACK_HH
#include <iostream>
#include <time.h>
#include <string>
#include <fstream>
#include <cstdlib>
#include "benchmark.hh"
#include "list.hh"
/*!
 * \file
 * \brief Definicja klasy stack
 *
 */



class stack: public benchmark
{
  
  
private:
  /*!
   * \brief Pole będące pierwszym wskaźnikiem na elementy stosu
   */
  node *head;
  /*!
   *\brief Metoda push() dodaje daną na stos 
   *\param[in] insert - dodawany element    
   */
  void push(int insert);
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
  stack();
  /*!
   *\brief Destruktor usuwa wszystkie elementy ze stosu za pomocą funkcji pop
   */
  ~stack();
  /*!
   *\brief Metoda test() realizuje operacje zapelniania stosu ustalonymi danymi, czas będzie zliczany 
 *\param[in] length - ilosc danych do wstawienie
   */
  void test(unsigned long int length);
};

#endif

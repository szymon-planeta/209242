#ifndef QUEUE_HH
#define QUEUE_HH
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



class queue: public benchmark
{


  
private:
  /*!
   * \brief Pole będące pierwszym wskaźnikiem na elementy kolejki
   */
  node *head;
  /*!
   * \brief Pole będące wskaźnikiem na ostatni element kolejki
   */
  node*tail;
  /*!
   *\brief Metoda push() dodaje daną do kolejki 
   *\param[in] insert - dodawany element    
   */
  void push(int insert);
    /*!
   *\brief Metoda pop() definiuje usuwanie elementu z kolejki   
   */
void pop();
  /*!
   *\brief Metoda size() zwraca ilość elementów kolejki
   */
  unsigned size();
  
public:
  /*!
   *\brief Konstruktor inicjalizujący zmienną wskaźnikową , która domyślnie ma pokazywać na NULL
   */
  queue();
  /*!
   *\brief Destruktor usuwa wszystkie elementy z kolejki za pomocą funkcji pop
   */
  ~queue();
  /*!
   *\brief Metoda test() realizuje operacje zapelniania kolejki ustalonymi danymi, czas będzie zliczany 
 *\param[in] length - ilosc danych do wstawienia
   */
  void test(unsigned long int length);
};

#endif

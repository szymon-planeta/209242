#ifndef QUEUE_HH
#define QUEUE_HH
#include <iostream>
#include <time.h>
#include <string>
#include <fstream>
#include <cstdlib>
#include "benchmark.hh"
/*!
 * \file
 * \brief Definicja klasy stack
 *
 */



class queue: public benchmark
{

  struct node
  {
  /*!
   * \brief Pole do którego dopisywane są dane
   */
    int data;
    node *next;
    
    node()
    {
      data=0;
      next=NULL;
    }
  };
  
public:
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
  queue();
  /*!
   *\brief Destruktor usuwa wszystkie elementy ze stosu za pomocą funkcji pop
   */
  ~queue();
  /*!
   *\brief Metoda test() realizuje operacje zapelniania stosu ustalonymi danymi, czas będzie zliczany 
   */
  void test(unsigned long int length);
};

#endif

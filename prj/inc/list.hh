#ifndef LIST_HH
#define LIST_HH
#include <iostream>
#include <time.h>
#include <string>
#include <fstream>
#include <cstdlib>
#include "benchmark.hh"
/*!
 * \file
 * \brief
 * Definicja klasy lista
 *
 */

  struct node
  {
    /*!
     * \brief Pole do którego dopisywane są dane
     *     
     */
    int data;
    /*!
     * \brief 
     * Pole będące wskaźnikiem na następny element
     *
     */
    node *next;
    /*!
     * \brief 
     * Konstruktor węzła
     *
     * Konstruktor inicjalizuje nowy węzeł z wartością równą element
     * oraz wskaźnikiem na NULL
     *
     * \param[in] element - element dodawany na koniec listy
     */
    node(int element)
    {
      data=0;
      next=NULL;
    }

  };

class list: public benchmark
{

private:
  /*!
   * \brief 
   * Pole będące wskaźnikiem na pierwszy element listy
   *
   */
  node *head;
  /*!
   * \brief
   * Pole będące wskaźnikiem na ostatni element listy
   *
   */
  node *tail;
  /*!
   *\brief 
   * Metoda push() dodaje element na listę
   *
   *\param[in] insert - wartość dodawanego elementu
   *\param[in] where  - na które miejsce ów element ma zostać dodany
   *
   */
  void push(int insert,unsigned int where);
  /*!
   *\brief
   * Metoda pop() definiuje usuwanie elementu z listy
   *\param[in] insert - numer usuwanego elementu
   */
  void pop(unsigned int whence);
  /*!
   *\brief
   * Metoda size() zwraca ilość elementów znajdujących się na liście
   *
   */
  unsigned size();
  
public:
  /*!
   *\brief
   * Konstruktor inicjalizujący pustą listę, początek i koniec listy
   * są domyślnie ustawione na NULL
   *
   */
  list();
  /*!
   *\brief 
   * Destruktor usuwa wszystkie elementy ze stosu za pomocą 
   *funkcji pop   
   */
  ~list();
  /*!
   *\brief
   * Metoda test() realizuje operacje za
   *\param[in] length - ilość dodawanych lementów  
   */
  void test(int source,unsigned long int length);
};

#endif

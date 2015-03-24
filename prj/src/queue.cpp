#include"queue.hh"
/*!
* \file
* \brief Deklaracja klasy queue
* 
*/


queue::queue()
{
  head = NULL;
  tail=NULL;
}
queue::~queue()
{
  while(head) pop();
  }

/*!
 *\brief Metoda push() wczytuje liczbę naturalną do kolejki 
\n
Przykład wywołania funkcji : \n
push(10) - Na koniec kolejki zostanie wprowadzona liczba 10
*/

void queue::push(int insert)
{


}

/*!
 *\brief Metoda pop() usuwa z kolejki pierwszy element lub zwraca komunikat o błędzie w przypadku próby usnięcia elementu z pustej kolejki
 */
void queue::pop()
{

  
}

/*!
 *\brief Metoda size() zwraca ilość elementów znajdujących się w kolejce 
*/

unsigned queue::size()
{
  return 0;
}
/*!
 *\brief Metoda test() realizuje wczytywanie zadanej ilości danych do kolejki 
*/
void queue::test(unsigned long int length)
{
 
}

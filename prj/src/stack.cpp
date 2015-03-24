#include"stack.hh"
/*!
* \file
* \brief Deklaracja klasy stack
* 
*/

stack::stack()
{
  head = NULL;
}
stack::~stack()
{
  while(head) pop();
}
/*!
 *\brief Metoda push() wczytuje liczbę naturalną na stos 
 \n
 Przykład wywołania funkcji : \n
 push(10) - Na początek stosu zostanie wprowadzona liczba 10
*/
void stack::push(int insert)
{

}
/*!
 *\brief Metoda pop() usuwa ze stosu ostatni element lub zwraca komunikat o błędzie w przypadku próby usnięcia elementu z pustego stosu
 */
void stack::pop()
{

}
/*!
 *\brief Metoda size() zwraca ilość elementów znajdujących się na stosie 
 */
unsigned stack::size()
{
  return 0;
}
/*!
 *\brief Metoda test() realizuje wczytywanie zadanej ilości danych na stos 
*/

void stack::test(unsigned long int length)
{
 
}
 

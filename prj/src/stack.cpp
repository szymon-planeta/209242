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
  node *tmp =new node;
  tmp->data=insert;
  if(head==NULL)
    {
      head=tmp;
    }
  else
    {
      node *tmp1 = head;
      head=tmp;
      tmp->next=tmp1;      
    }
}
/*!
 *\brief Metoda pop() usuwa ze stosu ostatni element lub zwraca komunikat o błędzie w przypadku próby usnięcia elementu z pustego stosu
 */
void stack::pop()
{
  if (head==NULL) std::cerr<<"Lista jest pusta. Nie można usunąć żadnego elementu!";
  else
    {
      node *tmp=head;
      head=tmp->next;
      delete tmp;
    }
}
/*!
 *\brief Metoda size() zwraca ilość elementów znajdujących się na stosie 
 */
unsigned stack::size()
{
  unsigned counter=0;
  node *tmp=head;
  while(tmp)
    {
      tmp=tmp->next;
      counter++;
    }
  return counter;
}
void stack::test(unsigned long int length)
{
  for (unsigned long int i=1;i<length;i++)
    {
      //stack();
      //a.push(3);
    }
}

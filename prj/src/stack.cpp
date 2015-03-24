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
  if( head==NULL )
    {
      node *tmp = new node ( insert );
      head=tmp;
    }
  else
    {
      node *tmp =new node ( insert );
      tmp->next=head;
      head=tmp;
    }
}
/*!
 *\brief Metoda pop() usuwa ze stosu ostatni element lub zwraca komunikat o błędzie w przypadku próby usnięcia elementu z pustego stosu
 */
void stack::pop()
{
  if (size()==0)
    {
      std::cerr<<"Stos jest pusty - nie można usunąć elementu!"<<std::endl;
      exit(5);
    }
  else
    {
  node *temp =head->next; 
  delete head;
  head=temp;
    }
}
/*!
 *\brief Metoda size() zwraca ilość elementów znajdujących się na stosie 
 */
unsigned stack::size()
{
  unsigned int counter =0 ;
  node *tmp = head;
  while(tmp)
    {
      tmp=tmp->next;
      counter++;
    }
  return counter;
}
/*!
 *\brief Metoda test() realizuje wczytywanie zadanej ilości danych na stos 
*/

void stack::test(unsigned long int length)
{
   int tmp;
  std::fstream file("random_data.dat",std::ios::in);
 if ( file.fail() == true )
   {
     std::cerr <<"Failed to read from file ";
   }
 else
   {
     for (unsigned long int i=0;i<length;i++)
       {
	 file>>tmp;
	 push(tmp);
	 std::cout<<i<<std::endl;
       }
     file.close();
   }
}
 

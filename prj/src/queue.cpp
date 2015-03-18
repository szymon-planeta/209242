#include"queue.hh"
/*!
* \file
* \brief Deklaracja klasy queue
* 
*/


queue::queue()
{
  head = NULL;
}
queue::~queue()
{
  while(head) pop();
  }

/*!
 *\brief Metoda push() wczytuje liczbę naturalną na stos 
\n
Przykład wywołania funkcji : \n
push(10) - Na początek stosu zostanie wprowadzona liczba 10
*/

void queue::push(int insert)
{
  node *tmp =new node;
  tmp->data=insert;
  if(head==NULL)
    {
      head=tmp;
    }
  else
    {
      node *tmp1=head;
      while(tmp1->next) tmp1=tmp1->next;
      tmp1->next=tmp;
      tmp->next=NULL;
    }
}

/*!
 *\brief Metoda pop() usuwa ze stosu ostatni element lub zwraca komunikat o błędzie w przypadku próby usnięcia elementu z pustego stosu
 */
void queue::pop()
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

unsigned queue::size()
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

void queue::test(unsigned long int length)
{
  queue a;
  int tmp;
  std::fstream file("random_data.dat",std::ios::in);
 if ( file.fail() == true )
   {
     std::cerr <<"Failed to read from file ";
    }
 else
   {
     for (unsigned long int i=1;i<length;i++)
       {
	 file>>tmp;
	 a.push(tmp);
	 std::cout<<tmp<<std::endl;
       }

     file.close();
   }
}

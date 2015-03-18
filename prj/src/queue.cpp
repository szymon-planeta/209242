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
  node *tmp =new node;
  tmp->data=insert;
  if(tail) tail->next=tmp;
  else head=tmp;
  tail=tmp;

}

/*!
 *\brief Metoda pop() usuwa z kolejki pierwszy element lub zwraca komunikat o błędzie w przypadku próby usnięcia elementu z pustej kolejki
 */
void queue::pop()
{
  if (head==NULL) std::cerr<<"Lista jest pusta. Nie można usunąć żadnego elementu!";
  else
    {
      node *tmp=head;
      head=tmp->next;
      if(!head) tail=NULL;
      delete tmp;
    }
  
}

/*!
 *\brief Metoda size() zwraca ilość elementów znajdujących się w kolejce 
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
/*!
 *\brief Metoda test() realizuje wczytywanie zadanej ilości danych do kolejki 
*/
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

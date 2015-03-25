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
 *\brief
 * Metoda push() wczytuje liczbę naturalną do kolejki 
 * \n
 * Przykład wywołania funkcji : \n
 * push(10) - Na koniec kolejki zostanie wprowadzona liczba 10
*/

void queue::push(int insert)
{
  if( head==NULL )
    {
      node *tmp = new node ( insert );
      head=tmp;
      tail=tmp;
    }
  else
    {
      node *tmp =new node ( insert );
      tail->next=tmp;
      tail=tmp;
    }
}

/*!
 *\brief
 * Metoda pop() usuwa z kolejki pierwszy element lub zwraca komunikat o błędzie w przypadku próby usnięcia elementu z pustej kolejki
 */
void queue::pop()
{
  if (size()==0)
    {
      std::cerr<<"Kolejka jest pusta - nie można usunąć elementu!"<<std::endl;
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
 *\brief 
 * Metoda size() zwraca ilość elementów znajdujących się w kolejce 
*/

unsigned queue::size()
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
 *\brief
 *  Metoda test() realizuje wczytywanie zadanej ilości danych do kolejki 
*/
void queue::test(unsigned long int length)
{
    int tmp;
  std::fstream file("random_data.dat",std::ios::in);
 if ( file.fail() == true )
   {
     std::cerr <<"Failed to read from file ";
     exit(3);
   }
 else
   {
     for (unsigned long int i=0;i<length;i++)
       {
	 file>>tmp;
	 push(tmp);
	 // std::cout<<i<<std::endl;
       }
     file.close();
   }
}

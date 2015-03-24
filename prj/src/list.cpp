#include"list.hh"
/*!
* \file
* \brief Deklaracja klasy list
* 
*/


list::list()
{
  head=NULL;
  tail=NULL;
}

list::~list()
{
  while(head) pop(0);
}
/*!
 *\brief 
 * Metoda push() wczytuje liczbę naturalną na liste 
 *
 * Elementy listy są numerowane od 0!! \n
 * Przykład użycia funkcji: \n
 * push(3,3) -> wstawia element o wartości 3 na 3 miejsce listy , lub zwraca 
 * błąd 3 jeżeli lista jest zbyt krótka
*/

void list::push(int insert,unsigned int where)
{
  if(where<0 || where>size())
    {
      std::cerr<<"Nie można dodać elementów znajduje się obecnie na liście - błędny index !"<<std::endl; exit(3);
    }
  else if( head==NULL )
    {
      node *tmp = new node ( insert );
      head=tmp;
      tail=tmp;
    }
  else if ( where==0 )
    {
      node *tmp =new node ( insert );
      tmp->next=head;
      head=tmp;
    }
  else if ( where==size() )
    {
      node *tmp =new node ( insert );
      tail->next=tmp;
      tail=tmp;
    }
  else
    {
      node *tmp = new node ( insert );
      node *temp; 
      node *index=head;
      for ( unsigned int i=0;i<where-1;i++ )
	{
	 index=index->next;
	 temp=index->next;
	 tmp->next=temp;
	 index->next=tmp;
	}
    }
}
/*!
 *\brief 
 * Metoda pop() usuwa z listy wybrany element , lub zwraca błąd
 * jeżeli lista jest już pusta
*/

void list::pop(unsigned int whence)
{
  if( whence<0 || whence>size() )
    {
      std::cerr<<"Nie można usunać z listy,zbyt mało danych na liście, przekroczono zakres !"<<std::endl;
      exit(4);
    }
  else if (size()==0)
    {
      std::cerr<<"Lista jest pusta - nie można usunąć elementu!"<<std::endl;
      exit(5);
    }
  else if (whence==0)
    {
      node *temp =head->next; 
      delete head;
      head=temp;
     
    }
  else if ( whence == size()-1 )
    {
      node *index=head;
      for(unsigned i=0;i<whence-1;i++)
	{
	  index=index->next;
	  delete tail;
	  tail=index;
	}
    }
  else
	{
	  node *temp;
	  node *index=head;
	  for(unsigned int i=0;i<whence-1;i++)
	    {
	      index=index->next;
	      temp=index->next;
	      index->next=temp->next;
	      delete temp;
	    }
	}
}




/*!
 *\brief
 *
 * Metoda size() zwraca ilość elementów znajdujących się na liście 
 */

unsigned list::size()
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
 * Metoda test() realizuje wczytywanie zadanej ilości danych( np. jak niżej samych dziesiątek ) do listy na arbitralnie wybrane miejsce (np. jak niżej na początek)
 * 
 */

void list::test(int source,unsigned long int length)
{
  int tmp;
  for (unsigned long int i=0;i<length;i++)
    {
      
      push(source,0);
      //std::cout<<i<<std::endl; //do destów
    }
}




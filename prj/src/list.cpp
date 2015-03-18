#include"list.hh"
/*!
* \file
* \brief Deklaracja klasy list
* 
*/

list::list()
{
  head = NULL;
}
list::~list()
{
  while(head) pop();
}
/*!
 *\brief Metoda push() wczytuje liczbę naturalną na liste 
\n
Przykład wywołania funkcji : \n
push(10) - Na początek listy zostanie wprowadzona liczba 10
 
*/

void list::push(int insert)
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
 *\brief Metoda pop() usuwa z listy ostatni element lub zwraca komunikat o błędzie w przypadku próby usnięcia elementu z pustego stosu
*/

void list::pop()
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
 *\brief Metoda size() zwraca ilość elementów znajdujących się na liście 
*/

unsigned list::size()
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
 *\brief Metoda test() realizuje wczytywanie zadanej ilości danych do listy 
*/
void list::test(unsigned long int length)
{
  list a;
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



#include"list_array.hh"
/*!
* \file
* \brief Deklaracja klasy list
* 
*/

list_array::list_array(unsigned long int length)
{
  n=length;
  ptm=new int[length];
  ptm1=length;
}

list_array::~list_array()
{
  //  delete[] ptm;

}
/*!
 *\brief Metoda push() wczytuje liczbę naturalną na liste 
\n
Przykład wywołania funkcji : \n
push(10) - Na początek listy zostanie wprowadzona liczba 10

*/

void list_array::push(int insert)
{
  if(tmp1==0)
    {


      if(ptm1==n)
	{
	  ptm[ptm1]=insert;
	  ptm1--;
	}  
      else
	{
	  ptm[ptm1]=insert;
	  ptm1--;
	  
	}
    } 
}
/*!
 *\brief Metoda pop() usuwa z listy ostatni element lub zwraca komunikat o błędzie w przypadku próby usnięcia elementu z pustego stosu
*/

void list_array::pop()
{
 
  
}
/*!
 *\brief Metoda size() zwraca ilość elementów znajdujących się na liście 
*/

unsigned list_array::size()
{
  return n-ptm1;
}

/*!
 *\brief Metoda test() realizuje wczytywanie zadanej ilości danych do listy 
*/
void list_array::test(unsigned long int length)
{
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
	 push(tmp);
	 std::cout<<tmp<<std::endl;
       }
     file.close();
   }
}



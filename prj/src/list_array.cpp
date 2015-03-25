#include"list_array.hh"
/*!
* \file
* \brief Deklaracja klasy list
* 
*/

list_array::list_array()
{
  n=0;
  tmp=NULL;
  temp=0;
  
}

list_array::~list_array()
{
  delete[] tmp;
}
/*!
 *\brief Metoda push() wczytuje liczbę naturalną na liste 
\n
Przykład wywołania funkcji : \n
push(10) - Na początek listy zostanie wprowadzona liczba 10

*/

void list_array::push(int insert,unsigned int where,unsigned int extension)
{
  if ( where<0 || where>n )
    {
      std::cerr<<"Nieprawidłowy element, na liście jest zbyt mało elementów!"<<std::endl;
      exit(6);
    }
  else if(tmp==NULL)
    {
      tmp=new int [1];
      tmp[0]=insert;
      n++;
      temp++;
    }

  else if ( where==0 ) //dodajemy na początek 
    {
      if (temp == n) // czy tablica wymaga rozszerzenia ?
	{
	  temp=n+extension;
	  int *ptm=new int [temp];
	  
	  for ( unsigned int i =0;i<n;i++ )
	    {
	      ptm[(temp-i)-1]=tmp[(n-i)-1];
	    }
	  ptm[(temp-n)-1]=insert;
	  delete [] tmp;
	  tmp=ptm;
	  n++;
	}
      else //jesli nie
	{
	  tmp[(temp-n)-1]=insert;
	  n++;
	}
    }  

  else if ( where==size() ) //dodajemy na koniec
    {
      if (temp == n) // czy tablica wymaga rozszerzenia ?
	{
	  temp=n+extension;
	  int *ptm=new int [temp];
	  for ( unsigned int i =0;i<n;i++ )
	    {
	      ptm[i]=tmp[i];
	    }
	  delete [] tmp;
	  tmp=ptm;
	  tmp[n]=insert;
	  n++;
	}
      else //jesli nie
	{
	  tmp[n]=insert;
	  n++;
	}
    }

  else
   {
     if (temp == n) // czy tablica wymaga rozszerzenia ?
       {
	 temp=n+extension;
	 int *ptm=new int [temp];
	 for ( unsigned int i =0;i<where;i++ )
	   {
	     ptm[i]=tmp[i];
	   }
	 ptm[where]=insert;
	 for ( unsigned int i=(where+1);i<n+1;i++ )
	   {
	     ptm[i]=tmp[i-1];
	   }
	 delete [] tmp;
	 tmp=ptm;
	 n++;
       }
     else
       {
	 int *ptm=new int [n];
	 for ( unsigned int i =0;i<where;i++ )
	   {
	     ptm[i]=tmp[i];
	   }
	 ptm[where]=insert;
	 for ( unsigned int i=(where+1);i<n+1;i++ )
	   {
	     ptm[i]=tmp[i-1];
	   }
	 delete [] tmp;
	 tmp=ptm;
	 n++;
	 
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
  return n;
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
	 push(tmp,0,1);
	 std::cout<<tmp<<std::endl;
       }
     file.close();
   }
}



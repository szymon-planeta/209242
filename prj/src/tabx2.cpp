#include"tabx2.hh"
/*!
* \file
* \brief Deklaracja klasy main
* 
*/
void tabx2::test(int length){

  for (int i=0 ; i < length ; i++)
    {
      tab[i]*=2;
    }
}

tabx2::tabx2(int ptm){
  size=ptm;
 std::fstream file("random_data.dat",std::ios::in);
  if ( file.fail() == true )
    {
      std::cerr <<"Failed to read from file ";
    }
  else
    {
      tab= new int [size];
      for ( int i =0; i<size; i++)
	{
	  file>>tab[i];	  
	}
      file.close();
    }

}


tabx2::~tabx2()
{
  delete [] tab; //usuwanie tab. dynamicznej
  
}


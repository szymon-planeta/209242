 #include"generator.hh"

/*!
* \file
* \brief Deklaracja funckji generujacej liczby losowe
* 
*/

bool data_generator (int data_amount)
{
  srand( time (NULL) ) ; //punkt startowy jako czas na komputerze w celu generowania coraz to nowych liczb
 
  std::fstream file("random_data.dat",std::ios::out | std::ios::trunc);
  if ( file.fail() == true )
    {
      std::cerr <<"Failed to write to file ";
      return false;
    }
  else
    {
      for(int i=0;i<data_amount;i++)
	{
	  double random_number=rand() %1000 + 0; // liczby od 0 do 1000
	  file << random_number << std::endl ;
	}
      file.close();
      return true; 
    } 
}

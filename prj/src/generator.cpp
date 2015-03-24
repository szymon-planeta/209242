 #include"generator.hh"

/*!
* \file
* \brief Deklaracja funckji generujacej liczby losowe
* 
*/

void data_generator (unsigned long int data_amount)
{
  srand( time (NULL) ) ; //punkt startowy jako czas na komputerze w celu generowania coraz to nowych liczb
 
  std::fstream file("random_data.dat",std::ios::out | std::ios::trunc);
  if ( file.fail() == true )
    {
      std::cerr <<"Failed to write to random_data.dat !";
      exit(1);
    }
  else
    {
      for(unsigned long int i=0;i<data_amount;i++)
	{
	  double random_number=rand() %10 + 0; // liczby od 0 do 10
	  file << random_number << std::endl ;
	}
      file.close(); 
    } 
}


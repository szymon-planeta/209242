#include "benchmark.hh" 
/*!
 *\file
 *\brief Deklaracja funkzji z  klasy Benchmark
 */

/*!
 *\brief Metoda analyze zlicza czas fukcji test()
 *\n
Przykład wywołania funkcji : \n
analyze("Plik_wynikowy",100,7) -> Przeprowadza analize czesu trwania funkcji test() dla 1 miliona danych(ilość danych należy podać jako potęgę 10 ) , każdy czas trwania funkcji jest ustalany na podstawie średniej arytmetycznej ze 100 prób , wyniki zapisuje do pliku o nazwie Plik_wynikowy
*/

void benchmark::analyze (const char *name_output,int repeat,int data_amount)
{
  float *tab = new float [repeat];
  std::fstream file(name_output,std::ios::out);
  if ( file.fail() )
    {
      std::cerr <<"Failed to open file ";
      exit(3);
    }
  
  else
    {
      for(int j=0;j<=data_amount;j++)
	{
	  float tmp =0;
	  for (int i=0 ;i<repeat;i++)
	    {

	      clock_t begin_time = clock();
	      {
		test(pow(10,j));
	      }
	      tab[i]=float( clock()- begin_time ) / CLOCKS_PER_SEC;
	      tmp+=tab[i];
	    }
	  tmp=tmp/repeat;
	  file<<tmp<<" "<<pow(10,j)<<std::endl;
	}
    }
  file.close();
  delete [] tab;
}



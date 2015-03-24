#include "benchmark.hh" 
/*!
 *\file
 *\brief Deklaracja funkzji z  klasy Benchmark
 */

/*!
 *\brief Metoda analyze zlicza czas fukcji test()
\n
Przykład wywołania funkcji : \n
analyze(100,7) -> Przeprowadza analize czesu trwania funkcji test() dla 1 miliona danych , każdy czas trwania funkcji jest ustalany na podstawie średniej arytmetycznej ze 100 prób
 
*/

void benchmark::analyze (int repeat,int data_amount)
{
  float *tab = new float [repeat];
  std::fstream file("data.dat",std::ios::out);
  if ( file.fail() )
    {
      std::cerr <<"Failed to write to file ";
      exit(3);
    }
  else
    {
      for(int j=0;j<data_amount+1;j++)
	{
	  float tmp =0;
	  for (int i=0 ;i<repeat;i++)
	    {
	      clock_t begin_time = clock();
	      {
		test(pow(10,j));
	      }
	      tab[i]=float( clock()- begin_time) / CLOCKS_PER_SEC;
	      tmp+=tab[i];
	    }
	  tmp=tmp/repeat;
	  file<<std::endl<<tmp<<" "<<pow(10,j);
	}
    }
   delete [] tab;
}



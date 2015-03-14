#include "benchmark.hh" 
/*!
 *\file
 *\brief Deklaracja funkzji z  klasy Benchmark
 */

void benchmark::analyze (int repeat,int data_amount)
{
  float *tab = new float [repeat];
  std::fstream file("data.csv",std::ios::out | std::ios::app);
  if ( file.fail() == true )
    {
      std::cerr <<"Failed to write to file ";
    }
  else
    {
      for(int j=0;j<data_amount;j++)
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
	  file<<std::endl<<tmp<<","<<pow(10,j);
        
	}
    }
  delete [] tab;
}



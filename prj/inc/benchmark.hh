#ifndef BENCHMARK_HH
#define BENCHMARK_HH
#include <iostream>
#include <fstream>
#include <cmath>
#include "stdlib.h"
/*!
 *\file
 *\brief Definicja klasy Benchmark
 */
class benchmark
{
 /*!
   *\brief Metoda test funkcja wirtualna , której czas działania ma być aproksymowany przez metoda analyze() 
   */
  virtual void test(int length)=0;

public:

 /*!
   *\brief Metoda analyze zlicza czas wykonywania funkcji test()
\n Uwaga! do poprawnego działania wymagane jest posiadanie programu gnuplot

   *\param[in] repeat - ilość powtórzeń testu  
   *\param[in] data_amount - ilosc wynikowych danych podawana jako potega liczby 10
   *\return plik.dat  z czasami poszczegolnych pomiarow oraz ilosc testowanych danych oraz plik plot.png bedacy graficznym przedstawieniem danych na wykresie
   */ 


   
  void analyze (int repeat,int data_amount); 
  
};

#endif

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
 
  virtual void test(int length)=0;

public:

 /*!
   *\brief Metoda analyze zlicza czas wykonywania funkcji test()
   *\param[in] repeat - ilość powtórzeń testu który chcemy wykonać  
   *\param[in] data_amount - ilosc wynikowych danych podawana jako potega liczby 10
   *\return plik .csv z czasami poszczegolnych pomiarow oraz ilosc testowanych danych  
   */
  void analyze (int repeat,int data_amount); 
  
};

#endif

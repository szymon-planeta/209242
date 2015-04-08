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
private:
  /*!
   *\brief Metoda test funkcja wirtualna , której czas działania ma być aproksymowany przez metoda analyze() 
   */
  virtual void test(unsigned long int length)=0;
  
public:
  /*!
   *\brief Metoda analyze zlicza czas wykonywania funkcji test()
   *\param[in] name_output - nazwa pliku wynikowego
   *\param[in] repeat - ilość powtórzeń testu  
   *\param[in] data_amount - ilosc wynikowych danych podawana jako potega liczby 10
   *\return plik.dat  z czasami poszczegolnych pomiarow oraz ilosc testowanych danych.
   */   
  
  virtual void analyze (const char *name_output,int repeat,int data_amount);

};

#endif

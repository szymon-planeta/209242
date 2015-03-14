#ifndef BENCHMARK_HH
#define BENCHMARK_HH
#include <iostream>
#include <fstream>
#include <cmath>

/*!
 *\file
 *\brief Definicja klasy Benchmark
 */
class benchmark
{
  /*!
  *\brief Klasa benchmark umożliwia przprowadzenie pomiaru czasu trwania programu dla określonych danych.
 * 
 */
  /*!
   *Metoda wirtualna, reprezentuje czynność której czas chcemy zmierzyc
   *\param[in] length - ilosc danych dla jakich przeprowadzamy test 
   */
  virtual void test(int length)=0;
public:
  
  /*!
   *\brief Metoda pozwala przeprowadzić analize czasu trwania funkcji  test w następujący sposób : wykonuje funckję test repeat razy , po czym uśrednia jej wynik. Cały proces jest wykonywany dla  data_amount razy , gdzie data amount jest potęgą liczby 10 
   *\param[in] repeat - ilość powtórzeń testu który chcemy wykonać  
   *\param[in] data_amount - ilosc wynikowych danych podawana jako potega liczby 10
   *\return plik .csv z czasami poszczegolnych pomiarow oraz ilosc testowanych danych  
   */
  void analyze (int repeat,int data_amount); 
  
};

#endif

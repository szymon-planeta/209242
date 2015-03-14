#ifndef GENERATOR_HH
#define GENERATOR_HH 
#include<fstream>
#include<iostream>
#include <stdlib.h>
/*!
* \file
* \brief Definicja generatora liczb losowych
* 
*/


/*!
*
\brief Generuje liczby losowe
*
* Funkcja generuje naturalne  liczby losowe z przedziału 0-100, ktore nastepnie sa zapisywane do pliku random_data.dat
* \param[in] data_amount - ilosc liczb wynikowych ktore chcemy uzyskac
*/
bool data_generator (int data_amount);
  
#endif

#ifndef TOOLS_HH
#define TOOLS_HH 
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
void data_generator (unsigned long int data_amount);



#endif

#include"stack.hh"
#include"generator.hh"
#include"list.hh"
#include"queue.hh"
#include"list_array.hh"
  /*!
   * \brief Aby wygenerować liczby losowe należy odkomentować linie zawierającą funkcje data_generator() \n
   */
int main(){
  ///Generuj Dane losowe ( ustawione na 10^7 )
  //data_generator(pow(10,7));
  /////////////////////////
  
   list_array a;
   a.analyze("list",10,2);
  
  /*
    list_array a;
    a.analyze("list_array*2",10,5);
  */

  /*
  lista.test(10);
  for(unsigned int i=0;i<lista.size();i++){
    std::cout<<lista.tmp[i]<<std::endl;
  }
  std::cout<<"Wczytano!"<<std::endl;
  lista.quicksort(0,lista.size()-1);
  std::cout<<"Posortowano!"<<std::endl;
  for(unsigned int i=0;i<lista.size();i++){
    std::cout<<lista.tmp[i]<<std::endl;
  }
  */
  return 0;
}

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
  //////////////////////////
  
  list_array lista;
  lista.analyze("heap",1,5);

  /*
  lista.test(15);
  for(unsigned int i=0;i<lista.size();i++){
    std::cout<<lista.tmp[i]<<std::endl;
  }
  std::cout<<"Wczytano!"<<std::endl;
  lista.quicksort_left(0,14);
  std::cout<<"Posortowano!"<<std::endl;
  for(unsigned int i=0;i<lista.size();i++){
    std::cout<<lista.tmp[i]<<std::endl;
  }
  */
  
  return 0;
}


#include"stack.hh"
#include"generator.hh"
#include"list.hh"
#include"queue.hh"
#include"list_array.hh"
  /*!
   * \brief Aby wygenerować liczby losowe należy odkomentować linie zawierającą funkcje data_generator() \n
Aby Przeprowadzić analizę złożoności obliczeniowej dla stosu należy odkomentować 1 blok ( dotyczący klasy stack ) \n
Aby Przeprowadzić analizę złożoności obliczeniowej dla listy należy odkomentować 2 blok ( dotyczący klasy list ) \n
Aby Przeprowadzić analizę złożoności obliczeniowej dla kolejki należy odkomentować 3 blok ( dotyczący klasy queue ) \n
  */
 
int main(){
  ///Generuj Dane losowe///
  //data_generator(1000000);
  /////////////////////////
  //list a;
  // a.analyze("list",10,3);
  list_array a;
  a.push(5,0,4);
  a.push(7,1,4);
  a.push(8,2,4);
  a.push(10,3,4);
  a.push(11,4,4);
  a.push(99,2,4);
  std::cout<<a.temp<<std::endl;

  std::cout<<"Ilość elementów" <<a.size()<<std::endl;

  return 0;

}

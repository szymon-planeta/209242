#include"stack.hh"
#include"benchmark.hh"
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
  list_array test(10000000);
  test.analyze(10,4);
  //test.push(4);

  // data_generator(pow(10,10));
  /*
    stack a;
    a.analyze(10,6);
  */
  /*  
    list b;
    b.analyze(10,6);
  */  
  /*
    queue c;
    c.analyze(10,6);
  */
  return 0;
}

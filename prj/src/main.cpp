#include"tabx2.hh"
#include"benchmark.hh"
#include"generator.hh"


int main(){
  
  // data_generator(pow(10,7)); // 10 bilionów danych
  tabx2 a(pow(10,7));
  a.analyze(20,7);  
  return 0;
}

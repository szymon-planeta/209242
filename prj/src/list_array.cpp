#include"list_array.hh"
/*!
* \file
* \brief Deklaracja klasy list_array
* 
*/

list_array::list_array()
{
  n=0;
  tmp=NULL;
  temp=0;
  
}

list_array::~list_array()
{
  // delete[] tmp;
}
/*!
 *\brief Metoda push() wczytuje liczbę naturalną na początek,koniec lub w wybrane miejsce listy; 
\n
Parametr x może przyjmować 2 wartośći '*' lub '+' co odpowiada powiększeniu tablicy o x lub x razy
\n
Przykład wywołania funkcji : \n
push(10,2,4,'*') - Na drugie miejsce w liście zostanie wstawiona liczba 10 , w przypadku przekroczenia rozmiaru listy jej rozmiar zostanie zwiększony 4 razy
*/

void list_array::push(int insert,unsigned int where,unsigned int extension,char x)
{
  if ( where<0 || where>n )
    {
      std::cerr<<"Nieprawidłowy element, na liście jest zbyt mało elementów!"<<std::endl;
      exit(6);
    }
  else if(tmp==NULL)
    {
      tmp=new int [1];
      tmp[0]=insert;
      n=1;
      temp=1;
    }
  
  else if ( where==0 ) //dodajemy na początek 
    {
      if (temp == n) // czy tablica wymaga rozszerzenia ?
	{
	  if (x!='+' && x!='*' )
	    {
	      std::cerr<<"Nieprawidłowy parametr"<<std::endl<<"Aby zwiększyć rozmiar tablicy o jakąś liczbę wybierz x= '+'"<<std::endl<<"Aby zwiększyć rozmiar tablicy x-krotnie wybierz x='*'";
	      exit(6);
	    }
	  else if(x=='+') temp=n+extension;
	  else if (x=='*') temp=n*extension;
	  
	  
	  int *ptm=new int [temp];
	  ptm[0]=insert;
	  for ( unsigned int i = 0;i<n;i++ )
	    {
	      ptm[i+1]=tmp[i];
	    }
	   delete [] tmp;
	  tmp=ptm;
	  n++;
	}
      else //jesli nie
	{
	  int *ptm=new int [temp];
	  ptm[0]=insert;
	  for ( unsigned int i =0;i<n;i++ )
	    {
	      ptm[i+1]=tmp[i];
	    }
	  delete [] tmp;
	  tmp=ptm;
	  n++;
	}
    }  
  
  else if ( where==size() ) //dodajemy na koniec
    {
      if (temp == n) // czy tablica wymaga rozszerzenia ?
	{
	  if (x!='+' && x!='*' )
  	    {
	      std::cerr<<"Nieprawidłowy parametr"<<std::endl<<"Aby zwiększyć rozmiar tablicy o jakąś liczbę wybierz x= '+'"<<std::endl<<"Aby zwiększyć rozmiar tablicy x-krotnie wybierz x='*'";
	      exit(6);
	    }
	  else if(x=='+') temp=n+extension;
	  else if (x=='*') temp=n*extension;;
	  
	  int *ptm=new int [temp];
	  for ( unsigned int i =0;i<n;i++ )
	    {
	      ptm[i]=tmp[i];
	    }
	  delete [] tmp;
	  tmp=ptm;
	  tmp[n]=insert;
	  n++;
	}
      else //jesli nie
	{
	  tmp[n]=insert;
	  n++;
	}
    }
  
  else
    {
      if (temp == n) // czy tablica wymaga rozszerzenia ?
	{
   	  if (x!='+' && x!='*' )
	    {
	      std::cerr<<"Nieprawidłowy parametr"<<std::endl<<"Aby zwiększyć rozmiar tablicy o jakąś liczbę wybierz x= '+'"<<std::endl<<"Aby zwiększyć rozmiar tablicy x-krotnie wybierz x='*'";
	      exit(6);
	    }
	  else if(x=='+') temp=n+extension;
	  else if (x=='*') temp=n*extension;
	  
	  int *ptm=new int [temp];
	  for ( unsigned int i =0;i<where;i++ )
	    {
	      ptm[i]=tmp[i];
	    }
	  ptm[where]=insert;
	  for ( unsigned int i=(where+1);i<n+1;i++ )
	    {
	      ptm[i]=tmp[i-1];
	    }
	  delete [] tmp;
	  tmp=ptm;
	  n++;
	}
      else
	{
	  int *ptm=new int [n];
	  for ( unsigned int i =0;i<where;i++ )
	    {
	      ptm[i]=tmp[i];
	    }
	  ptm[where]=insert;
	  for ( unsigned int i=(where+1);i<=n;i++ )
	    {
	      ptm[i]=tmp[i-1];
	    }
	   delete [] tmp;
	  tmp=ptm;
	  n++;
	}
	}
}

/*******************************************/

void list_array::push_back(int insert)
{
  if(temp==0){
    tmp = new int [1];
    temp=1;
    n=1;
    tmp[0]=insert;
  }
  else{
    if(n<temp){
      tmp[n++]=insert;
    }
    else{
      int *x = new int[temp*2];
      for(unsigned int i=0; i<n; i++)
	x[i]=tmp[i];
      delete [] tmp;
      tmp = x;
      tmp[n++]=insert;
      temp*=2;
    }
  }
}
  
/*!
 *\brief Metoda pop() usuwa z listy ostatni/pierwszy element lub zwraca komunikat o błędzie w przypadku próby usnięcia elementu z pustej listy
 */

void list_array::pop(unsigned int whence)
{
  if ( whence<0 || whence>size() )
    {
      std::cerr<<"Nie można usunać z listy,zbyt mało danych na liście, przekroczono zakres !"<<std::endl;
      exit(4);
    }
  else if (size()==0)
    {
      std::cerr<<"Lista jest pusta - nie można usunąć elementu!"<<std::endl;
      exit(5);
    }
  else if ( whence==0 ) 
    {
      int *ptm = new int [n-1];
      for ( unsigned int i =0;i<(n-1);i++)
	{
	  ptm[i]=tmp[i+1];
	}
      delete [] tmp;
      tmp=ptm;
      n--;
    }
  else if ( whence == size() ) 
    {
      int *ptm = new int [n-1];
      for ( unsigned int i =0;i<(n-1);i++)
	{
	  ptm[i]=tmp[i];
	}
      delete [] tmp;
      tmp=ptm;
      n--;
    }
}
/*!
 *\brief Metoda size() zwraca ilość elementów znajdujących się na liście 
 */

unsigned list_array::size()
{
  return n;
}

/*!
 *\brief Metoda test() realizuje wczytywanie zadanej ilości danych do listy 
 */
void list_array::test(unsigned long int length)
{
  int tmp;
  std::fstream file("random_data.dat",std::ios::in);
  if ( file.fail() == true )
    {
      std::cerr <<"Failed to read from file ";
    }
  else
    {
      for (unsigned long int i=1;i<=length;i++)
	{
	  file>>tmp;  
	  push_back(tmp); // 2-krotne zwiększanie rozmiaru tablicy
	}
      file.close();
   }
}

void list_array::quicksort(int left, int right){
  int i=left;
  int piwot=tmp[(left+right)/2];
  int schowek;
  int j=0;
  i=left; j = right;
  do{
    while(tmp[i]<piwot) i++;
    while(tmp[j]>piwot) j--;
    if(i<=j){
      schowek = tmp[i];
      tmp[i] = tmp[j];
      tmp[j] = schowek;
      i++; j--;
    }
  }while(i<=j);
  
  
  if(j>left)
    quicksort(left,j);
  if(i<right)
    quicksort(i,right);
}

void list_array::quicksort_left(int left, int right){
  int i=left;
  int piwot=tmp[i];
  int schowek;
  int j=0;
  i=left; j = right;
  do{
    while(tmp[i]<piwot) i++;
    while(tmp[j]>piwot) j--;
    if(i<=j){
      schowek = tmp[i];
      tmp[i] = tmp[j];
      tmp[j] = schowek;
      i++; j--;
    }
  }while(i<=j);
  
  
  if(j>left)
    quicksort_left(left,j);
  if(i<right)
    quicksort_left(i,right);
}

void list_array::quicksort_med(int left, int right){
 int i=(right+left)/2;
  int schowek=0;
  int j=0;
 
  if(tmp[right]<tmp[left]){
    schowek=tmp[left];
    tmp[left]=tmp[right];
    tmp[right]=schowek;
  }
  if(tmp[i] < tmp[left]){
    schowek=tmp[left];
    tmp[left]=tmp[i];
    tmp[i]=schowek;
  }
  if(tmp[right]<tmp[i]){
    schowek=tmp[i];
    tmp[i]=tmp[right];
    tmp[right]=schowek;
  }
  int piwot=tmp[i];
  i=left; j = right;
  do{
    while(tmp[i]<piwot) i++;
    while(tmp[j]>piwot) j--;
    if(i<=j){
      schowek = tmp[i];
      tmp[i] = tmp[j];
      tmp[j] = schowek;
      i++; j--;
    }
  }while(i<=j);
  
  
  if(j>left)
    quicksort_med(left,j);
  if(i<right)
    quicksort_med(i,right);
}

void list_array::heapsort(){

  if(size()>1){

    int root, swap, child, val, start,end;

    //heapify
    start=(size()-2)/2;
    while(start>=0){
      //siftdown
      root = start; end = size()-1;
      while(((root*2)+1)<=end){
	child = (root*2)+1; //left child
	swap = root;      //remembers child
	if(tmp[swap]<tmp[child])
	  swap = child;
	if(((child+1)<=end) && (tmp[swap]<tmp[child+1]))
	  swap = child+1;
	if(swap==root) break;
	else{
	  val=tmp[root];
	  tmp[root]=tmp[swap];
	  tmp[swap]=val;
	  root=swap;
	}
      }
      start--;
    }
    //
    end=size()-1;
    while(end>0){
      val=tmp[end];
      tmp[end]=tmp[0];
      tmp[0]=val;
      end--;
      //siftdown
      root = 0; 
      while(root*2+1<=end){
	child = root*2+1; //left child
	swap = root;      //remembers child

	if(tmp[swap]<tmp[child])
	  swap = child;
	if(child+1<=end && tmp[swap]<tmp[child+1])
	  swap = child+1;
	if(swap==root) break;
	else{
	  val=tmp[root];
	  tmp[root]=tmp[swap];
	  tmp[swap]=val;
	  root=swap;
	}
      }
    }
  }
}
/*!
 *\brief Metoda analyze zlicza czas fukcji quicksort()
 *\n
 Przykład wywołania funkcji : \n
 analyze("Plik_wynikowy",100,7) -> Przeprowadza analize czesu trwania funkcji test() dla 1 miliona danych(ilość danych należy podać jako potęgę 10 ) , każdy czas trwania funkcji jest ustalany na podstawie średniej arytmetycznej ze 100 prób , wyniki zapisuje do pliku o nazwie Plik_wynikowy. \n
 Uwaga! Aby zmienić tryb rozszerzania tablicy z dodawania 1 elemntu na mnożenie rozmiaru przez 2 należy odkomentować odpowiednie pole w funkcji list::array test() 
*/
void list_array::analyze (const char *name_output,int repeat,int data_amount)
{
  float *tab = new float [repeat];
  std::fstream file(name_output,std::ios::out);
  if ( file.fail() )
    {
      std::cerr <<"Failed to open file ";
      exit(3);
    }
  
  else
    {
      for(int j=1; j<=data_amount; j++){
	float time=0;
	for (int i=0 ;i<repeat;i++)
	  {
	    test(pow(10,j));
	    clock_t begin_time = clock();
	    {
	      quicksort_med(0,size()-1);
	      //quicksort_left(0,size()-1);
	      //quicksort(0,size()-1);
	      //heapsort();
	      if(j==3)
		std::cout<<tmp[0]<<" "<<tmp[1]<<" "<<tmp[1000]<<" "<<tmp[1002]<<std::endl;
	    }
	    tab[i]=float( clock()- begin_time ) / CLOCKS_PER_SEC;
	    time+=tab[i];
	  }
	time=time/repeat;
	file<<time<<" "<<pow(10,j)<<std::endl;
	std::cout<<time<<" "<<pow(10,j)<<std::endl;
      }
    }
  file.close();
  delete [] tab;
  clear();
}


void list_array::clear(){
  delete [] tmp;
  temp = 0;
  n = 0;
  tmp = NULL;
}

#include <iostream>
#include <cstdlib>
using namespace std;




int main(){
  int numero,numero1,numero2;
  int vector_5[10];
  int vector_01[10]{0,0,0,0,0,0,0,0,0,1};
  int contador=1;
/*  a=rand()%((20+1)-1);
  b=rand()%((20+1)-5);
 CON LA FUNCION RAND() SE GENERAN LOS NUMEROS ALEATORIOS, SI QUIERES DELIMITARLOS
 HACIENDO EL MODULO DELIMITAS EL NUMERO DONDE SE UTILIZAN 
 cout<<a<<endl;
 cout<<b;
*/
do {
  cout<<"Dime un numero mayor a 5 "<<endl;
  cin>>numero;
  if (numero<=5) {
    cout<<"Incorrecto "<<endl;

  }else{
    vector_5[contador]=numero;
    contador++;
    }


  }
 while(contador<11);
 cout<<vector_5[2];

do {
  cout<<"Dime un numero del 1 al 10 ";
  cin>>numero1;
  if (numero1>0 && numero1<=10) {
    if(vector_5[numero1]-5<5){
      vector_5[numero1]=0;
    }else{
      vector_5[numero1]=vector_5[numero1]-5;
    }
  }
  cout<<"El vector vale "<< vector_5[numero1]<<endl;

} while(vector_5[numero1]>0);


do {
  cout<<"Intenta acertar la posicion donde esta el 1 (0 al 9) ";
  cin>>numero2;
  if(vector_01[numero2]==1){
    cout<<"Enhorabuena ";
  }else{
    cout<<"Incorrecto "<<endl;
  }

} while(vector_01[numero2]!=1);














  return 0;
}

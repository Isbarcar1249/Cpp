#include <iostream>
using namespace std;

int multiplicaX5 (int num){
  return num*5;
}
void meMultiplicoX5 (int num){
  num= num*5;
  cout<< "Num  en la función vale: "<<num<<endl;
}
void subirNota(int notas[3],int posicion, int nuevaNota){
  notas[posicion]=nuevaNota;
}
void imprimirArray(int array[20],int tama){
  for (int i=0 ; i<tama;i++){
    cout<<array[i]<<endl;
  }
}

int main(){
  int numero;
  int notas[]={8,4,9};
  /*cout<<"Que numero quieres multiplicar por 5? ";
  cin>>numero;
  cout<< "El resultado de mutiplicar por 5 "<< numero<< " es igual a "<< multiplicaX5(numero)<<endl;*/
  cout<<"notas ori "<<endl;

  imprimirArray(notas,3);
  subirNota(notas,1,9);
  cout<<"Notas subidas "<<endl;
  imprimirArray(notas,3);




  return 0;
}

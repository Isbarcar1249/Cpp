#include <iostream>
using namespace std;
int devolverdoble(int array[],int posicion){

  return array[posicion]*2;
}
void imprimirEliminarNumero(int array[],int posicion,int tama){

  for (int i=0;i<tama;i++){
    array[i]=array[i];
    if(i==posicion){
      array[i]=array[i+1];
    tama--;}
    cout<<array[i]<<",";

  }

}
void imprimirListaReves(int array[],int tama){
  for(int i=tama;i>0;i--){

    cout<<array[i]<<endl;
  }
}
int* nuevaLista(int array[],int tama){
  int nuevaLista[tama];
  int contador=0;
  for(int i=tama;i>0;i--){
  nuevaLista[contador]=array[i];
  contador++;
  }
  return nuevaLista;
}

int main(){
  cout<<"Ismael Barranco Carballo"<<endl;
int array[]{0,2,9,3,4};

cout<<"El doble de la posicion tres "<< array[3]<<" es "<<devolverdoble(array,3)<<endl;
array[3]=devolverdoble(array,3);

imprimirEliminarNumero(array,1,5);
cout<<endl;
cout<<"aqui va la lista ";
imprimirListaReves(array,4);







  return 0;
}

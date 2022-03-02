#include <iostream>
#include <time.h>

using namespace std;
int* crearListaAleatoria(int tama){
  srand(time(NULL));
  int numero;
  int* array= new int [tama];
for(int i =0;i<tama;i++){
   numero= rand()%10;
   array[i]=numero;
 }
 return array;
}
void imprimirLista(int* array, int tama){
for(int i=0;i<tama;i++){
  cout<<array[i]<<" ";
}
}
void cambiarporDoble(int* array,int tama,int posicion){
  if(posicion<tama){
    array[posicion]*=2;
  }
}
int eliminarPosicionLista(int* array,int tama,int posicion){
  for(int i=posicion;i<tama;i++){
    array[i]=array[i+1];
  }
  return tama -1;
}
void imprimirListaReves(int* array,int tama){
  for(int i=tama-1;i>=0;i--){
    cout<<array[i]<<" ";
  }
}
int* listaAlreves(int* array,int tama){
  int* listaReves= new int[tama];
  int contador=0;
  for(int i=tama-1;i>=0;i--,contador++){

    listaReves[contador]=array[i];
    cout<<contador<<endl;

   //cout<<listaReves[contador]<<" ";
  }
  return listaReves;
}
int main(){
  int* array1;

  int tama=5;
cout<<"Ismael Barranco Carballo"<<endl;

array1= crearListaAleatoria(tama);
cout<<"Primera Lista"<<endl;
imprimirLista(array1,tama);
cambiarporDoble(array1,tama,3);
cout<<endl<<"Cambiamos por el doble una posicion "<<endl;
imprimirLista(array1,tama);
cout<<endl<<"Eliminar posicion lista "<<endl;
tama= eliminarPosicionLista(array1,tama,1);
imprimirLista(array1,tama);
cout<<endl<<"Imprimir lista al reves "<<endl;
imprimirListaReves(array1,tama);
imprimirLista(array1,tama);
cout<<endl<<"Ponemos el array al reves "<<endl;
 array1 = listaAlreves(array1,tama);
imprimirLista(array1,tama);

  return 0;
}

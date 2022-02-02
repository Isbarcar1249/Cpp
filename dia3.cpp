#include <iostream>
using namespace std;

void mostrarArray(string array[]){
  for (int i=1 ; i< array->capacity() ; i++){
    cout<<"Juego"<< i << " = " << array[i]<< endl;

  }

}

int main(){
  int numjuegos;
  cout<<"Cuantos juegos quieres introducir? ";
  cin>>numjuegos;
  string juegos[numjuegos];
  string juego;

 for (int i=0; i<numjuegos ;i++ ) {
    cout<<"Dime un juego "<<endl;
    cin>> juego;
    juegos[i]= juego;


  }
  mostrarArray (juegos);




  return 0;
}

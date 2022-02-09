#include <iostream>
using namespace std;

int main(){
  string juego= "Tragabolas";
  string &ocio=juego;
  int num=5;
  //string juegos[5];
string* ptrJuego =&juego;
int* ptrNum= &num;
  //cout<<juego<<endl;//imprime el juego
//  cout<<ocio<<endl;//imprime el juego


  /*cout<<&juego<<endl;// imprime la dirección
  cout<<&ocio<<endl;// imprime la dirección

  //ocio= "pokemon";

  cout<<ocio<<endl;
  cout<<juego<<endl;

  cout<<&juegos<<endl;
  cout<<&juegos[0]<<endl;
  cout<<&juegos[1]<<endl;
  cout<<&juegos[2]<<endl;
  cout<<&juegos[3]<<endl;
  cout<<&juegos[4]<<endl;*/
cout<<"Imprimo el juego "<<juego <<endl;
cout<<"Imprimo el &juego "<< &juego<<endl;
cout<<"Imprimo el ocio  "<<ocio<<endl;
cout<<"Imprimo el &ocio  "<<&ocio<<endl;
cout<<"Imprimo el ptrJuego: "<<ptrJuego<<endl;

cout<<"Imprimo el *ptrJuego: "<<*ptrJuego<<endl;
cout<<"Imprimo el &num: "<<&num<<endl;
cout<<"Imprimo el ptrNum: "<<ptrNum<<endl;



  return 0;
}

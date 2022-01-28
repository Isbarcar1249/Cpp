#include <iostream>
using namespace std;

int main(){
  string juego= "Tragabolas";
  string &ocio=juego;
  string juegos[5];

  cout<<juego<<endl;//imprime el juego
  cout<<ocio<<endl;//imprime el juego


  cout<<&juego<<endl;// imprime la dirección
  cout<<&ocio<<endl;// imprime la dirección

  ocio= "pokemon";

  cout<<ocio<<endl;
  cout<<juego<<endl;

  cout<<&juegos<<endl;
  cout<<&juegos[0]<<endl;
  cout<<&juegos[1]<<endl;
  cout<<&juegos[2]<<endl;
  cout<<&juegos+2<<endl;
  cout<<&juegos[3]<<endl;
  cout<<&juegos[4]<<endl;





  return 0;
}

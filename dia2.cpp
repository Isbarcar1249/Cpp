#include <iostream>
using namespace std;

bool muchaDif(int diferencia, int num1, int num2){
  return (num1-num2> diferencia) ;
}

int main(){
  string saludo= "hola!";
  string repetir;
  string contrasena= "aaaa";
  bool esCorrecto= false;
  int edad=26;
  int edad2;
  bool diferencia;
/*
  cout<< "Imprimir por pantalla"<< endl;
  cout<<  "Imprimir por pantalla \n "
  cout<< "Comprobación de salto de linea ";

  cout << saludo << endl;
  cout << saludo << "\n";*/
/*  while(true){
cout<< "Introduce una palabra";
cin>> repetir<<endl ;
cout<< repetir;
}*/
/*while (!esCorrecto){
  cout<< "Introduce la contraseña";
  cin>>repetir;
  if (repetir == contraseña){
    escorrecto= true;
  }
}*/
cout<< "Cuantos anos tienes?";
cin>> edad2;
if (edad2>=edad ){
  cout<< "Eres un viejo"<< endl;

}else{
  cout<< "Oleee jovenzuelo"<< endl;
  }

diferencia= muchaDif(5,edad, edad2);
if (diferencia){
  cout<< "Hay mucha diferencia de edad"<< endl;
}

  return 0;
}

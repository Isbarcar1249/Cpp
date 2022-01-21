#include <iostream>
using namespace std;

bool muchaDif(int diferencia, int num1, int num2){
  return (num1-num2> diferencia || num2-num1>diferencia) ;
}
int valorAbsoluto (int numero){if (numero<0){
  numero=numero*-1;
  }
  return numero;
}
bool meSirve(int numMax, int numMin, int num){
  return (numMax>num && numMin<num);
}
bool meSirveV2(int numMax,int numMin,int num){
  return (num>numMax || num<numMin);
}
void imprimeBool(bool b){
  if (b==0){
    cout<<"False";
  }
  else{
    cout<< "True";
  }
}


int main(){
  string saludo= "hola!";
  string repetir;
  string contrasena= "aaaa";
  bool esCorrecto= false;
  int edad=26;
  int edad2;
  bool diferencia;
  int numero;
  string palabra1, palabra2, palabra;
  double suma=0;
  bool ok,ok2;
  int num1,numMin,numMax,num2;
  //Jugamos con palabra
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
/*
do {
  cout<< "Intoduce la contrasenia: ";
  cin>> repetir;
}while(repetir != contrasena);
*/
/*
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
numero= valorAbsoluto(-1);
cout<< numero<<endl;*/

for (int i=0;i<=1000;i+=2){
  suma+=i ;



}
cout <<"La suma de los 1000 primeros numeros es :"<< suma<<endl;

int arr[]= {10,20,30,40};
for (int i:arr){
  cout<< i<<endl;
}
numMax=30;
numMin=0;
cout<< "Introduce un numero " ;
cin>> num1 ;
ok = meSirve(numMax,numMin,num1);
cout<< "Introduce un numero 2 " ;
cin>> num2 ;
ok2 = meSirveV2(numMax,numMin,num2);
imprimeBool(ok);
cout<<endl;
imprimeBool(ok2);

  return 0;
}

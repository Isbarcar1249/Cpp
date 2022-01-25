#include <iostream>
using namespace std;

int main(){

  int numeros[100], numero[30],suma=0,contador=0;



for(int i=0; i<=100; i++){
  numeros[i]=i;



}
cout<< "Estos son los numeros del 1 al 100 "<<endl<<endl;

for(int i=1;i<=100; i++){

cout<<numeros[i]<<endl;
}

cout<<endl<<endl<<"Estos son los numeros sumados de 4 en 4 "<<endl<<endl;


for(int x=0; x<=100; x++){
numeros[x]=x;
suma=suma+x;
contador++;
if (contador%4==0){
  numero[x]=suma;
  cout<<numero[x]<<endl;
  suma=0;
}
}


return 0;
}

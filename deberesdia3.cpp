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

cout<<"Ejercicio 1 "<<endl<<endl;

string contrasena;
cout<<"Dime la contraseña"<<endl;
cin>> contrasena;
do {
  cout<<"Dime la contrasena"<<endl;
  cin>>contrasena;

} while(contrasena!="pepetocalaguitarra");

cout<<"Ejercicio 2"<<endl<<endl;

int edad;

cout<<"Cuantos anos tienes ";
cin>> edad;
if (edad>18) {
  cout<<"Eres mayor de edad"<<endl;

}
else{
  cout<<"Eres menor de edad"<<endl;
}


cout<<"Ejercicio 3"<<endl<<endl;
int nota;
cout<<"Que nota has sacado? ";
cin>> nota;
if (nota>=9) {
  cout<<"Sobresaliente "<<endl;
}else if(nota>=7){
  cout<<"notable"<<endl;
}else if(nota>=5){
  cout<<"Bien"<<endl;
}else if(nota>=4){
  cout<<"suficiente"<<endl;
}else{
  cout<<"suspenso"<<endl;
}

cout<<"Ejercicio 4"<<endl<<endl;

int num;
cout<<"Dime un numero ";
 cin>>num;
 if (num%2==0){
   cout<<"PAR";
 }else{
   cout<<"IMPAR";
 }


 cout<<"Ejercicio 5"<<endl<<endl;
int n1,n2;
cout<<"Dime un numero ";
cin>>n1;
cout<<"Dime otro numero ";
cin>>n2;



 int array[2]={n1,n2};


for (int i=0;i<=2;i++) {
  if(array[i]%2==0){
    cout<<array[i]<<endl;
  }
}
cout<<"Ejercicio 6 "<<endl<<endl;

int array[100];
int numero,contador=0,mayor=0,menor=99999,suma=0;


do {
  cout<<"Dime un numero ";
  cin>>numero;
  array[contador]=numero;
  contador++;

} while(numero!=-1);
for (int i=0;i<contador-1;i++){


  if(array[i]>=mayor){
    mayor=array[i];
  }
   if(array[i]<=menor){
    menor=array[i];
  }
suma=suma+array[i];

}


cout <<"El numero mayor es "<< mayor<<endl;
cout <<"El numero menor es "<< menor<<endl;
cout<<"La media es "<< suma/(contador-1)<<endl;

cout<<"Ejercicio 7"<<endl<<endl;

int n,suma=1,resultado=1;
cout<<"Introduce un numero ";
cin>>n;

for(int i=1;i<=n;i++){
  resultado=resultado*2;
  suma=suma+resultado;
}
cout<<suma;

cout<<"Ejercicio 8"<<endl<<endl;

for(int i=100;i>=0;i--){
  cout<<i<<" ";
}










return 0;
}

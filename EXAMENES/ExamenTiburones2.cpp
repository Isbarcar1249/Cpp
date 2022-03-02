#include <iostream>
using namespace std;

int meses(int anosT){

   return anosT*12;
}
int dias(int anosT){

   return anosT*365;
}

int dientes(int mes){
  int dientes=0;
  if (mes<=8*12){
  for (int i=0;i<=mes;i+=5){
    dientes=dientes+i;
  }}
  else {for (int i=0;i<=8*12;i+=5){
    dientes=dientes+i;
  }}


  return dientes;
}






int main(){
  int anosT,mes,days, dents, dentsV2;
  cout<<"Ismael Barranco Carballo"<<endl;


  cout<<"Cuantos anos tiene un tiburon? ";
  cin>> anosT;

  mes= meses(anosT);
  days= dias(anosT);
  cout<< "Lleva vividos "<< mes<< " meses de mierda"<<endl;
  cout<< "Lleva vividos "<< days<< " dias de mierda"<<endl;

  dents= dientes(mes);

  cout<<"Se le han caido "<< dents << " dientes de leche"<<endl;

/*  dentsV2= dientesV2(mes);
  cout<<"Se le han caido "<<dentsV2<<" despues de tantos meses"<<endl;*/





  return 0;
}

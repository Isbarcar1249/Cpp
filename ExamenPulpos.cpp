#include <iostream>
using namespace std;

void imprimirDecimalOctal(int numero){
  int primerdigito;
  int resto;
  primerdigito=numero/8;
  resto=numero%8;

  cout<<"EL numero "<< numero<< " es en octal= "<< primerdigito<<resto<<endl;
}
void imprimirArray(string array[],int tama){
  for (int i=0; i<tama;i++){
    cout<< array[i]<<endl;
  }
}
void imprimirFaltas(string array[], int tama){
  string respuesta[tama];
  for (int i=0; i<tama;i++){

    cout<< "Esta "<<array[i]<<" en clase ";
    cin>>respuesta[i];
  }
  for (int i=0; i<tama;i++){
    cout<<array[i]<<": "<< respuesta[i]<<endl;
  }

}

int main(){

cout<<"Ismael Barranco Carballo"<<endl;

string comida;
int numero;
string listaP[]= {"pepe","felipe","antonio","ramon","jose"};

do{
  cout<<"Tengo hambre mierda seca que respira fuera del agua "<<endl;
  cin>>comida;
}
while (comida!= "crustaceos");

cout<<"Introduce un numero para pasar a octal ";
cin>>numero;


imprimirDecimalOctal(numero);

imprimirArray(listaP,5);


imprimirFaltas(listaP,5);











  return 0;
}

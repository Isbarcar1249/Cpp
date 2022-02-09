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
void imprimirArrayEnteros(int array[],int tama){
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
void reorganizarcomida(int pecerascomida[],int tama){
  int sobran=0;
  for (int i=0;i<tama ;i++){
    pecerascomida[i]+=sobran;
    sobran=pecerascomida[i]%3;
    pecerascomida[i]-=sobran;
  }
}

int main(){

cout<<"Ismael Barranco Carballo"<<endl;

string comida;
int numero;
string listaP[]= {"pepe","felipe","antonio","ramon","jose"};
int crustaceos[]={23,74,92,64,27,13,84,73};

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

imprimirArrayEnteros(crustaceos,8);

reorganizarcomida(crustaceos,8);
cout<<endl<<endl;

imprimirArrayEnteros(crustaceos,8);











  return 0;
}

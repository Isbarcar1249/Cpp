#include <iostream>
using namespace std;
int minimo(int lista[],int tama){
  int minimo1=999,posicion;
  for (int i=0;i<=tama;i++){
    if(lista[i]<=minimo1){
      minimo1=lista[i];
      posicion=i;
    }
  }
return posicion;
}

void reorganizarcomida(int pecerascomida[],int tama){
  int sobran=0,sobrantotal=0;
  int posmin;
  posmin=minimo(pecerascomida,8);
  for (int i=0;i<tama ;i++){

    sobran=pecerascomida[i]%3;
    pecerascomida[i]-=sobran;
    sobrantotal+=sobran;

  }
  
pecerascomida[posmin]+=sobrantotal;
}
void imprimirArrayEnteros(int array[],int tama){
  for (int i=0; i<tama;i++){
    cout<< array[i]<<endl;
  }
}

int main(){
int crustaceos[]={23,74,92,64,27,13,84,73};

cout<<minimo(crustaceos,8)<<endl;


imprimirArrayEnteros(crustaceos,8);

reorganizarcomida(crustaceos,8);
cout<<endl<<endl;

imprimirArrayEnteros(crustaceos,8);




  return 0;
}

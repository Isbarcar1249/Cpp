#include <iostream>
using namespace std;
int const TAMA=10;
void rellenarMatrizNumero(int matriz[TAMA][TAMA],int nFilas,int nCol){
  int num;
  for (int i=0; i<nFilas; i++){
    for(int j=0; j<nCol; j++){
      cout<<"Dime el numero de la posicion ["<<i<<"]["<<j<<"] ";
      cin>>num;//Para rellenarla con 0, introducir 0 en este momento
      matriz[i][j]=num;
    }
  }
}
void mostrarMatriz(int matriz[TAMA][TAMA],int nFilas,int nCol ){
  for(int i=0;i<nFilas;i++){
    for(int j=0;j<nCol;j++){
      cout<<matriz[i][j] <<" ";
    }
    cout<<endl;
  }
}
void mostrarMatrizSTR(string matriz[TAMA][TAMA],int nFilas,int nCol ){
  for(int i=0;i<nFilas;i++){
    for(int j=0;j<nCol;j++){
      cout<<matriz[i][j] <<" ";
    }
    cout<<endl;
  }
}
void hacerTablero(string tablero[TAMA][TAMA]){
  int contador=0;
int nFilas;int nCol;
  cout<<"Cuantas filas quieres que tenga tu tablero ";
  cin>>nFilas;
  cout<<"Cuantas columnas quieres que tenga tu tablero ";
  cin>>nCol;
  for (int i=0; i<nFilas; i++){
    //cout<<"hola" <<i%2;
    if (i%2==1){
      contador=1;
    }
    else{
      contador=0;
    }
    for(int j=0; j<nCol; j++){
      if (contador%2==0 ){
        tablero[i][j]="X ";
        //cout<<"hola";
      }else{
        tablero[i][j]="O ";
      //  cout<<"Adios";

      }
      contador++;
      cout<<tablero[i][j];

    }cout<<endl;


  }

}

int main(){

int array[TAMA];
int matriz[TAMA][TAMA];
string tablero[TAMA][TAMA];
int filas,columnas;
cout<<"Cuantas filas quieres que tenga tu matriz ";
cin>>filas;
cout<<"Cuantas columnas quieres que tenga tu matriz ";
cin>>columnas;

rellenarMatrizNumero(matriz,filas,columnas);
mostrarMatriz(matriz,filas,columnas);
hacerTablero(tablero);
//mostrarMatrizSTR(tablero,10,10);

  return 0;
}

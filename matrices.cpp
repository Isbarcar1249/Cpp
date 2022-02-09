#include <iostream>
using namespace std;
int const TAMA=10;
void rellenarMatrizNumero(int matriz[TAMA][TAMA],int nFilas,int nCol,int num){
  for (int i=0; i<nFilas; i++){
    for(int j=0; j<nCol; j++){
      matriz[i][j]=num;
    }
  }
}


int main(){

int array[TAMA];
int matriz[TAMA][TAMA];
rellenarMatrizNumero(matriz,2,2,4);
cout<<matriz[1][0]<<endl;




  return 0;
}

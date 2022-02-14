// Referencias y punteros.

#include <iostream>
using namespace std;

int suma10 (int num){
  num += 10;
  return num;
}

int suma10 (int* ptrNum){
  *ptrNum += 10;
  return *ptrNum;
}


void rellenarArray(int numeroDeColores,string* colores){
  for (int i = 0 ; i < numeroDeColores ; i++){
    cout << "Introduce un color" << endl;
    //cin >> colores[i];
    getline(cin,colores[i]);

  }
}
string* rellenarArray2(int tama){
  string* array = new string[tama];

  for (int i = 0 ; i < tama ; i++){
    cout << "Introduce un color" << endl;
    //cin >> colores[i];
    getline(cin,array[i]);

  }
  return  array;
}

void imprimirArray(string* colores,int numeroDeColores){
  for (int i = 0 ; i < numeroDeColores ; i++){
    cout << colores[i] << " " << endl;
  }
}
void imprimirArrayDouble(double* colores,int numeroDeColores){
  for (int i = 0 ; i < numeroDeColores ; i++){
    cout << colores[i] << " " << endl;
  }
}
double* rellenarArrayNotas(int tama){
  double* array = new double [tama];
  string fumao;
  for (int i = 0 ; i < tama ; i++){
    cout << "Introduce una nota" << endl;
    //cin >> colores[i];
    getline(cin,fumao);
    array[i]= stod(fumao);

  }
  return  array;
}

double* subirNotaArray(double* notas,int tama,double porcentaje ){
  double* notas_subidas= new double[tama];
  for (int i=0;i<tama;i++){
    //cout<<notas[i]<<" Holas"<<endl;
    notas_subidas[i]=notas[i]*(1+(porcentaje/100));
    //notas_subidas[i]=notas[i]+(notas[i]*porcentaje/100);
    //cout<<"Hola "<<notas_subidas[i]<<endl<<endl;
  }
return notas_subidas;
}

int main() {
  //while(true){

  //// Tercera parte

  string* colores = NULL;
  double* notas =  NULL;
  double* notas_subidas =  NULL;
  string line;
  int numero;

  //cout << "Valor de *colores = NULL: " << colores << endl;
  cout << "Numero de colores y notas: " ;
  //cin >> numero;
  getline(cin,line);
  numero = stoi(line);

  //colores = new string[numero];
  //cout << "Valor de colores = new string[]:  " << colores << endl;



//  rellenarArray(numero,colores);
  // cout<<endl;
  // imprimirArray(colores,numero);



  notas= rellenarArrayNotas(numero);
  cout<<endl;
  imprimirArrayDouble(notas,numero);
  cout<<endl<<endl;

  notas_subidas= subirNotaArray(notas,numero,20);
  imprimirArrayDouble(notas_subidas,numero);


  delete[] notas;
  notas= NULL;
  delete [] colores;
  colores = NULL;


  //// Segunda parte
  /*
  int numero = 10;
  int resultado;
  cout << "Imprimir numero: " << numero << endl;
  resultado = suma10(numero);
  cout << "Imprimir numero depues de sumar10(int): " << numero << endl;
  cout << "Imprimir resultado depues de sumar10(int): " << resultado << endl;
  cout << "Imprimir numero: " << numero << endl;
  resultado = suma10(&numero);
  cout << "Imprimir numero depues de sumar10(*int): " << numero << endl;
  cout << "Imprimir resultado depues de sumar10(*int): " << resultado << endl;
  */

  //// Primera parte

  /*string juego = "Tetris";
  string &ocio = juego;
  int num = 5;
  //string juegos[5];
  string* ptrJuego = &juego;
  int* ptrNum = &num;*/


  /*cout << juego << endl; // Imprime Tetris.
  cout << ocio << endl; // Imprime Tetris.
  cout << &ocio << endl; // Imprime la dirección.
  cout << &juego << endl; // Imprime la dirección.
  ocio = "pokemon";
  cout << ocio << endl;
  cout << juego << endl;
  cout << &juegos << endl;
  cout << &juegos[0] << endl;
  cout << &juegos[1] << endl;
  cout << &juegos[2] << endl;
  cout << &juegos[3] << endl;
  cout << &juegos[4] << endl;
  */

  /*cout << "Imprimo el juego: " << juego << endl;
  cout << "Imprimo el &juego: " << &juego << endl;
  //cout << "Imprimo el *juego: " << *juego << endl;
  cout << "Imprimo el ocio: " << ocio << endl;
  cout << "Imprimo el &ocio: " << &ocio << endl << endl;
  cout << "Imprimo el ptrJuego: " << ptrJuego << endl;
  cout << "Imprimo el &ptrJuego: " << &ptrJuego << endl;
  cout << "Imprimo el *ptrJuego: " << *ptrJuego << endl << endl;
  cout << "Imprimo el num: " << num << endl;
  cout << "Imprimo el *ptrNum: " << *ptrNum << endl;
  cout << "Imprimo el &num: " << &num << endl;
  cout << "Imprimo el ptrNum: " << ptrNum << endl << endl;*/
//}
  return 0;

}

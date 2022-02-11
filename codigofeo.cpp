#include <iostream>
using namespace std;

int main() {
    int nota;
    int suma = 0;
    double media = 0;
    int i;

    do {
      media=0;
      nota=0;
      cout<<"Cuando termines de introducir las notas pon -1"<<endl;
      for (i = 0 ; i < 2000 && nota != -1 ; i++){
      cout<<"Dime tus notas ";
        cin >> nota;//pide numero n
        suma += nota;}//suma a lo que tenga "s" el numero "n" que le vas introduciendo
    media = (suma+1)/(i-1);// le suma a la suma de "s" uno y divide entre lo que tenga la "i-1"
    suma = 0;//Vuelve a poner la s a 0
    cout<<"Tu nota media es "<<media<<endl;
    if (media<5){
      cout<<"Suspenso, repite tus notas "<<endl;
    }

  }
    while (media < 5);/*{//si m es menos de 5 vuelve a pedirte numeros y hacer lo mismo de antes
        m = 0;
        n = 0;
    for (i = 0 ; i < 2000 && n != -1 ; i++){
        cin >> n;
        s += n;
    }
    m = (s+1)/(i-1);
  }*/
    if (media >9 ){//si m es mayor a 5 eres apto
        cout << "super apto";
    }
    else if (media >= 5){
        cout << " apto";
    }
  return 0;
}
/*
-Falta include iostream y using namespace std
-Los nombres no se entienden
-los ifs estan al reves
-He cambiado los nombres de las variables para que se entienda mejor
-He puesto un do while para reutilizar el codigo

*/

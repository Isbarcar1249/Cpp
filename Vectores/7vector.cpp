#include <iostream>
#include <vector>
using namespace std;

void mostrarVector (vector<int>Vector){
  for(int i=0;i< Vector.size();i++){
    cout<<Vector[i]<<" ";
  }
}
vector<int> rellenarVector(){
  vector<int>vector;
  int numero,tama;
  cout<<"Cuantos numeros vas a introducir ";
  cin>>tama;
  for(int i=0 ;i<tama;i++){
    cout<<"Introduce un numero "<<endl;
    cin>> numero;
    vector.push_back(numero);

  }
return vector;
}
vector<int> insertar( vector<int> vect,int posicion,int numero){
  vect.insert(vect.begin()+posicion,numero);
  return vect;
}


int main(){
  //sin inicializar
/*  vector<int> mivector1;
  vector<string> mivectorS;

//Inicializa un vector de tama 10 lleno de 2s
vector<int> mivector2(10,2);
//inicializa un vector co los valores introducidos
vector<int> mivector3{1,2,3,4,5};
mivectorS={"La casa de papel"};

cout<<mivectorS[0]<<endl;

mostrarVector(mivector2);
cout<<endl;
mivector2= rellenarVector();
mostrarVector(mivector2);
*/
//Ejercicio
vector<int> mivectorE{2,4,6,8,10};

mostrarVector(mivectorE);

for(int i=0;i<=10;i++){

  if(i!=mivectorE[i]){
    mivectorE=insertar(mivectorE,i,i);
  }

}
cout<<endl;
mostrarVector(mivectorE);


  return 0;
}

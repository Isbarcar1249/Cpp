#include <iostream>
#include <vector>
using namespace std;
void imprimirVector(vector<double> vector){
  for (int i =0 ;i<vector.size();i++){

  cout<<  vector[i]<<endl;
  }
}
vector<double> RellenarVector(vector<double> vector,double tama){
  for (int i =0 ;i<tama;i++){
  cout<<"En la posicion i "<<i<<" El tamaño es: "<<vector.size()<<endl;
  cout<<"En la posicion i "<<i<<" la capacidad es: "<<vector.capacity()<<endl;
  vector.push_back(i);
  }
  return vector;
}

int  main() {
 int tama;
  cout<<"Dime el tamanio del vector y te lo relleno ";
 cin>>tama;
  vector <double> vectorDouble(tama,0);
vector<double> vectorCopia;


//vectorCopia=vectorDouble;


vectorCopia=RellenarVector(vectorCopia,tama);
imprimirVector(vectorCopia);
cout<<vectorCopia.at(10);

  return 0;
}

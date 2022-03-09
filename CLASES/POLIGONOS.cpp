#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
class poligono{
private:
    vector <double> lados;

  public:
    poligono(vector <double> lados){
      this ->lados=lados;

    }
    void imprimir(){
      for(double elemento: this->lados){
        cout<<elemento<<endl;
      }
    }
};


int main(){
  vector <double> ladosPentagono{10,10,10,10,10};
  poligono pentagono(ladosPentagono);
  pentagono.imprimir();

  return 0;
}

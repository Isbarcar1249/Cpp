#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

class persona{
private:
  string nombre;
  string dni;
  int edad;
public:
  persona(string nombre,string dni,int edad=18){
    setNombre(nombre);
    setdni(dni);
    setEdad(edad);
  }
  void setNombre(string nombre){
    this->nombre=nombre;
  }
  void setdni(string dni){
    this->dni=dni;
  }
  void setEdad(int edad){
    this->edad=edad;
  }
  int getEdad(){
    return this->edad;
  }
  string getNombre(){
    return this->nombre;
  }
  string getDni(){
    return this->dni;
  }

  void imprimir(){
    cout<<"Me llamo "<<this->nombre<<" tengo "<< this->edad<<"  anos y mi DNI es "<<this->dni<<"."<<endl;
  }
  void mayorEdad(){
    (edad>18)? cout<<"Eres mayor de edad":cout<<"Eres menor de edad";
  }

};

int main(){
  persona ismael("ismael","77889978t",23);

  ismael.imprimir();
  ismael.mayorEdad();
  return 0;
}

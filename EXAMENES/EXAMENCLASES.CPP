#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

class persona{
private:
  string nombre;
  string dni;
  int edad;
  bool VIP;
  vector <int> viip;

  void setVip(vector <int> viip){
    int suma=0;
    int elemento;
    int comprobacion=0;
    int numeromult13=0;
    for(elemento;elemento< this->viip.size();elemento++){
      suma+=elemento;
      cout<<suma;
      if (elemento%13==0){
        comprobacion=1;
        numeromult13=elemento;
        cout<<suma;
      }
    }
    if (suma%11==0){
      cout<<"Eres vip "<<endl;
      this->VIP=true;
      cout<<"olaaaa";
    }
    else if(comprobacion=1){
      suma=numeromult13;
      elemento=0;
      for(int i=0;i<2;i++){
        cout<<"Dime dos numeros de nuevo ";
        cin>>elemento;
        suma+=elemento;
      }
      if (suma%11==0){
        cout<<"Eres vip "<<endl;
        this->VIP=true;
      }
    }
    else{
      cout<<" NO eres vip pringao "<<endl;
      this->VIP=false;
    }
}


public:
  persona(string nombre,string dni,int edad=18,  vector <int> viip={0,0,0}){
    setNombre(nombre);
    setdni(dni);
    setEdad(edad);
    this->setVip(viip);

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

  bool getVip(){
    return this->VIP;
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
  void vip(){

  }

};

int main(){
  vector <int>contrasena={13,0,1};
  persona ismael("ismael","77889978t",23,contrasena);

  ismael.imprimir();
  ismael.mayorEdad();
  cout<<endl<<endl;
  cout<<ismael.getVip();
  return 0;
}

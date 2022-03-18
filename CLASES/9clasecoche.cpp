#include <iostream>
using namespace std;

class Motor{
  private:
    bool estado;
  // Métodos
  private:  // No hace falta pero Celia tiene TOC de código.
    void setEstado(bool estado){
      this->estado = estado;
    }
  public:
    //constructor
    Motor(){
      this->estado = false; // Apagado
    }
    //destructor
    ~Motor(){
      cout<<"Pasamos por el destructor de motor"<<endl;
    }
    bool getEstado (){
      return this->estado;
    }
    void arrancar(){
      this->setEstado(true);
    }
    void apagar(){
      this->setEstado(false);
    }
    void imprimir(){
      if (this->estado){
        cout << "El motor esta encendido.";
      } else {
        cout << "El motor esta apagado.";
      }
      cout << endl;
    }
};
class Ventana{
  private:
    bool estado;
  // Métodos:
  private:
    void setEstado(bool estado){
      this->estado = estado;
    }
  public:
    Ventana(){
      this->estado = false; // Esta cerrada.
    }
    ~Ventana(){
      cout<<"Pasamos por el destructor de ventana"<<endl;
    }
    bool getEstado (){
      return this->estado;
    }
    void cerrarVentana(){
      this->setEstado(false);
      cout << "Cierro la ventana" << endl;
    }
    void abrirVentana(){
      this->setEstado(true);
      //cout << "Abro la ventana" << endl;
      //cout << "el valor de ventanilla en abroVentana es " << this->estado << endl;
    }
    void imprimir(){
      if (this->estado){
        cout << "La ventana esta abierta.";
      } else {
        cout << "La ventana esta cerrada.";
      }
      cout << endl;
    }

};
class Puerta{
  private:
    bool estado;
    Ventana ventanilla;
  private:
    void setEstado(bool estado){
      this->estado = estado;
    }
  public:
    Puerta(){
      this->estado = false;
    }
    ~Puerta(){
        cout<<"Pasamos por el destructor de puerta"<<endl;
        delete & ventanilla;
    }
    bool getEstado (){
      return this->estado;
    }
    Ventana & getVentanilla(){
      //cout << "el valor de ventanilla en getVentanilla es " << ventanilla.getEstado() << endl;
      return this->ventanilla;
    }
    void cerrarPuerta(){
      this->setEstado(false);
    }
    void abrirPuerta(){
      this->setEstado(true);
    }
    void imprimir(){
      if (this->estado){
        cout << "La puerta esta abierta.";
      } else {
        cout << "La puerta esta cerrada.";
      }
      cout << endl;
      this->ventanilla.imprimir();
    }
};
class Coche{
  private:
    Puerta puertaIzq;
    Puerta puertaDer;
    Motor v10;
    bool estado;
  private:
    void setEstado(bool estado){
    this->estado=estado;// coche cerrado
    }
  public:
    Coche(){
      this->estado=false;
    }
    ~Coche(){
      delete &puertaDer;
      delete &puertaIzq;
      delete & v10;
        cout<<"Pasamos por el destructor de coche"<<endl;
    }
    bool getEstado(){
      return this->estado;
    }
    void abrirCoche(){
      this->setEstado(true);
    }
    void cerrarCoche(){
        this->setEstado(false);
      }
    void imprimir(){
      if (this->estado){
        cout << "El coche esta abierto.";
      } else {
        cout << "El coche esta cerrado.";
      }
      cout<<endl;
      this->puertaDer.imprimir();
      this->puertaIzq.imprimir();
      this->v10.imprimir();
    }
    Puerta & getPuertaDer(){
      return this->puertaDer;
    }
    Puerta & getPuertaIzq(){
      return this->puertaIzq;
    }
    Motor & getMotor(){
      return this->v10;
    }








};
int main(){
  Motor miMotor;
  miMotor.imprimir();
  miMotor.arrancar();
  miMotor.imprimir();
  miMotor.apagar();
  miMotor.imprimir();
  cout << "---------------------------------" << endl;
  Ventana miVentana;
  miVentana.imprimir();
  miVentana.abrirVentana();
  miVentana.imprimir();
  miVentana.cerrarVentana();
  miVentana.imprimir();
  cout << "---------------------------------" << endl;
  Puerta miPuerta;
  miPuerta.imprimir();
  miPuerta.abrirPuerta();
  miPuerta.imprimir();
  miPuerta.cerrarPuerta();
  miPuerta.imprimir();
  cout << "---------------------------------" << endl;
  miPuerta.getVentanilla().getEstado();
  miPuerta.getVentanilla().abrirVentana();
  miPuerta.getVentanilla().getEstado();
  miPuerta.getVentanilla().imprimir();
  cout << "---------------------------------" << endl;
  Coche miCoche;
//  miCoche.imprimir();
  miCoche.abrirCoche();
  //miCoche.imprimir();
  miCoche.getMotor().arrancar();
  miCoche.getPuertaDer().abrirPuerta();
  miCoche.getPuertaDer().getVentanilla().abrirVentana();
  miCoche.imprimir();


  return 0;
}

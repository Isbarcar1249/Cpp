#include <iostream>
using namespace std;

class cable{
  private:
    double longitud;
    string entrada;
    string salida;
    string tipo;

  public:
    cable(double longitud=1,string entrada="USB",string salida="C",string tipo="Carga y datos"){
      this->longitud=longitud;
      this->entrada=entrada;
      this->salida=salida;
      this->tipo=tipo;
    }
    ~cable(){}
    void setLongitud(double longitud){
      this->longitud=longitud;
    }
    void setEntrada(string entrada){
      this->entrada=entrada;
    }
    void setSalida(string salida){
      this->salida=salida;
    }
    void setTipo(string tipo){
      this->tipo=tipo;
    }
    double getLongitud(){
      return this->longitud;
    }
    string getEntrada(){
      return this->entrada;
    }
    string getSalida(){
      return this->salida;
    }
    string getTipo(){
      return this->tipo;
    }
    void imprimir(){
      cout<<"Cable tipo "<<this->tipo<<" de longitud "<<this->longitud<<" entrada "<<this->entrada<<" y salida "<<this->salida<<endl;
    }
};
class adaptador{
  private:
    double potenciaE;
    double potenciaS;
    int numPuertos;
  public:

     adaptador(double potenciaE=20,double potenciaS=5,int numPuertos=3){
       this->potenciaE=potenciaE;
       this->potenciaS=potenciaS;
       this->setNumPuertos(numPuertos);
     }
     ~adaptador(){}

    void setPotenciaE(double potenciaE){
      this->potenciaE=potenciaE;
    }
    void setPotenciaS(double potenciaS){
      this->potenciaS=potenciaS;
    }
    void setNumPuertos(int numPuertos){
      if (numPuertos>3){
        numPuertos=3;
      }
      else if(numPuertos<0){
        numPuertos=1;
      }
      this->numPuertos=numPuertos;
    }
    double getPotenciaE(){
      return this->potenciaE;
    }
    double getPotenciaS(){
      return this->potenciaS;
    }
    int getNumeroPuertos(){
      return this->numPuertos;
    }
    void imprimir(){
      cout<<"Adaptador potencia entrada "<<this->potenciaE<<"W potencia de salida "<<this->potenciaS<<"W numero de puertos "<<this->numPuertos<<endl;
    }
};
class cargador{
  private:
    cable cable1;
    adaptador adaptador1;
    int numeroCables;
  public:
    cargador(cable cable1,adaptador adaptador1,int numeroCables=1){
      this->cable1=cable1;
      this->adaptador1=adaptador1;
      this->numeroCables=numeroCables;
    }
    ~cargador(){
      delete & cable1;
      delete & adaptador1;
    }
    void imprimir(){
      this->cable1.imprimir();
      this->adaptador1.imprimir();
      cout<< "Hay "<< this->numeroCables <<" cables conectados"<<endl;
    }
    void setCable (cable cable1){
      this->cable1=cable1;
    }
    void setAdaptador(adaptador adaptador1){
      this->adaptador1=adaptador1;
    }
    cable getCable(){
      return this->cable1;
    }
    adaptador getAdaptador(){
      return this->adaptador1;
    }
    void setnumeroCables(int numeroCables){
      this-> numeroCables=numeroCables;
    }
    int getNumeroCables(){
      return this->numeroCables;
    }
    void puertosdisponibles(){
      int num= adaptador1.getNumeroPuertos();

      if(num>this->numeroCables){
        cout<<"Quedan "<<num-(this->numeroCables)<<" puertos puertos disponibles"<<endl;
      }
      else {
        cout<<"No hay puertos disponibles "<<endl;
      }
    }
  /*  void cableDatos(){
      if(cable1.getTipo()=("Datos"){
        cout<<"Sí hay uno que sirve"<<endl;
      }
      else if (cable1.getTipo()="Carga y datos")
      {cout<<"Sí hay uno que sirve"<<endl;}
      else{
        cout<<"No te sirve ninguno"<<endl;
      }
    }
*/

};
int main(){
  cable micable;
  adaptador miadaptador(10,10,3);
  cargador micargador(micable,miadaptador,2);
  cout<<"Ismael Barranco Carballo"<<endl;
  //micable.imprimir();
  //miadaptador.imprimir();

//  micargador.puertosdisponibles();

  micargador.imprimir();
  micargador.puertosdisponibles();
  return 0;
};

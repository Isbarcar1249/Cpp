#include <iostream>
using namespace std;

class Mueble{
protected:
  string material;
  double ancho;
  double alto;
  double largo;
public:
  Mueble (string material ="Acer0", double ancho=2.00, double alto =1.20, double largo =2.00){
    this->material= material;
    this->ancho= ancho;
    this->alto= alto;
    this->largo= largo;
  }
  void setMaterial(string material){
    this->material= material;
  }
  void setAncho(double ancho){
    this->ancho= ancho;
  }
  void setAlto(double alto){
    this->alto= alto;
  }
  void setLargo(double largo){
    this->largo= largo;
  }
  string getMaterial(){
    return this->material;
  }
  double getAncho(){
    return this->ancho;
  }
  double getAlto(){
    return this->alto;
  }
  double getLargo(){
    return this->largo;
  }
  void imprimir(){
    cout << "Material: " << this->material <<endl << "Medidas: "<< this->ancho<<"x" << this->alto<<"x" << this->largo<< endl;
  }

};

class Mesa : public Mueble{
private:
  int nPatas;
  string forma;
public:
  Mesa (string material ="Acer0", double ancho=2.00, double alto =1.20, double largo =2.00 , int nPatas = 4, string forma = "rectangular") : Mueble (material, ancho, alto, largo){
    this->nPatas = nPatas;
    this->forma = forma;
  }
  void setNPatas(int nPatas){
    this->nPatas = nPatas;
  }
  void setForma (string forma){
    this->forma = forma;
  }
  int getNPatas(){
    return this->nPatas;
  }
  string getFormas(){
    return this->forma;
  }
  void imprimir(){
    cout << "Material: " << this->material <<endl << "Medidas: "<< this->ancho<<"x" << this->alto<<"x" << this->largo<< endl<< "Forma: " << this->forma  << endl<<"Patas: "<<this->nPatas;
  }

  void superficie(){
    cout << "Superficie: " << this->ancho*this->largo << " m^2." << endl;
  }

};

class Armario : protected Mueble{
private:
  string puerta;
  int numBaldas;
public:
  Armario (string material ="Acer0", double ancho=2.00, double alto =1.20, double largo =2.00, string puerta = "Normal", int numBaldas = 2) : Mueble (material, ancho, alto, largo){
    this->puerta = puerta;
    this->numBaldas = numBaldas;
  }
  void setpuerta (string puerta){
    this->puerta = puerta;
  }
  void setnumBaldas (int numBaldas){
    this->numBaldas = numBaldas;
  }
  string getpuerta(){
    return this->puerta;
  }
  int getnumBaldas(){
    return this->numBaldas;
  }
  void imprimir(){
    cout << "Material: " << this->material <<endl << "Medidas: "<< this->ancho<<"x" << this->alto<<"x" << this->largo<< endl<<"Puerta: " << this->puerta << endl<<"Baldas: " << this->numBaldas<< endl;
  }
  void superficie(){
    cout << "Superficie: " << this->ancho*this->largo*this->numBaldas << " m2." << endl;
  }
  void volumen(){
    cout << "volumen:" << this->ancho*this->largo*this->alto << " m3." << endl;
  }

};

int main(){

  Mueble muebleDef;
  Mesa mesaDef;
  Armario armarioDef;
  Armario miArmario ("Madera", 2.00, 2, 1, "Corredera", 4);
  Mesa miMesa ("Aluminio", 1.4, 1.5, 0.7, 3, "triangular");
  Mueble miMueble ("Aluminio", 1, 2.2, 0.5);


cout<<endl;
  muebleDef.imprimir();
  cout<<endl;
  mesaDef.imprimir();
  cout<<endl;
  miMueble.imprimir();
  cout<<endl;
  miMesa.imprimir();
  cout<<endl;
  armarioDef.imprimir();
  cout<<endl;
  miArmario.imprimir();

  //  "   No se puede --cout << miArmario.getLargo();\"" << endl;
  //  "   No se puede -- miArmario.getnumBaldas() << endl;
  //  "   No se puede -- miMesa.getLargo() << endl;

  miArmario.superficie();
  cout<<endl;
  miMesa.superficie();
  cout<<endl;
  miArmario.volumen();
  return 0;
}

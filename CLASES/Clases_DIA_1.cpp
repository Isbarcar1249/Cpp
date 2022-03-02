#include <iostream>
using namespace std;

class rectangulo {
private:
  double base =5;
  double altura =1;
public:
  //Constructor
  rectangulo(double base=1,double altura=1){
    //this-> base = base;
    //this-> altura = altura;
    setBase(base);
    setAltura(altura);
  }

  //set
  void setBase(double base){
    (base>0)? this-> base = base : this->base=1;
  }
  void setAltura(double altura){
    (altura>0)? this-> altura = altura : this->altura=1;
  }
  //get
  double getBase(){
    return this->base;
  }
  double getAltura(){
    return this->altura;
  }
  //metodos
  double area(){
    return this->base*this->altura;
  }
  double perimetro(){
    return 2*this->base + 2*this->altura;
  }
  //imprimir
  string imprimir(){
    cout<<"la base de folio es "<<this->base<<" y la altura es "<<this->altura<<endl;

  }
};
class circulo{
  private:
  double radio;
  const double PI= 3.141592;
public:
  circulo(double radio=1){
    setRadio(radio);

  }
  void setRadio(double radio){
    (radio>0)? this->radio= radio: this->radio=1;
  }
  double getRadio(){
    return this->radio;
  }
  string imprimir(){
    cout<<"El radio del circulo es: "<<this->radio<<endl;
  }
  double area(){
    return PI*this->radio*this->radio;
  }
  double perimetro(){
    return PI*this->radio*2;
  }

};

int main(){

rectangulo folio(-1,40);
rectangulo tablero;
rectangulo manta(4);
circulo cristal(5);
cout<<"manta"<<endl;
manta.imprimir();
cout<<"area manta"<<endl;
cout<<manta.area()<<endl;
cout<<"tablero"<<endl;
tablero.imprimir();
cout<<"folio"<<endl;
folio.imprimir();
folio.setBase(2);
folio.setAltura(5);
cout<<"folio nuevo"<<endl;
folio.imprimir();


cout<<"cristal"<<endl;
cristal.imprimir();
cout<<"Area del cristal: "<<cristal.area()<<endl;
cout<<"perimetro del cristal: "<<cristal.perimetro()<<endl;




  return 0;
}

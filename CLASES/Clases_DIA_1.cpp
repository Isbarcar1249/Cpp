#include <iostream>
#include <math.h>
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
class triangulo{
  private:
    //vector<double> lados {lado1,lado2,lado3};
  double lado1;
  double lado2;
  double lado3;
  string color;
public:
  triangulo(double lado1,double lado2,double lado3,string color){
    setLado1(lado1);
    setLado2(lado2);
    setLado3(lado3);
    setColor(color);
  }
  void setLado1(double lado1){
    (lado1>0)?  this->lado1= lado1: this->lado1=1;
  }
  double getLado1(){
    return this->lado1;
  }
  void setLado2(double lado2){
    (lado2>0)?  this->lado2= lado2: this->lado2=1;
  }
  double getLado2(){
    return this->lado2;
  }

  void setLado3(double lado3){
    (lado3>0)?  this->lado3= lado3: this->lado3=1;
  }
  double getLado3(){
    return this->lado3;
  }
  void setColor(string color){
    this->color=color;
  }
  string getColor(){
    return this->color;
  }



  string imprimir(){
    cout<<"los lados del triangulo son: "<<lado1<<","<<lado2<<","<<lado3<<" y es de color "<< color<<endl;
  }
  double area(){
    double s=perimetro();
    double area;
    s=s/2;
    area=pow((s*(s-lado1)*(s-lado2)*(s-lado3)),0.5);
    return area;
  }
  double perimetro(){
    return lado1+lado2+lado3;
  }

};

int main(){
  /*

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
cout<<"perimetro del cristal: "<<cristal.perimetro()<<endl;*/

triangulo figura(6,6,6,"rojo");
figura.imprimir();
cout<<"EL area es "<<figura.area()<<endl;

cout<<"EL perimetro es "<<figura.perimetro()<<endl;




  return 0;
}

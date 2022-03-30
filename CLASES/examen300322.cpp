#include <iostream>
 using namespace std;

class juego{
protected:
  string nombre;
public:
  double precio;
public:
  juego(string nombre="Mario",double precio=60){
    this->nombre = nombre;
    this->precio = precio;
  }
  ~juego(){
    cout<<"juego reventao"<<endl;
  }
  string getNombre(){
    return this->nombre;
  }
  double getPrecio(){
    return this->precio;
  }
  void setNombre(string nombre){
    this->nombre = nombre;
  }
  void setPrecio(double precio){
    this->precio = precio;
  }
  void imprimir(){
    cout<<"Nombre: "<<this->nombre<<endl<<"Precio: "<<this->precio<<" euros"<<" el precio con descuento es "<<descuento()<<endl;
  }
  double descuento(){
    return this->precio-10;
  }
};
class videojuego : public juego {
public:
  string plataforma;
public:
  videojuego(string plataforma="PC"): juego(nombre="Mario", precio=220){
    this->plataforma = plataforma;
  }
  ~videojuego(){
    cout<<"Videojuego a la verga"<<endl;
  }
  string getPlataforma(){
    return this->plataforma;
  }
  void setPlataforma(string plataforma){
    this->plataforma = plataforma;
  }
  double descuento1(){
    double descuentito=0;
    double precio1=0;
    descuentito=this->precio*(0.2);

    if(descuentito>10){
      precio1 = this->precio-descuentito;

    }
    else{
      precio1= this->precio-10;
    }
    return precio1;
  }
  void imprimirVideojuego(){
    cout<<"Nombre: "<<this->nombre<<endl<<"Precio: "<<this->precio<<" euros"<<" el precio con descuento es "<<descuento1()<<endl<<"Plataforma: "<<this->plataforma<<endl;
  }

};

class juegoMesa{
private:
  int max;
  int min;
public:
  juegoMesa(int max=10, int min=2){
    this->max=max;
    this->min = min;
  }
  ~juegoMesa(){
    cout<<"A tomar por culo el juego de mesa "<<endl;
  }
  int getMax(){
    return this->max;
  }
  int getMin(){
    return this->min;
  }
  void setMax(int max){
    this->max = max;
  }
  void setMin(int min){
    this->min = min;
  }
  void jugadores(int numJ){
    if(numJ>=this->min && numJ<=this->max){
      cout<<"Podeis jugar al juego de mesa"<<endl;
    }
    else{
      cout<<"No puedes jugar al juego de mesa"<<endl;
    }
  }
};

 int main(){
cout<<"Ismael Barranco Carballo"<<endl;
juego miJuego;
juego miJuego1("kirby",80);
videojuego miVideojuego;
videojuego miVideojuego1("Xbox");
juegoMesa mijuegoMesa;
juegoMesa mijuegoMesa1(3,2);
string plat="play";
miJuego.imprimir();
//miJuego.setNombre("Antonio"); No se puede al estar protegido
miJuego.setPrecio(30);
miJuego.imprimir();
cout<<endl;
miJuego1.imprimir();
cout<<endl;
miVideojuego.imprimirVideojuego();
//miVideojuego.setPlataforma(plat);
miVideojuego.imprimirVideojuego();
cout<<endl;
miVideojuego1.imprimirVideojuego();
cout<<endl;
mijuegoMesa.jugadores(3);
cout<<endl;
mijuegoMesa1.jugadores(4);
cout<<endl;


cout<<"he definido todo en la clase padre y en lo demas public, ya que lo que no se puede modificar es el nombre del juego "
   return 0;
 }

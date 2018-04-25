#include <iostream>

class Calentador
{
private:
    int temperatura;
    int incremento;
public:
    Calentador();
    void calentar();
    void enfriar();
    void imprimirTemperatura();
    int accedeTemperatura() const;
};//punto y coma obligatorio

Calentador::Calentador()
{
    incremento=3;
    temperatura=15;
}

void Calentador::calentar()
{
    if(temperatura+incremento<=30){
        temperatura+=incremento;}
}

void Calentador::enfriar()
{
    if(temperatura-incremento<=-10){
        temperatura-=incremento;}
}

void Calentador::imprimirTemperatura()
{
    std::cout<<"La temperatura es: "<<temperatura<<std::endl;
}

int Calentador::accedeTemperatura() const
{
    return temperatura;
}

int main()
{
    Calentador c1;
    Calentador c2;
    
    for(int i=0;i<10;i++){
        c1.calentar();
        c1.imprimirTemperatura();
    }
    
    c1.calentar();
    c1.imprimirTemperatura();
    
    c2.enfriar();
    c2.imprimirTemperatura();
}
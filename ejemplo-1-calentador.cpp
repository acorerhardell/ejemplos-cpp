#include <iostream>

class Calentador
{
private:
    int temperatura;
public:
    Calentador();
    void calentar();
    void enfriar();
    void imprimirTemperatura();
};//punto y coma obligatorio

Calentador::Calentador()
{
    temperatura=15;
}

void Calentador::calentar()
{
    temperatura+=5;
}

void Calentador::enfriar()
{
    temperatura-=5;
}

void Calentador::imprimirTemperatura()
{
    std::cout<<"La temperatura es: "<<temperatura<<std::endl;
}

int main()
{
    Calentador c1;
    Calentador c2;
    
    c1.calentar();
    c1.imprimirTemperatura();
    
    c2.enfriar();
    c2.imprimirTemperatura();
}
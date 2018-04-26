#include <iostream>

class Calentador
{
private:
    int temperatura;
    int incremento;
    int min;
    int max;
public:
    Calentador(int min, int max,int temperatura=0);
    void calentar();
    void enfriar();
    void imprimeCentigrados() const;
    void imprimeFarenheit() const;
    int accedeTemperatura() const;
};//punto y coma obligatorio

Calentador::Calentador(int min, int max, int temperatura)
{
    /*if(min>max){
        //std::cout<<"Error en el rango min-max"<<std::endl;
        //std::exit(EXIT_FAILURE);
        //throw "Error en el rango min-max";
    }*/
    
    incremento=3;
    
    if(temperatura>=min&&temperatura<=max){
        this->temperatura=temperatura;}
    else{
        this->temperatura=min;}
    this->min=min;
    this->max=max;
}

void Calentador::calentar()
{
    if(temperatura+incremento<=this->max){
        temperatura+=incremento;}
}

void Calentador::enfriar()
{
    if(temperatura-incremento>=this->min){
        temperatura-=incremento;}
}

void Calentador::imprimeCentigrados() const
{
    std::cout<<"La temperatura es: "<<temperatura<<"°C"<<std::endl;
}

int Calentador::accedeTemperatura() const
{
    return temperatura;
}

void Calentador::imprimeFarenheit() const
{
    float farenheit=temperatura*1.8+32;
    std::cout <<"La temperatura es: " << farenheit<<"°F"<<std::endl;
}

int main()
{
    try {
        Calentador c1{-10,10};
        
        Calentador c2{30,10,0};
        
        c1.calentar();
        c1.imprimeCentigrados();
        c1.imprimeFarenheit();
        
        c2.enfriar();
        c2.imprimeCentigrados();
        c2.imprimeFarenheit();
        }
    catch (const std::runtime_error &e)
}
#include<iostream>

class Fraccion
{
    private:
        int numerador;
        int denominador;
    public:
        Fraccion(int numerador=1, int denominador=1);
        Fraccion operator+(Fraccion otra);
        Fraccion operator-(Fraccion otra);
        Fraccion operator*(Fraccion otra);
        Fraccion operator/(Fraccion otra);
        void imprime();
    friend void operator <<(std::ostream &,Fraccion);
    friend void operator >>(std::istream &,Fraccion &);
};

Fraccion::Fraccion(int numerador, int denominador)
{
    this->numerador=numerador;
    this->denominador=denominador;
}

Fraccion Fraccion::operator+(Fraccion otro)
{
    Fraccion retorno{};
    retorno.numerador=this->numerador*otro.denominador+this->denominador*otro.numerador;
    retorno.denominador=this->denominador*otro.denominador;
    return retorno;
}

Fraccion Fraccion::operator-(Fraccion otro)
{
    Fraccion retorno{};
    retorno.numerador=this->numerador*otro.denominador-this->denominador*otro.numerador;
    retorno.denominador=this->denominador*otro.denominador;
    return retorno;
}

Fraccion Fraccion::operator*(Fraccion otro)
{
    Fraccion retorno{};
    retorno.numerador=this->numerador*otro.numerador;
    retorno.denominador=this->denominador*otro.denominador;
    return retorno;
}

Fraccion Fraccion::operator/(Fraccion otro)
{
    Fraccion retorno{};
    retorno.numerador=this->numerador*otro.denominador;
    retorno.denominador=this->denominador*otro.numerador;
    return retorno;
}

void Fraccion::imprime()
{
    std::cout<<this->numerador<<"/"<<this->denominador;
}

void operator<<(std::ostream &salida, Fraccion f)
{
    salida<<f.numerador<<"/"<<f.denominador<<"\n";
}

void operator>>(std::istream &entrada, Fraccion &f)
{
    entrada>>f.numerador>>f.denominador;
}

int main()
{
    Fraccion cuatro;
    Fraccion uno{3,8};
    Fraccion dos{4,5};
    Fraccion f3=uno+dos;
    
    std::cin>>cuatro;
    std::cout<<cuatro;
    
    std::cout<<f3;
    f3.imprime();
    
}
/*
    Ejercicio de preparacion
        Un polinomio de grado 2 tiene la forma p(x)=ax^2+bx+c
        Escribir un programa llamado polinomio.cpp para representar y evaluar polinomios de grado 2.
*/

#include<iostream>
#include<cmath>

class Polinomio
{
    private:
        int cuadratico;
        int lineal;
        int constante;
    public:
        Polinomio(int cuadratico=1,int lineal=1, int constante=1);
        int operator ()(int x);
        float operator ~ ();
        friend void operator >>(std::istream&,Polinomio &);
        friend void operator <<(std::ostream&,Polinomio);
};

Polinomio::Polinomio(int cuadratico,int lineal, int constante)
{
    this->cuadratico=cuadratico;
    this->lineal=lineal;
    this->constante=constante;
}

int Polinomio::operator () (int x)
{
    int resultado;
    resultado=cuadratico*x*x+lineal*x+constante;
    return resultado;
}

float Polinomio::operator ~()
{
    float regreso=(-lineal-std::sqrt(lineal*lineal+4*cuadratico*constante))/(2*cuadratico);
    return regreso;
}

void operator>>(std::istream &entrada, Polinomio &polinomio)
{
    std::cin>>polinomio.cuadratico>>polinomio.lineal>>polinomio.constante;
}

void operator<<(std::ostream &salida, Polinomio polinomio)
{
    std::cout<<polinomio.cuadratico<<"x^2+"<<polinomio.lineal<<"x+"<<polinomio.constante<<"\n";
}

int main()
{
    Polinomio p;
    std::cin>>p;
    std::cout<<"El Polinomio "<<p;
    int x=2;
    std::cout<<"Evaluado en "<<x<<" es "<<p(x)<<"\n";
    std::cout<<"Raiz: "<<~p;
}

/*
    Sobrecargar el operador ~ para obtener la raiz del polinomio
*/
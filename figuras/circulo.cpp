#include "circulo.h"

Circulo::Circulo(float radio)
{
    this->radio=radio;
}

void Circulo::calcularArea()
{
    area=3.1416*radio*radio;
}
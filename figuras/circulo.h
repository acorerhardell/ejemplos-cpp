#ifndef CIRCULO_INCLUIDO
#define CIRCULO_INCLUIDO

#include "figura.h"

class Circulo : public Figura
{
private:
    float radio;
public:
    Circulo(float radio);
    void calcularArea();
};

#endif
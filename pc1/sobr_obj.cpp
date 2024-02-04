#include "sobr_obj.h"
#include <iostream>
Tempo::Tempo(){}

Tempo::Tempo(int h, int m):horas(h), minutos(m)
{}

void Tempo::Exibir() const
{
    std::cout << "horas:"<< horas << " minutos:" << minutos <<std::endl; 
}

Tempo Tempo::operator+(const Tempo &t) const
{
    Tempo soma;
    soma.minutos = minutos + t.minutos;
    soma.horas = horas + t.horas;
    return soma;   
}

Tempo Tempo::operator-(const Tempo &t) const
{
    Tempo sub;
    sub.minutos = minutos - t.minutos;
    sub.horas = horas - t.horas;
    return sub;  
    
}

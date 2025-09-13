#pragma once
#include <EstadoFoco.hpp>

class Foco
{
private:
    EstadoFoco estado;

public:
    ~Foco() {}
    void Encender(EstadoFoco=true) {}
    void Apagar(EstadoFoco=false) {}
};
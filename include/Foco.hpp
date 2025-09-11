#pragma once
#include <EstadoFoco.hpp>
class Foco
{
private:
    EstadoFoco estado;

public://constructor
    Foco() {
        estado=false;

    }
    ~Foco() {}//destructor
    void Encender(){
        estado=true;

    }
    void Apagar(){
        estado=false;
    }
    EstadoFoco MostrarEstado(){
        return estado;
    }
};
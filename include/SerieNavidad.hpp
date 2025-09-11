#pragma once
#include<Foco.hpp>
#include<iostream>
using namespace std;
class SerieNavidad
{
private:
    foco[10];
public:
    SerieNavidad(/* args */) {}
    ~SerieNavidad() {}
    void Encender(){
        for (int numFoco = 0; numFoco < 10; numFoco++)
        {
            focos[numFoco].Encender()
            /* code */
        }
        
    }
    oid Apagar(){
        for (int numFoco = 0; numFoco < 10; numFoco++)
        {
            focos[numFoco].Apagar()
            /* code */
        }
        void ImprimirSerie(){
            for (int numFoco = 0; numFoco < count; numFoco++)
            {
               cout<<focos[numFoco].MostarEstado();
            }
            
        }
};
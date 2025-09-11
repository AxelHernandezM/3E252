#include <Foco.hpp>
#include <iostream>
#include <SerieNavidad.hpp>
using namespace std;

int main(int argc, char const *argv[])
{
SerieNavidad miSerieNavidad;
miSerieNavidad.Encender();
miSerieNavidad.ImprimirSerie();
miSerieNavidad.Apagar();
miSerieNavidad.ImprimirSerie();


Foco foco;
foco.Apagar();
foco.Encender();


    cout 
    <<"Foco:"
    <<foco.MostrarEstado()
    << endl;

    return 0;
}

#include <iostream>
#include<string>
#include <ftxui/screen/screen.hpp>
#include <thread>
#include <chrono>
using namespace std;
using namespace ftxui;
#include <dibujo.hpp>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    
Screen pantalla = Screen::Create(
    Dimension::Full(),
    Dimension::Fixed(30)
);
Dibujo vaca(
    Color::Yellow,
    Color::Black,
    {
string("        (__) "),  
string("`\\------(oo) "),   
string("  ||    (__) "),    
string("  ||w--||    ")
});
Dibujo caballo(
    Color::Yellow,
    Color::Black,
    {
string(" ,             "),
string("/,`\\           "),
string("` | \\____\\\\    "),
string(" _(      ) \\   "),
string(" \\-\\~~~_|\\  \\  "),
string("    \\ `   \\  ` "),
string("    `     `    ")
});
Dibujo megaMente(
    
        Color::Green1,
    Color::Black,
    {
string("⣞⢽⢪⢣⢣⢣⢫⡺⡵⣝⡮⣗⢷⢽⢽⢽⣮⡷⡽⣜⣜⢮⢺⣜⢷⢽⢝⡽⣝ "), 
string("⠸⡸⠜⠕⠕⠁⢁⢇⢏⢽⢺⣪⡳⡝⣎⣏⢯⢞⡿⣟⣷⣳⢯⡷⣽⢽⢯⣳⣫⠇"),
string("⠀⠀⢀⢀⢄⢬⢪⡪⡎⣆⡈⠚⠜⠕⠇⠗⠝⢕⢯⢫⣞⣯⣿⣻⡽⣏⢗⣗⠏ "), 
string("⠀⠪⡪⡪⣪⢪⢺⢸⢢⢓⢆⢤⢀⠀⠀⠀⠀⠈⢊⢞⡾⣿⡯⣏⢮⠷⠁   "),  
string("⠀⠀⠀⠈⠊⠆⡃⠕⢕⢇⢇⢇⢇⢇⢏⢎⢎⢆⢄⠀⢑⣽⣿⢝⠲⠉    "),  
string("⠀⠀⠀⠀⠀⡿⠂⠠⠀⡇⢇⠕⢈⣀⠀⠁⠡⠣⡣⡫⣂⣿⠯⢪⠰⠂    "),   
string("⠀⠀⠀⠀⡦⡙⡂⢀⢤⢣⠣⡈⣾⡃⠠⠄⠀⡄⢱⣌⣶⢏⢊⠂      "),   
string("⠀⠀⠀⠀⢝⡲⣜⡮⡏⢎⢌⢂⠙⠢⠐⢀⢘⢵⣽⣿⡿⠁⠁       "),   
string("⠀⠀⠀⠀⠨⣺⡺⡕⡕⡱⡑⡆⡕⡅⡕⡜⡼⢽⡻⠏⠀         "),    
string("⠀⠀⠀⠀⣼⣳⣫⣾⣵⣗⡵⡱⡡⢣⢑⢕⢜⢕⡝⠀          "),    
string("⠀⠀⠀⣴⣿⣾⣿⣿⣿⡿⡽⡑⢌⠪⡢⡣⣣⡟⠀           "),    
string("⠀⠀⠀⡟⡾⣿⢿⢿⢵⣽⣾⣼⣘⢸⢸⣞⡟⠀            "),     
string("⠀⠀⠀⠀⠁⠇⠡⠩⡫⢿⣝⡻⡮⣒⢽⠋              ")
}
);
caballo.x=60;
caballo.y=10;
vaca.y=10;
for (int i = 0; i < 60; ++i) {
        pantalla.Clear();
        vaca.moverDerecha();
        caballo.moverIzquierda();
        megaMente.x = 20;
        megaMente.y = 15;
        vaca.imprimir(pantalla);
        caballo.imprimir(pantalla);
        megaMente.imprimir(pantalla);
        pantalla.Print();
if(i<10){
    caballo.moverArriba();
}else{ 
    if (i>50){
    caballo.moverAbajo();
}}

        this_thread::sleep_for(chrono::milliseconds(100));
    }
    pantalla.Clear();
    return 0;
}
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <thread>
#include <chrono>
#include <iostream>
#include <Dibujo.hpp>
#include <GestorDibujos.hpp>
#include <Corral.hpp>
using namespace ftxui;

int main()
{
    // Crear la ventana
    auto screen = Screen::Create(
        Dimension::Fixed(80),
        Dimension::Fixed(24));

    // Agregar código de los elementos de la granja
    const std::vector<std::u32string> pez1 = {
        U" ><(((0>",
    };
    const std::vector<std::u32string> ballena1 = {
        U"   __v_",
        U" (____\\/{"
    };
    const std::vector<std::u32string> alga1 = {
        U"        //",
        U"       \\\\",
        U"        //",
        U"       \\\\",
        U"       // ",
        U"   ~~~~~~~~~~~"};
    const std::vector<std::u32string> delfin1 = {
        U"       ,  ",
        U"      )\\  ",
        U"(\_.-'----a`-. ",
        U"(/~~````(/~^^`",
};
    const std::vector<std::u32string> peze1 = {
        U"  _",
        U" /_|",
        U"('_)<|",
        U"\\_|"};
    const std::vector<std::u32string> marea1 = {
        U"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~",
        U"0           0                         0               0                   0                   0                     0  ",
     U"     0           0                         0               0                   0                   0                     0  "};

    const std::vector<std::u32string> fondo1 = {
        U" _____________ ",
        U" ~*~*~*~*~*~*~ "};

    GestorDibujos gestor;
    gestor.Agregar(Dibujo(2, 4, peze1, ftxui::Color::Orange1));     
    gestor.Agregar(Dibujo(-80, 2, ballena1, ftxui::Color::Blue));     
    gestor.Agregar(Dibujo(-5, -15, alga1, ftxui::Color::Green));      
    gestor.Agregar(Dibujo(25, 7, delfin1, ftxui::Color::Cyan));    
    gestor.Agregar(Dibujo(40, 17, pez1, ftxui::Color::Red));     
    gestor.Agregar(Dibujo(-5, 3, marea1, ftxui::Color::GrayLight));  
    gestor.Agregar(Dibujo(20, 20, fondo1, ftxui::Color::Yellow1)); 
    gestor.Agregar(Dibujo(20, 20, fondo1, ftxui::Color::Yellow1)); 
    gestor.Agregar(Dibujo(20, 20, fondo1, ftxui::Color::Yellow1)); 
    gestor.Agregar(Dibujo(20, 20, fondo1, ftxui::Color::Yellow1)); 
    gestor.Agregar(Dibujo(20, 20, fondo1, ftxui::Color::Yellow1));
    gestor.Agregar(Dibujo(20, 20, fondo1, ftxui::Color::Yellow1)); 
    gestor.Agregar(Dibujo(20, 20, fondo1, ftxui::Color::Yellow1)); 
    gestor.Agregar(Dibujo(20, 20, fondo1, ftxui::Color::Yellow1));  
    gestor.Agregar(Dibujo(-6, 5, pez1, ftxui::Color::Purple3));
    gestor.Agregar(Dibujo(5, 15, alga1, ftxui::Color::Green)); 
    gestor.Agregar(Dibujo(5, 15, alga1, ftxui::Color::Green)); 
    gestor.Agregar(Dibujo(5, 15, alga1, ftxui::Color::Green)); 
    gestor.Agregar(Dibujo(5, 15, alga1, ftxui::Color::Green)); 
    gestor.Agregar(Dibujo(5, 15, alga1, ftxui::Color::Green)); 
    gestor.Agregar(Dibujo(5, 15, alga1, ftxui::Color::Green)); 
    gestor.Agregar(Dibujo(5, 15, alga1, ftxui::Color::Green)); 
    gestor.Agregar(Dibujo(5, 15, alga1, ftxui::Color::Green)); 
    gestor.Agregar(Dibujo(5, 15, alga1, ftxui::Color::Green)); 
    gestor.Agregar(Dibujo(5, 15, alga1, ftxui::Color::Green)); 
    gestor.Agregar(Dibujo(80, 2, ballena1, ftxui::Color::Blue));

    // Crear corral más grande y vacas separadas dentro
    /*
    Corral corral(50, 15, 30, 18, ftxui::Color::White);
    corral.AgregarAnimal(Dibujo(67, 16, vaca1, ftxui::Color::GrayLight));
    corral.AgregarAnimal(Dibujo(60, 19, vaca1, ftxui::Color::GrayLight));
    corral.AgregarAnimal(Dibujo(53, 17, vaca1, ftxui::Color::GrayLight));
    */


    int frames = 120;
    for (int frame = 0; frame < frames; ++frame)
    {
        // Limpia la pantalla
        screen.Clear();

        // Animación: mover vacas y tractor (índices actualizados)
        gestor.dibujos[0].x = 85  - (4*frame % 80);  //pescado
       // gestor.dibujos[1].x = 80 - (frame % 100); //ballena
        gestor.dibujos[5].x = 0 - (6*frame % 10); //alga
        gestor.dibujos[25].x = 80 - (frame % 100); //alga
        gestor.dibujos[4].x = 0 + (frame % 80); //alga
        gestor.dibujos[6].x = 80 - (frame % 10); //fondo 
        gestor.dibujos[7].x = 67 - (frame % 10); //fondo
        gestor.dibujos[8].x = 54 - (frame % 10); //fondo
        gestor.dibujos[9].x = 41 - (frame % 10); //fondo
        gestor.dibujos[10].x = 28 - (frame % 10); //fondo  
        gestor.dibujos[11].x = 16 - (frame % 10); //fondo
        gestor.dibujos[12].x = 6 - (frame % 10); //fondo 
        gestor.dibujos[13].x = 0 - (frame % 10); //fondo     
        gestor.dibujos[14].x = 0 + (2*frame % 80); //pescado
        gestor.dibujos[15].x = 80 -  (frame % 120); //alga
        gestor.dibujos[16].x = 90 -  (frame % 120); //alga
        gestor.dibujos[17].x = 108 - (frame % 120); //alga
        gestor.dibujos[18].x = 118 - (frame % 120); //alga
        gestor.dibujos[19].x = 138 - (frame % 120); //alga
        gestor.dibujos[20].x = 168 - (frame % 120); //alga
        gestor.dibujos[21].x = 178 - (frame % 120); //alga
        gestor.dibujos[22].x = 188 - (frame % 120); //alga
        gestor.dibujos[23].x = 200 - (frame % 120); //alga
        gestor.dibujos[24].x = 208 - (frame % 120); //alga
        gestor.dibujos[3].x = -20 + (3*frame % 100); //delfin
        gestor.DibujarTodos(screen);
        //corral.Dibujar(screen);

        // Imprime la pantalla y resetea el cursor
        std::cout << screen.ToString();
        std::cout << screen.ResetPosition();
        std::cout << std::flush;

        std::this_thread::sleep_for(std::chrono::milliseconds(120));
    }
    return 0;
}
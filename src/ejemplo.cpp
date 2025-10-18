#include <iostream>
#include <string>
#include <sstream>
#include <thread>
#include <chrono>

using namespace std;
// #include<ftxui/component/component.hpp>
// #include<ftxui/component/screen_interactive.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>

using namespace ftxui;

string nave =
    string("     ___     \n") +
    string(" ___/   \\___ \n") +
    string("/   '---'   \\  \n") +
    string("'--_______--'\n") +
    string("     / \\      \n") +
    string("    /   \\      \n") +
    string("    /\\O/\\      \n") +
    string("    / | \\      \n") +
    string("    // \\    \n");

int main(int argc, char const *argv[])
{
    auto pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Fixed(10));

    int x = 0;
    int y = 0;
   

    while (true)
    {
        x++; 
        stringstream ss(nave);
        string linea;
        int nolinea = 0;
        while (getline(ss, linea))
        {
            int columna = 0;
            for (auto &&letra : linea)
            {
                auto &pixel = pantalla.PixelAt(x + columna, y + nolinea);
                // pixel.blink = true;
                // pixel.background_color = Color::Blue;
                // pixel.foreground_color = Color::Red;
                pixel.character = letra;
                columna++;
            }
            nolinea++;
        }

        pantalla.Print();
        pantalla.Clear();
        cout << pantalla.ResetPosition();
        this_thread::sleep_for(chrono::milliseconds(500));
    }
    // cout<<pantalla.ToString()<<endl;

    // cout << "compila" << endl;
    return 0;
}
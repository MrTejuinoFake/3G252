#include<iostream>

using namespace std;
//#include<ftxui/component/component.hpp>
//#include<ftxui/component/screen_interactive.hpp>
#include<ftxui/screen/screen.hpp>
#include<ftxui/screen/color.hpp>

using namespace ftxui;


int main(int argc,char const *argv[]) {
    auto pantalla = Screen::Create(
        Dimension::Full(   ),
        Dimension::Fixed(10)    
    );

    int x=0;
    int y=0;

   auto& pixel = pantalla.PixelAt(5,5); 
   pixel.blink = true;
    pixel.background_color = Color::Blue;
    pixel.foreground_color = Color::Red;
    pixel.character = 'A';

pantalla.Print();
//cout<<pantalla.ToString()<<endl;


    //cout << "compila" << endl;
    return 0;
}
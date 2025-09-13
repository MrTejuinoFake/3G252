#include <iostream>
using namespace std;


int main(       )
{
     int variable = 7;
    cout<<"direccion: "<<&variable<<endl; //operador de direccion
    cout<<"valor: "<<variable<<endl;
    cout<<"indireccion: "<<*(&variable)<<endl; //operador indireccion (entrega valor)

    cout<<"int: " <<sizeof(int)<<endl;
    cout<<"bool: "<<sizeof(bool)<<endl;
    cout<<"long: "<<sizeof(long)<<endl;
    cout<<"char: "<<sizeof(char)<<endl;
    cout<<"double: "<<sizeof(double)<<endl;
    cout<<"byte: "<<sizeof(byte)<<endl;
    cout<<"float: "<<sizeof(float)<<endl;

    void* direccion =malloc(4); 
    cout<<"direccion: " <<direccion<<endl;
    cout<<"tamaño: "<< sizeof(direccion)<<endl;
    cout<< "direccion puntero:: "<<&direccion<<endl;

    //casteo
    int prueba = 64;
    char casteo = (char)prueba;
    cout<<"resultado :"<<casteo<<endl;

    return 0;
}
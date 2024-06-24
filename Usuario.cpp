#include <iostream>
#include <string>
using namespace std;

void funcion_usuario(string& usuario, string&contra)
{
    
    cout<<"Ingresa tu usuario\n"<<endl;
    cin>>usuario;
    cout<<"Ingresa tu contraseña\n"<<endl;
    cin>>contra;
   
}

void funcion_verificar(string& usuario, string& contra)
{
    
    do {
        funcion_usuario (usuario, contra);
        if  ( usuario != "Persona16" || contra !="Lab82");{
          cout<< "Ingresa tu usuario y/o contraseña\n"<<endl;  
        }
    } while ( usuario != "Persona16" || contra !="Lab82");
    
}

int main ()
{
    string usuario, contra;
    funcion_verificar(usuario,contra);
    cout<<"Bienvenido persona16 a la plataforma del conocimiento"<<endl;
    return 0;
}
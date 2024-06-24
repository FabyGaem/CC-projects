#include<iostream>
#include<ctime>

using namespace std;
int main ()
{
    float num1,num2,resultado;
    char operador;
    // Inicializamos variables
    
    int OK=1,x=0;
    
    /*Despliega tiempo de ejecución en pantalla*/
    time_t tiempo=(0);
    tm*tlocal=localtime(&tiempo);
    char output [128];
    strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
    
    /*Despliega mensaje de bienvenido*/
    cout<<"\n \t********************************************"<<endl;
    cout<<"\t BIENVENIDOS AL CURSO FUNDAMENTOS DE PROGRAMACION\n"<<endl;
    cout<<"\t ENTREGABLE 2 --> ESTRUCTURA SWITCH"<<endl;
    cout<<"\t ********************************************"<<endl;
   cout<<"\t MI PRIMER CALCULADORA "<<endl;
    cout<<"\t ********************************************"<<endl;
    cout<<"\n \t USUARIO: FABIOLA HERNANDEZ CORDERO \t"<<output<<endl;
    cout<<"\t  Operador                                   "<<endl;
    cout<<"\t ********************************************"<<endl;
    cout<<"\t  + SUMA               \n"<<endl;
    cout<<"\t  - RESTA               \n"<<endl;
    cout<<"\t  / DIVISION               \n"<<endl;
    cout<<"\t  * MULTIPLICACION               \n"<<endl;
    cout<<"\t ********************************************"<<endl; 
    cout<<"Ingrese el primer número:";
    cin>>num1;
    cout<<"Ingrese el operador (+,-,/,*):";
    cin>>operador;
    cout<<"Ingrese el segundo número:";
    cin>>num2;
    switch (operador){
        case '+':
        resultado=num1+num2;
        break;
        case '-':
        resultado=num1-num2;
        break;
        case '/':
        resultado=num1/num2;
        break;
        case '*':
        resultado=num1*num2;
        break;
        default:
        cout<<"Operador inválido";
        return 0;
    }
    cout<<"El resultado es:"<<resultado<<endl;

    return 0;
}

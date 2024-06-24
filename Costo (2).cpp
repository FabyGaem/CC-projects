#include <iostream>
#include<ctime>

using namespace std;

int main()
{
    //Inicializamos variables
    float monto=0, total_ini=0,x=0;
    char tipo;
    int OK=1;
    
    /*Despliega tiempo de ejecución en pantalla*/
    time_t tiempo=time (0);
    tm *tlocal=localtime(&tiempo);
    char output [128];
    strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
    
    /*Despliega mensaje de bienvenido*/
    cout<<"\n \t********************************************"<<endl;
    cout<<"\t BIENVENIDOS AL CURSO FUNDAMENTOS DE PROGRAMACION\n"<<endl;
    cout<<"\t ENTREGABLE 2"<<endl;
    cout<<"\t ********************************************"<<endl;
	cout<<"\t T I E N D A   *** C O S T O @ C O S T O  ***** "<<endl;
    cout<<"\t ********************************************"<<endl;
    cout<<"\n \t USUARIO : FABIOLA HERNANDEZ CORDERO\t"<<output<<endl;
    cout<<"\t ********************************************"<<endl;
    cout<<"\t   A N I V E R S A R I O              2023***"<<endl;
    cout<<"\t ********************************************"<<endl;
    cout<<"\t TIPO DE MEMBRESIA     ***D E S C U E N T O***"<<endl;
    cout<<"\t ********************************************"<<endl;
    cout<<"\t   TIPO                      A         10% \n"<<endl;
    cout<<"\t   TIPO                      B         15% \n"<<endl;
    cout<<"\t   TIPO                      C         20% \n"<<endl;
    cout<<"\t   TIPO                      D         25% \n"<<endl;
    cout<<"\t ********************************************"<<endl; 
    cout<<"Ingrese el monto de compra\t";
    cin>> monto;
    cout<<"Ingrese el tipo de membresia: A,B,C,D?\t";
    cin>> tipo;
    
if (tipo=='A')
{
    cout<<"Tipo de membresia A -> Se aplica el 10%"<<endl;
    total_ini=monto-(monto*0.10);
    }
else if (tipo=='B')
{
    cout<<"tipo de membresia B -> Se aplica el 15%"<<endl;
    total_ini=monto-(monto*0.15);
}
else if (tipo=='C')
{
    cout<<"tipo de membresia C -> Se aplica el 20%"<<endl;
    total_ini=monto-(monto*0.20);
}https://www.onlinegdb.com/online_c_compiler#_editor_2669303701
else if (tipo=='D')
{
    cout<<"tipo de membresia C -> Se aplica el 25%"<<endl;
    total_ini=monto-(monto*0.25);
}    
else
{
    OK=0;
}
//Si es un tipo de membresia válido
if (OK==1)
{
    cout<<"\n Total a pagar con la membresia: "<<total_ini<<endl;
    //Por aniversario, se da otro 10% adicional a parir del total_ini
    x=total_ini-(total_ini*.10);
    cout<<"\n Total a pagar por aniversario: "<<endl<<x<<endl;
    cout<<"\n ¡Gracias por tu preferencia, Regresa pronto!"<<endl;
}
else
{
    cout<<"La membresia seleccionada no existe, Favor de verificar"<<endl;
    }
    return 0;
}
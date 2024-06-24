#include <iostream>
#include <conio.h>

using namespace std;


struct Nodo { 
    int dato;
    Nodo *siguiente;
    
};

//Prototipo de función
void agregarPila(Nodo *&,int);
void sacarPila(Nodo *&, int &n);
void mostrar_pila(Nodo *&);
void menu();

int main ()
{
    Nodo *pila=NULL;
    int dato, opcion, no_elementos;
    char rpt;
    
    do{
        menu();
        cin>>opcion;
        switch(opcion){
            case 1:
            //agregar a la pila
            do{
                cout<<"\nIngrese un número:";
                cin>>dato;
                agregarPila(pila,dato);
                cout<<"\n¿Deseas agregar más números?(s/n):";
                cin>>rpt;
                
            }while((rpt=='S')||(rpt=='s'));
            break;
            
            case 2:
            //Sacar de la pila
            cout<<"\nSacando elementos de la Pila:";
            cout<<"\nIntresa el número de elementos que deseas desapilar de la pila:";
            cin>>no_elementos;
            
            if(pila!=NULL){
                cout<<"\nLa pila tiene los siguientes elementos:";
                mostrar_pila(pila);
                for(int i=0; i<no_elementos; i++){
                    sacarPila(pila,dato);
                    cout<<"\nEl dato:"<<dato<<" ha sido desapilado";
                }
                cout<<"\nLa pila ahora tiene los siguientes elementos: ";
                mostrar_pila(pila);
            } else{
                cout<<"La pila esta vacía";
            }
            break;
            
            case 3:
            if(pila!=NULL){
                cout<<"\nMostrando la pila";
                mostrar_pila(pila);
                
            }else{
                cout<<"\nLa pila esta vacía";
            }
            break;
            
            case 4:
            while(pila!=NULL){
                sacarPila(pila,dato);
                if(pila!=NULL){
                    cout<<dato<<" , ";
                }else{
                    cout<<dato<<".";
                    cout<<"\n\nPila destruida";
                }
            }
            break;
        }
    }while(opcion!=5);
    
    cout<<"\nGracias!";
    
    
    getch();
    return 0;
}
    
    
void agregarPila(Nodo *&pila,int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato =n;
    nuevo_nodo->siguiente=pila;
    pila = nuevo_nodo;
    
    cout <<"\tEl elemento "<<n<<" ha sido agregado a la PILA correctamente";
    
}

void sacarPila(Nodo *&pila, int &n){
    Nodo *aux= pila;
    n= aux->dato;
    pila= aux->siguiente;
    delete aux;
}

void mostrar_pila(Nodo *&pila){
    Nodo *aux=pila;
    cout<<"\nListado de todos los elementos de la pila.\n";
    while(aux !=NULL)    {
        cout<<aux->dato<<" , ";
        aux=aux->siguiente;
    }
    cout<<"\n";
    
}

void menu(){
    cout<<"\n1.Aplirar elementos";
    cout<<"\n2.Desapilar elemento";
    cout<<"\n3.Mostrar pila";
    cout<<"\n4.Destruir pila";
    cout<<"\n5.Salir";
    cout<<"\nIngrese una opción: ";
}

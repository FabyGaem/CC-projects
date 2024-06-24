#include <iostream>
#include <conio.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

struct cola{
    Nodo *frente;
    Nodo *fin;
};

void menu();
void agregarCola(struct cola &q, int valor){
    struct Nodo *aux= new(struct Nodo);
    aux->dato=valor;
    aux->siguiente=NULL;
    if(q.frente==NULL)
    q.frente=aux;
    else
    (q.fin)->siguiente=aux;
    q.fin=aux;
}
void mostrarCola(struct cola q){
    struct Nodo *aux;
    aux=q.frente;
    while (aux!=NULL){
        cout<<" "<<aux->dato;
        aux=aux->siguiente;
    }
}
void vaciarCola (struct cola &q){
    struct Nodo*aux;
    while(q.frente!=NULL){
        aux=q.frente;
        delete(aux);
    }
    q.frente=NULL;
    q.fin=NULL;
}

int desencolar(struct cola &q){
    int num;
    struct Nodo *aux;
    aux=q.frente;
    num=aux->dato;
    q.frente=(q.frente)->siguiente;
    delete(aux);
    return num;
}
    
int main (){
    
    struct cola q;
    q.frente=NULL;
    q.fin=NULL;
    
    int dato;
    int opc;
    int x;
    
    menu();
    
    
    getch();
    return 0;
    
}

void menu (){
    struct cola q;
    q.frente=NULL;
    q.fin=NULL;
    
   
    int dato;
    int opc;
    int x;
    
    do{
        cout<<"\t.:MENU:.\n";
        cout<<"1. Insertar un elemento a la cola"<<endl;
        cout<<"2. Desencolar elemento"<<endl;
        cout<<"3. Mostrar cola"<<endl;
        cout<<"4. Destruir cola"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Ingrese una opción: ";
        cin>>opc;
        
        switch(opc){
            case 1:
            cout<<"\nIngrese el número: ";
            cin>>dato;
            agregarCola(q,dato);
            cout<<"\nNúmero "<<dato<<" encolado.";
            break;
            
            case 2:
            x=desencolar(q);
            cout<<"\nNúmero "<<dato<<" desencolado.";
            
            break;
            
            case 3:
            cout<<"\nMostrando cola: ";
            if(q.frente!=NULL) mostrarCola(q);
            else
            cout<<"\nCola vacía."<<endl;
            
            break;
            
            case 4:
            vaciarCola(q);
            cout<<"\nCola eliminada";
            
            break;
            
        }
        cout<<endl<<endl;
        
    }while(opc!=5);
    
}



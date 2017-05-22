#include <iostream>
#include "heap.h"

using namespace std;

int main()
{
    Heap *holi=new Heap();
    holi->enqueue(18);
    holi->enqueue(25);
    holi->enqueue(14);
    holi->enqueue(10);
    holi->enqueue(52);/*
    holi->enqueue(50);
    holi->enqueue(48);
    holi->enqueue(41);
    holi->enqueue(34);*/
    holi->imprime();





    return 0;
}



#ifndef HEAP_H
#define HEAP_H


using namespace std;
const int DEFAULT_SIZE = 9;

class Heap {

public:

    Heap();/* Construye una nueva cola de prioridad vacía respaldada por un heap binario. */
    ~Heap();/* Limpia toda la memoria asignada por esta cola de prioridad. */
    int size();/* Retorna el número de elementos de la cola de prioridad. */
    void set_size(int size);/*cambiamos el tamaño de nuestro arreglo*/
    void swap(int &a,int &b);/*intercambia los valores de a y b*/
    bool isEmpty();/* Retorna si la cola de prioridad está o no vacía. */
    void enqueue(int value);/* Encola una nuevo elemento en la cola de prioridad. */
    int peek();/* Devuelve, pero no elimina, el primer elemento en la cola de prioridad.*/
    int dequeue();/* Devuelve y elimina el primer elemento de la cola de prioridades. */
    void imprime();

private:

    int allocatedLength;/* Almacena la longitud del array que contiene el heap.*/
    int n;/* Almacena el número real de elementos en el heap.*/
    int* T;/* Array que representa el heap.*/
    void grow();/* Aumenta el tamaño del array cuando se necesita más espacio.*/
    void bubbleUp(int childPos);/* Metodo para subir un nodo recién colocado para obtener un heap válido. */
    void bubbleDown(int parentPos);/* Metodo para descender para obtener un heap válido. */

};
#endif // HEAP_H






#include "heap.h"
#include <iostream>
using namespace std;



Heap::Heap() {

allocatedLength = DEFAULT_SIZE;

n = 0;

T = new int[allocatedLength];

}

Heap::~Heap() {

delete[] T;

}
void Heap::set_size(int size){
    n=size;
}

void Heap::swap(int &a, int &b){
    int
    temp=a;
    a=b;
    b=temp;
}

void Heap::grow(){
    allocatedLength*=2;
    int *newElems=new int[allocatedLength];
    for(int i=0;i<n;i++){
        newElems[i]=T[i];
    }
    delete[] T;
    T=newElems;
}

int Heap::size(){
    return n;
}
bool Heap::isEmpty(){
    return(size()==0);
}
void Heap::enqueue(int value){
    if(T[n]!=0)
        grow();
    set_size(n+1);
    T[n-1]=value;
    bubbleUp(n);
}

int Heap::peek(){
    if(isEmpty())
        cout<<"vacio"<<endl;
    return T[0];
}
int Heap::dequeue(){
    if(isEmpty())
        cout<<"vacio"<<endl;
    else{
    int temp=peek();
    set_size(n-1);//grow inverso :v
    bubbleDown(0);
    return temp;
    }
}

void Heap::bubbleUp(int childPos){
    if(childPos==0)
        return;
    int parent=(childPos-1)/2;
    if(T[childPos]>T[parent]){
        swap(T[childPos],T[parent]);
        bubbleUp(parent);
    }
}

void Heap::bubbleDown(int parentPos){
    int child_i=2*parentPos+1;
    int child_r=2*(parentPos+1);

    if(T[parentPos]>T[child_i]){
        swap(T[parentPos],T[child_i]);
        bubbleDown(child_i);
    }
    else if(T[parentPos]>T[child_r]){
        swap(T[parentPos],T[child_r]);
        bubbleDown(child_r);
    }

}

void Heap::imprime(){
    for(int i=0;i<n;i++){
        cout<<T[i]<<"\t";
    }
    cout<<endl;
}







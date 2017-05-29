#include <iostream>
#include "heap.h"
#include <vector>

using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
/*void imprime(vector<int> *vecto){
    for(unsigned int i=0;i<vecto->size();i++){
        printf("%d\n", vecto[i]);
    }
    cout<<endl;
}*/

vector<int>* heap_sort(Heap *heap){
    heap=new Heap();
    vector<int> *vecto;
    int i=0;
    while(!heap->isEmpty()){
        vecto[i]=heap->dequeue();
        /*if(vecto[i]>vecto[i+1])
            swap(vecto[i],vecto[i+1]);*/
    }
    return vecto;


}

int main()
{
    Heap *heap=new Heap();
    vector<int> *vecto;
    heap->enqueue(3);
    heap->enqueue(6);
    heap->enqueue(21);
    heap->enqueue(80);
    heap->enqueue(54);
    vecto=heap_sort(heap);
    //imprime(vecto);




    return 0;
}

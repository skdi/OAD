#include <map>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
   map<int, int> histogram;//creo una variable de tipo map , donde recibe el primer elemento para llegar al segundo y los compara
   ifstream f("datos.txt");//abro el archivo de datos
   int count;//inicializo un contador
   while (f) {//mientras el archivo este abierto
      int val;//creo una variable auxiliar
      f >> val;//le paso los valores del archivo a mi variable aux
      if (!f)//si mi archivo ya no esta abierto ,termino el ciclo
          break;
      histogram[val]++;//voy sumando el valor del archivo a la variable tipo map y actualizo su posicion
      count++;//aumento el valor de mi contador
   }
   for (int i = 0; i <= 100; i+=10) {//genero un for enntre el tamaño del problema
      cout << i << "s:";//imprimo los primeros datos(aunentandolos de 10 en 10)
      for (int j = 0; j < histogram[i]; j++) {//creo un segundo bloque que recorra el histograma
         cout << "*" ;//e imprima un asterisco por cada vez que se encuentre con ese valor
      }
      cout << endl;
   }
   return 0;
}

//3er ejercicio ./a.out <draw.in

//empezemos :V
/////////////////////////////////////////////////////////////////////////////////////////
//Header cripto.h
/////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <math.h>
#include <string.h>
using namespace std;

class cripto{
  private:
    int clave=0;
  public:
    string alfabeto="abcdefghijklmnopqrstuvwxyz ";
    cripto(int clave1);
    cripto();
    bool validarclave(int clave1);
    bool validarmensaje(string mensaje);
    string codifica(string mensaje);
    string decodifica(string mensaje);
    void setclave(int clave1);
    int getclave();
    
};

/////////////////////////////////////////////////////////////////////////////////////////
//cpp cripto.cpp
/////////////////////////////////////////////////////////////////////////////////////////

#include "cripto.h"

bool cripto::validarclave(int clave){
  if(clave>=1)
    return true;
  else return false;
}
bool cripto::validarmensaje(string mensaje){
  if(!mensaje)
    return false;
  else return true;
}
void cripto::setclave(int clave1){
  if(validarclave(clave1))
    clave=clave1;
}
void cripto::getclave(){
  return clave;
}

cripto::cripto(int clave1){
    setclave(clave1);
}
cripto::cripto(){
  printf("clave guardada\n");
}
string cripto::codifica(string mensaje){
  //funcion de codificado
}
string cripto::decodifica(string mensaje){
  //funcion de decodificado
}

/////////////////////////////////////////////////////////////////////////////////////////
//main main.cpp
/////////////////////////////////////////////////////////////////////////////////////////

#include "cripto.h"

void main(){
  
  cripto emisor(3);
  string mensaje="holi boli";
  string mensajecifrado=emisor.codificica(mensaje);
  cout<<mensajecifrado<<endl;
  cripto receptor();
  string mensajedecodificado=receptor.decodificar(mensajecifrado);
  cout<<mensajedecodificado<<endl;
  
  
}

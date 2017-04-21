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
    string mensaje="";
  public:
    string alfabeto="abcdefghijklmnopqrstuvwxyz ";
    cripto(int clave1);
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


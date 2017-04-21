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
    cripto(int clave);
    bool validarclave(int clave);
    bool validarmensaje(string mensaje);
    string codifica(string mensaje);
    string decodifica(string mensaje);
    void setclave();
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


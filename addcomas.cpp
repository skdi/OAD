#include <iostream>
#include <string>
#include <cctype>//header para funciones de clasificacion
using namespace std;


string addCommas(string digits);


int main(){
    
    while(true){
        string digits;
        cout << "ingrese el numero: ";
        getline(cin, digits);
        if (digits == "") break;//si no ingresaste un numero ,sale
        cout << addCommas(digits) << endl;//llamada a la funcion
    }
    return 0;
}


string addCommas(string digits){
    string result;//string copia
    if (digits.length() > 3){//si tiene mas de 3 digitos
        int t = 0;

        for(int i = digits.length() - 1; i >= 0; i --){//recorrido del string
            result = digits[i] + result;//copio todos los numeros
            t++;//actualizo posicion
            if(t%3 == 0){//cada 3 numeros agrego una coma
                result = ',' + result;

            }
        }
        if(result[0] == ','){//si ingresaste una coma al inicio la borrara
            result.erase(0, 1);
        }
    } else {
        result = digits;//si es menor de 3 digitos devuelve el mismo valor
    }
    return result;//retorno el string copia con las comas
}

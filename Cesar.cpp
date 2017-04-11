#include <iostream>
#include <string>

using namespace std;

string cesar(string str, int shift);

int main()
{
    string str, encoded_string;  //creando los strings
    int shift;//creando el shift


    cout << "ingrese el mensaje "<<endl;
    getline(cin, str);  //ingreso el texto en mi string

    cout << "\n ingrese el shift ";
    cin >> shift; //guardo el valor del shift

    encoded_string = cesar(str, shift); //paso los parametros a la funcion y lo guardo en un
    //segundo string

    cout << "\n mensaje secreto: " << encoded_string << "\n\n";

    return 0;
}

string cesar(string str, int shift)
{
    string temp = str; //creo una copia de mi string
    int length; //int de longitud

    length = (int)temp.length();

    for (int i = 0; i < length; i++)//recorro todo el string
    {
        if (isalpha(temp[i]))//isalpha es una macro que verifica 
            //el entero c pertenece al rango de letras (A a Z o a a z),
        {
            for (int j = 0; j < shift; j++)
            {
                if (temp[i] == 'z')//conservacion de minisculas
                {
                    temp[i] = 'a';
                }
                else if (temp[i] == 'Z')//conservacion de mayus
                {
                    temp[i] = 'A';
                }
                else
                {
                    temp[i]++;//actualizando posicion
                }
            }
        }
    }

    return temp;//retorno el string cambiado(la copia).
}

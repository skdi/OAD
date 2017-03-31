#include<iostream>
#include<string>
using namespace std;

string reverse(string str)
{
    string word = "";//string vacio

    if (str.length() <= 1)
    {
        return str;//si el string esta vacio devuelve el mismo
    }
    else
    {
        string str2 = str;//copia de mi string
        int n = str2.length() - 1;
        string str_final = str2.substr(n, 1);//guardo la ultima letra

        str2 = str_2.substr(0, n);//subcadena de tamaño n
        word += reverse(str2);//concateno la ultima ltra
        return str2;
    }
    return word;//string totalmente volteado
}

main()[

  string prueba="hola como va todo?";  
  cout<<reverse(prueba)<<endl;
  return 0;
  
]

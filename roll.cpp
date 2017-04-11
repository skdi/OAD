#include "stack.h"

    Stack::Stack( ){
              top=0;
        }


        void Stack::Pop( int& poppedValue )
        {
            if (!StackEmpty()){
            top--;
            poppedValue = elements[top];
            PrintStack();
        }
            else
            PrintStack();
        }
        void Stack::PrintStack( )
        {
            cout << endl << endl;

            cout << "=+=+=+=+=+=+=+=+=" << endl;
            cout << endl;
            if ( StackEmpty() )
                cout << "stack vacio." << endl;
            else{
                for ( int ii = top - 1; ii >= 0; ii-- ){
                    cout << "posicion[" << ii << "] = "
                         << elements[ii] << endl;
                } // for
            } // else
            cout << endl;
            cout << "=+=+=+=+=+=+=+=+=" << endl;

        }

        void Stack::Push( int pushedValue )
        {
            elements[top] = pushedValue;
            top++;
            PrintStack();
        }
        bool Stack::StackEmpty( )
        {
            return (top == 0);
        }
        bool Stack::StackFull( )
        {
            return (top == 10);
        }

    //funcion del ejercicio ROLL
        void Stack::Roll(int i)
        {
            if (top == 0)
                cout << "pila vacia" << endl << endl;
            else if (top == 1)
                cout << "solo hay un elemento" << endl << endl;
            else
            {
            int temp;
            //switch entre los elementos
            temp = elements[top-i];
            elements[top-i] = elements[top-i-1];
            elements[top-i-1] = temp;
            PrintStack( );
            }
        }

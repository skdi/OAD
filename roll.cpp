#include "StdAfx.h"
#include <iostream>
#include <iomanip>

#include "Stack.h"

using namespace std;


        Stack::Stack( void ){
			  InitializeStack();
        }


    Stack::~Stack(){}
        
        
        void Stack::InitializeStack( ){
            top = 0;
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
            cout << "+ Top of Stack  +" << endl;
			cout << "=+=+=+=+=+=+=+=+=" << endl;
			cout << endl;
            if ( StackEmpty() )
                cout << "The stack is empty." << endl;
            else{
                for ( int ii = top - 1; ii >= 0; ii-- ){
                    cout << "At index[" << ii << "] = "
                         << elements[ii] << endl;
                } // for
            } // else
			cout << endl;
			cout << "=+=+=+=+=+=+=+=+=" << endl;
            cout << "+Bottom of Stack+" << endl << endl;
        }//End Function PrintStack

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
            return (top == MAX_STACK_SIZE);
        }
		

		void Stack::Roll( )
		{
			if (top == 0)
				cout << "Stack is empty, There are no elements to roll" << endl << endl;
			else if (top == 1)
				cout << "There is only one element in the stack, nothing to roll with" << endl << endl;
			else
			{
			int temp;
			temp = elements[top-1];
			elements[top-1] = elements[top-2];
			elements[top-2] = temp;
			PrintStack( );
			}
		}
		
		}

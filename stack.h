#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;
class Stack
{

    public:

        Stack();
       ~Stack(){}
        void PurgeStack( );
        void Pop( int& );
        void PrintStack( );
        void Push( int );
        bool StackEmpty( );
        bool StackFull( );
        void Roll(int i);


    private:

        int top;
        int elements[10];


};

#endif // STACK_H

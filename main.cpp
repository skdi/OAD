//stack main

#include <iostream>
#include "stack.h"

using namespace std;

int main(){

    Stack *a;

    a->Push(1);
    a->Push(2);
    a->Push(3);
    a->Push(4);
    a->PrintStack();
    a->Roll(2);
    a->PrintStack();

    return 0;
}

#include <stdio.h>

int main()
{
    int n =5;
    int * pi = &n;
    char c = 'A';
    char * pc = &c;

    printf("Antes pi = %p y pc = %p\n", pi, pc);
    pi++; //apunta a la siguiente direccion de memoria donde está albergado un entero
    pc++; //lo mismo con pc, apunta al siguiente caracter y no al siguiente byte
    printf("Despues pi = %p y pc =%p\n", pi, pc);
}
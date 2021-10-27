#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*
Para caracteres especiales
� �> \xA0; 
� �> \x82; 
� �> \xA1; 
� �> \xA2; 
� �> \xA3; 
� �> \xA4; 
� �> \xA5;
*/

struct sensores
{
    char nombre;    // 1 byte
    int valor;      // 4 byte
    long tiempo;    // 4 byte
}ldr;

struct sensoresb
{
    uint32_t tiempo;    //4
    uint16_t valor;     //2
    char nombre;        //1
}temperatura;

int main()
{

    printf("El tama\xA4o de la estructura es %d\n",sizeof(ldr));

    printf("El tama\xA4o de la estructura con tipos de datos estandar es %d\n",sizeof(temperatura));

    return 0;
}

//TORRES NAVA JAIME ERICK
#include <stdio.h>            

int main(void) {
    int a[5] = {2, 4, 6, 8, 10};
    // a es un arreglo de 5 enteros.
    // a[0]=2, a[1]=4, a[2]=6, a[3]=8, a[4]=10.
    int *p = a;  
    // p es un puntero dirigido al entero "int"
    // Se inicializa con a
    // p apunta al primer elemento (a[0])
    printf("1) a[1] = %d\n", a[1]);
    // [] es el operador de índice de arreglos
    // a[1] significa "el elemento en la posición 1, es decir, el 4" 
    // p sigue en a[0]
    printf("2) *(a+3) = %d\n", *(a+3));
    // a+3 es la suma de punteros en la dirección de a[3]
    // * es el operador de desreferencia y obtiene el valor de esa dirección
    // *(a+3) = a[3] = 8
    // p sigue en a[0]
    printf("3) *p++ = %d\n", *p++);
    // ++ incrementa p después de usarlo
    // *p++ equivale a *(p++)
    // Se evalúa *p (valor 2), luego p se incrementa y ahora p -> a[1]
    // Imprime 2
    printf("4) *++p = %d\n", *++p);
    // ++ incrementa p antes de usarlo
    // *++p equivale a *(++p)
    // Se incrementa p y ahora p -> a[2]
    // *p = 6
    // Imprime 6
    printf("5) p[1] = %d\n", p[1]);
    // p[1] equivale a *(p+1)
    // Como p -> a[2], p+1 -> a[3]
    // *(p+1) = a[3] = 8
    // Imprime 8. p no cambia
    printf("6) *(p+=2) = %d\n", *(p+=2));
    // p+=2 mueve el puntero 2 posiciones
    // Después: p -> a[4]
    // *p = a[4] = 10
    // Imprime 10
    printf("7) p - a = %ld\n", p - a);
    // p - a calcula la distancia entre los punteros
    // p -> a[4], a -> a[0].
    // Se ve la diferencia, que son 4 posiciones
    // Imprime 4
    return 0;
}


#include "fibonati.h"

int fib(int n){
    int f, aux, anterior, i;
    f = 1;
    anterior = 1;
    for(i = 2; i < n; i++){
        aux = f;
        f += anterior;
        anterior = aux;
    }
    return f;
}

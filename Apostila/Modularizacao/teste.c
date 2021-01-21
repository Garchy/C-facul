#include <stdio.h>

int main(){

    int i=3,j=5;
    int *p, *q;
    p = &i;
    i = j;

    printf("%i", i);
}
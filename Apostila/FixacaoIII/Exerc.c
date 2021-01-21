#include <stdio.h>

int main(){

    float i, n;
    n = 1;

    for (i = 1; i <= 10; i = i + 2) {
        printf("%.0f / %.0f = %.5f\n", i, n, i/n);
        n++;
    
    }

}
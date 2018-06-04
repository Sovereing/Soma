#include <stdio.h>
#include <stdlib.h>

int  soma (int a, int b){
    int c;
    c = a + b;
    return c;
}

int main(){
    int a, b, c;

    printf("Digita dois valores ai cara: ");
    scanf("%d %d", &a, &b);

    soma (a,b);

    printf("Ai o resultado: %d", soma(a,b));
    return 0;
}

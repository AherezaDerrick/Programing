#include <stdio.h>
#include <math.h>

int sum(int a, int b);

int main(){

    int a, b, c;

    printf("Enter the first number: ");
    scanf("%i", &a);

    printf("Enter the second number: ");
    scanf("%i", &b);

    c = sum(a, b);   
    printf("The sum of %i and %i is %f", a, b, c);
    return 0;
}

int sum(int a, int b){
    return a+b;
}
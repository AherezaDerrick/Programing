#include <stdio.h>
#include <math.h>

float sum(float a, float b);

int main(){

    float a, b, c;

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    c = sum(a, b);   
    printf("The sum of %f and %f is %f", a, b, c);
    return 0;
}

float sum(float a, float b){
    return a+b;
}
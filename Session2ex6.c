#include<stdio.h>

int main(){

    float r = 5;
    float PI = 3.14;

    float circumference = 2 * PI * r;
    float area = PI * r * r;

    printf("Chu vi hinh tron la %.2f\n",circumference);
    printf("Dien tich hinh tron la %.2f\n",area);

    return 0;
}
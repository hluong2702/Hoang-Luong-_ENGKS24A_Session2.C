#include<stdio.h>

int main(){

    float a = 10; 
    float b = 5.5;

    float perimetern = (a+b)/2;
    float area = a * b;

    printf("Chu vi hinh chu nhat la %.2f\n",perimetern);
    printf("Dien tich cua hinh chu nhat la %.2f\n",area);

    return 0;
}
#include<stdio.h>

int main(){
    
    int number1=10;
    int number2=5;

    int sum = number1 + number2;
    int difference = number1 - number2;
    int product = number1 * number2;
    int quotient = number1 / number2;

    printf("Tong cua a va b la %d\n",sum);
    printf("Hieu cua a va b la %d\n",difference);
    printf("Tich cua a va b la %d\n",product);
    printf("Thuong cua a va b la %d\n",quotient);
    return 0;
}
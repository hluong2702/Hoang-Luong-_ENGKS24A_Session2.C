#include <stdio.h>

int main() {
    // Khai báo một biến kiểu int, dùng để lưu trữ số nguyên
    int a = 10; // Biến a lưu trữ giá trị 10

    // Khai báo một biến kiểu float, dùng để lưu trữ số thực có phần thập phân
    float b = 3.14; // Biến b lưu trữ giá trị 3.14

    // Khai báo một biến kiểu double, dùng để lưu trữ số thực với độ chính xác cao hơn float
    double c = 3.1415926535; // Biến c lưu trữ giá trị 3.1415926535

    // Khai báo một biến kiểu char, dùng để lưu trữ một ký tự duy nhất
    char d = 'A'; // Biến d lưu trữ ký tự 'A', kiểu char có thể lưu trữ một ký tự và chiếm 1 byte bộ nhớ

    // Khai báo một biến kiểu short, dùng để lưu trữ số nguyên có phạm vi nhỏ hơn int
    short e = 100; // Biến e lưu trữ giá trị 100

    // Khai báo một biến kiểu long, dùng để lưu trữ số nguyên có phạm vi lớn hơn int
    long f = 100000L; // Biến f lưu trữ giá trị 100000

    // Khai báo một biến kiểu unsigned int, dùng để lưu trữ số nguyên không dấu
    unsigned int g = 50000; // Biến g lưu trữ giá trị 50000 

    // In ra các giá trị của các biến đã khai báo
    printf("a = %d\n", a);    // In giá trị của a (kiểu int)
    printf("b = %.2f\n", b);  // In giá trị của b (kiểu float)
    printf("c = %.10lf\n", c); // In giá trị của c (kiểu double)
    printf("d = %c\n", d);    // In giá trị của d (kiểu char)
    printf("e = %d\n", e);    // In giá trị của e (kiểu short)
    printf("f = %ld\n", f);   // In giá trị của f (kiểu long)
    printf("g = %u\n", g);    // In giá trị của g (kiểu unsigned int)

    return 0;
}

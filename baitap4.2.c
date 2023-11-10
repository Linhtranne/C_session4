#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Nhap vao 3 canh : ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Day la tam giac ");
        if (a == b && b == c) {
            printf("deu.\n");
        } else if (a == b || a == c || b == c) {
            if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
                printf("vuong can.\n");
            } else {
                printf("can.\n");
            }
        } else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
            printf("vuong.\n");
        } else {
            printf("thuong.\n");
        }
    } else {
        printf("Day khong phai la tam giac.\n");
    }

    return 0;
}
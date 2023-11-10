#include <stdio.h>

int main() {
    int month, year;

    printf("Nam: ");
    scanf("%d", &year);

    printf("Thang: ");
    scanf("%d", &month);

    if (month == 4 || month == 6 || month == 9 || month == 11)
        printf("Thang %d co 30 ngay.\n", month);
    else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            printf("Thang 2 nam %d co 29 ngay (nam nhuan).\n", year);
        else
            printf("Thang 2 nam %d co 28 ngay.\n", year);
    }
    else
        printf("Thang %d có 31 ngay.\n", month);

    return 0;
}
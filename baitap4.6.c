#include <stdio.h>

int main() {
    int a, b, c, d;
    int temp;

    printf("Nhap vao 4 so: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    temp
	 = (a < b) ? b : a;
    a = (a < b) ? a : b;
    b = temp;

    temp = (a < c) ? c : a;
    a = (a < c) ? a : c;
    c = temp;

    temp = (a < d) ? d : a;
    a = (a < d) ? a : d;
    d = temp;

    temp = (b < c) ? c : b;
    b = (b < c) ? b : c;
    c = temp;

    temp = (b < d) ? d : b;
    b = (b < d) ? b : d;
    d = temp;

    temp = (c < d) ? d : c;
    c = (c < d) ? c : d;
    d = temp;

    printf("Day so giam dan la: %d %d %d %d\n",d, c, b, a);

    return 0;
}
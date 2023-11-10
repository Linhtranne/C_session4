#include<stdio.h>
int main() {
    int ngay, thang, nam;
    printf("Ngay: ");
    scanf("%d", &ngay);
    printf("Thang: ");
    scanf("%d", &thang);
    printf("Nam: ");
    scanf("%d", &nam);

    if(nam < 0 || thang < 1 || thang > 12 || ngay < 1 || ngay > 31) {
        printf("khong hop le .\n");
    } else if((thang == 4 || thang == 6 || thang == 9 || thang == 11) && ngay == 31) {
        printf("khong hop le .\n");
    } else if(thang == 2) {
        if(nam % 4 == 0 && (nam % 100 != 0 || nam % 400 == 0)) { // Nam nhu?n
            if(ngay > 29) {
                printf("khong hop le .\n");
            } else {
                printf("hop le .\n");
            }
        } else if(ngay > 28) { 
            printf("khong hop le .\n");
        } else {
            printf("hop le .\n");
        }
    } else {
        printf("hop le\n");
    }

    return 0;
}